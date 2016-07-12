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

# Abstraction of the actor model where each actor is a thread
module threaded_actors

import actors
intrude import pthreads

redef abstract class Actor
	super Thread

	# Mailbox used to receive and process messages
	var mailbox = new BlockingQueue[Message]

	redef fun main do
		loop
			var m = mailbox.shift
			if m isa ShutDownMessage then return null
			m.invoke(instance)
		end
	end

	# Ends `self`, not responsible if work was ongoing
	fun kill do
		var n = self.native
		if n != null then n.cancel
	end
end

# A Message received by a Mailbox
# In fact, this is the reification of a call
# Each Message class represent a call to make `instance` via `invoke`
abstract class Message

	# Type of the class on which `self` make the call
	type E: Object

	# Redef this method so it calls the right one on `instance` (double dispatch)
	fun invoke(instance: E) is abstract
end

# Abstraction of proxies for threaded actors
class Proxy

	# Type of the actor `self` is proxiing
	type E: Actor

	# The proxied actor
	var actor: E is noinit

	# Kill its actor without mercy
	fun kill do actor.kill

	# Tell `actor` to terminate properly
	# Queueing a ShutDownMessage to the end of its mailbox
	fun terminate do
		var msg = new ShutDownMessage
		actor.mailbox.push(msg)
	end

	# Tell `actor` to terminate now
	# Queueing a ShutDownMessage before every other ones
	fun terminate_now do
		var msg = new ShutDownMessage
		actor.mailbox.unshift(msg)
	end

	# Wait for `actor` to terminate
	fun join do
		terminate
		actor.join
	end
end

# A Message to Rule them all... properly shutdown an Actor
class ShutDownMessage
	super Message
end
