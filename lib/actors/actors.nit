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


# Abstraction of the actors concepts
module actors is
	new_annotation actor
end

import pthreads::concurrent_collections
intrude import pthreads

# Abstraction of an actor
# It has a mailbox, can receive and process messages asynchronously
abstract class Actor

	# Type of the proxied class or the working class
	# (depending on theaded or scheduled actors)
	type V: Object

	# The instance used to do the real work
	# i.e. the real working class
	var instance: V
end

# The promise of a value which will be set asynchronously
class Future[E]
	# Value promised by `self`
	var value: nullable E = null

	# Mutex for synchronisation
	protected var mutex = new Mutex

	# Condition variable for synchronisation
	protected var cond: nullable PthreadCond = null

	# Can be used to check if the value is available without waiting
	protected var is_done = false

	# Set the value and signal so that, someone waiting for `value` can retrieve it
	fun set_value(value: E) do
		mutex.lock
		is_done = true
		self.value = value
		var cond = self.cond
		if cond != null then cond.signal
		mutex.unlock
	end

	# Return immediatly if `value` is set, or block waiting for `value` to be set
	fun join: E do
		mutex.lock
		if not is_done then
			var cond = self.cond
			if cond == null then
				cond = new PthreadCond
				self.cond = cond
			end
			cond.wait(mutex)
		end
		mutex.unlock
		return value
	end
end

# A mailbox in which you can receive message
# Basically a `ConcurrentList` renamed for actors purposes
class Mailbox[E]
	super ConcurrentList[E]
end

# A Blocking queue implemented from a `ConcurrentList`
class BlockingQueue[E]
	super ConcurrentList[E]

	# Used to block or signal on waiting threads
	private var cond = new PthreadCond

	# Adding the signal to release eventual waiting thread(s)
	redef fun push(e) do
		mutex.lock
		real_collection.push(e)
		self.cond.signal
		mutex.unlock
	end

	redef fun unshift(e) do
		mutex.lock
		real_collection.unshift(e)
		self.cond.signal
		mutex.unlock
	end

	# If the real collection is empty, we wait
	redef fun shift do
		mutex.lock
		while real_collection.is_empty do self.cond.wait(mutex)
		var r = real_collection.shift
		mutex.unlock
		return r
	end
end
