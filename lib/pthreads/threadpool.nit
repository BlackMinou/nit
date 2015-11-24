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


# Introduces a minimal ThreadPool implementation using Tasks
module threadpool

import pthreads

# A simle ThreadPool implemented with an array
class ThreadPool
	private var queue = new Array[Task]
	private var mutex = new Mutex

	# Number of threads used
	var default_nb_threads: Int is noinit

	init do
		for i in [0..default_nb_threads[ do
			var t = new PoolThread(queue, mutex)
			t.start
		end
	end

	private fun set_i(i: nullable Int) is autoinit do
		if i != null then
			default_nb_threads = i
		else
			default_nb_threads = 5
		end
	end

	# Adds a Task into the queue
	fun execute(task: Task) do
		mutex.lock
		queue.add(task)
		mutex.unlock
	end
end

# A Thread running in a threadpool
private class PoolThread
	super Thread

	var queue: Array[Task]
	var mutex: Mutex

	redef fun main do
		loop
			if queue.length > 0 then
				var t: nullable Task
				mutex.lock
				if queue.length > 0 then
					t = queue.shift
				else
					t = null
				end
				mutex.unlock
				if t != null then t.main
			end
		end
	end
end
