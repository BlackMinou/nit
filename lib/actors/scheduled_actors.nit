# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Other implementation with a scheduler for the actor model
#
# The Actor becomes the proxy, and registers itself to the scheduler when it needs to work
# On the other hand, the scheduler manage  blocking queues: One composed of threads and one composed of actors needing to work*
# The messages now need to contains the reference of the instance of the working class
module scheduled_actors

import actors
import pthreads::concurrent_collections
intrude import pthreads

redef abstract class Actor

	# Mailbox used to receive and process messages
	var mailbox = new Mailbox[Message]

	# Process `n` messages from the mailbox
	fun process_messages(n: Int) do
		for i in [0..n[ do
			mailbox.mutex.lock
			if mailbox.is_empty then
				mailbox.mutex.unlock
				return
			end
			var m = mailbox.shift
			mailbox.mutex.unlock
			m.invoke
		end
		if not mailbox.is_empty then scheduler.actors.push(self)
	end

	# Send a message in the mailbox
	fun send(message: Message) do
		mailbox.mutex.lock
		if mailbox.is_empty then scheduler.actors.push(self)
		mailbox.push(message)
		mailbox.mutex.unlock
	end
end

# Abstraction of a message
# Each method of a clas annotated `actor` will have an associated sub-class of `Message`
abstract class Message

	# Type of the instance on which the message is to be executed
	type E: Object

	# Instance on which we execute the message via the `invoke` method
	var instance: E

	# Double dispatch to execute the corresponding method on the instance
	fun invoke is abstract
end

# A `Thread` which only work is to execute messages on actors
class ActorThread
	super Thread

	# The actor associated with `self` at a certain time during execution
	# The scheduler change this when needed
	var actor: Actor

	# Number of messages to be executed on `actor` when `self` is awakened by the scheduler
	var nb_messages: Int

	# For sync with the scheduler
	var mutex = new Mutex
	
	# For sync with the scheduler
	var cond = new PthreadCond

	# Each `ActorThread` knows the scheduler blocking queue
	# So that it can register itself to it when it finished working
	# to wait for new work to do
	var scheduler_blocking_queue: ConcurrentList[Thread]

	redef fun main do
		mutex.lock
		loop
			actor.process_messages(nb_messages)
			scheduler_blocking_queue.push(self)
			cond.wait(mutex)
		end
		# NOTE: Add a condition to make the thread stop
	end

end

# A Thread specialized for the scheduler
class SchedulerThread
	super Thread

	# Threads to dispatch work on
	var threads = new BlockingQueue[ActorThread]

	# List of actors that have at least 1 message to execute on their mailbox
	var actors = new BlockingQueue[Actor]

	# Number of threads created so far
	var nb_threads = 0

	# Maximum number of thread the scheduler can use
	var max_threads = 8 is writable

	# Number of messages executed by actors each time they're assigned to a thread
	var nb_messages = 10

	# The main function of the scheduler
	fun run do
		loop
			var actor = actors.shift
			if threads.is_empty and nb_threads < max_threads then
				var thread = new ActorThread(actor, nb_messages, threads)
				thread.start
				nb_threads += 1
			else
				var thread = threads.shift
				thread.mutex.lock
				thread.actor = actor
				thread.mutex.unlock
				thread.cond.signal
			end
		end
	end

	# Needed because main must return something and run is an infinite loop
	redef fun main do
		scheduler.run
		return null
	end

end

redef class Sys

	# Each application running with actors has a scheduler launched at the begining
	var scheduler: SchedulerThread is noautoinit

	# Starting the Sheduler Thread
	redef fun run do
		scheduler = new SchedulerThread
		scheduler.start
		super
	end
end
