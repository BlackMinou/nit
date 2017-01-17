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

# Example implemented from "The computer Language Benchmarks Game" - Mandelbrot
# http://benchmarksgame.alioth.debian.org/
#
# Complete description of mandelbrot :
# https://benchmarksgame.alioth.debian.org/u64q/mandelbrot-description.html#mandelbrot
module mandelbrot is no_warning("missing-doc")

import actors
import actors::threaded_actors

class Worker
	actor

	var id: Int

	fun get_byte(x, y: Int): Int do
		var res = 0
		for i in [0..8[.step(2) do
			var zr1 = crb[x + i]
			var zi1 = cib[y]

			var zr2 = crb [x + i + 1]
			var zi2 = cib[y]

			var b = 0
			for j in [0..49[ do
				var nzr1 = zr1 * zr1 - zi1 * zi1 + crb[x+i]
				var nzi1 = zr1 * zi1 + zr1 * zi1 + cib[y]
				zr1 = nzr1
				zi1 = nzi1

				var nzr2 = zr2 * zr2 - zi2 * zi2 + crb[x + i + 1]
				var nzi2 = zr2 * zi2 + zr2 * zi2 + cib[y]
				zr2 = nzr2
				zi2 = nzi2

				if zr1 * zr1 + zi1 * zi1 > 4.0 then b = b | 2
				if zr2 * zr2 + zi2 * zi2 > 4.0 then b = b | 1
				if b == 3 then break
			end
			res = (res << 2) + b
		end
		return res ^-1
	end

	fun put_line(y: Int, line: Array[Byte]) do
		for i in [0..line.length[ do line[i] = get_byte(i * 8, y).to_b
	end

	fun work do
		for y in [(id * (data.length /nb_threads))..((id + 1)*(data.length /nb_threads))[ do
			put_line(y, data[y])
		end
	end
end

redef class Sys
	var inv_n: Float is noautoinit
	var data: Array[Array[Byte]] is noautoinit
	var crb: Array[Float] is noautoinit
	var cib: Array[Float] is noautoinit
	var nb_threads = 10
end

var n = args[0].to_i
sys.crb = new Array[Float].with_capacity(n + 7)
sys.cib = new Array[Float].with_capacity(n + 7)
sys.inv_n = 2.0 / n.to_f
for i in [0..n[ do
	sys.cib[i] = i.to_f * inv_n - 1.0
	sys.crb[i] = i.to_f * inv_n - 1.5
end
sys.data = new Array[Array[Byte]].with_capacity(n)
for i in [0..n[ do sys.data[i] = new Array[Byte].filled_with(0.to_b, (n + 7) / 8)

# Parallel Approach
var actors = new Array[Worker]
for i in [0..nb_threads[ do
	var a = new Worker(i)
	actors.add(a)
	a.async.work
end

for a in actors do
	a.async.terminate
	a.async.wait_termination
end

# sequential approach
#var w = new Worker
#w.work

var output = new FileWriter.open("out")
output.write_bytes("P4\n{n} {n}\n".to_bytes)
for i in [0..n[ do
	var length = data[i].length
	for j in [0..length[ do output.write_byte(data[i][j])
end
output.close
