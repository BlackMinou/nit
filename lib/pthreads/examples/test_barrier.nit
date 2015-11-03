import pthreads

class HWThread
	super Thread
	var sec: Int
	redef fun main do
		print "Hello {sec}"
		nanosleep(sec, 0)
		print "World {sec}"
		return null
	end
	redef fun start
	do
		var barrier = sys.current_barrier
		if barrier != null then barrier.threads.add self
		super
	end
end

redef class Sys
	var current_barrier: nullable XBarrier = null
end

class XBarrier
	var prev: nullable XBarrier
	var threads = new Array[Thread]
	fun start
	do
		prev = sys.current_barrier
		sys.current_barrier = self
	end

	fun finish
	do
		for t in threads do t.join
		sys.current_barrier = prev
	end
end

fun barrier: XBarrier
do
	return new XBarrier
end

with barrier do
	var t1 = new HWThread(3)
	t1.start
	with barrier do
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
