import pthreads

redef class Thread

	redef fun start
	do
		var finish = sys.current_finish
		if finish != null then finish.threads.add self
		super
	end
end

class HWThread
	super Thread
	var sec: Int
	redef fun main do
		print "Hello {sec}"
		nanosleep(sec, 0)
		print "World {sec}"
		return null
	end
end

redef class Sys
	var current_finish: nullable Finished = null
end

class Finished
	var prev: nullable Finished
	var threads = new Array[Thread]
	fun start
	do
		prev = sys.current_finish
		sys.current_finish = self
	end

	fun finish
	do
		for t in threads do t.join
		sys.current_finish = prev
	end
end

fun finish: Finished
do
	return new Finished
end

with finish do
	var t1 = new HWThread(3)
	t1.start
	with finish do
		var t2 = new HWThread(2)
		t2.start
	end
	var t3 = new HWThread(2)
	t3.start
	print "2 fini!"
	#t1.join
	#t2.join
end
print "tous fini!"
