file= thread_ring.nit

default: threaded

threaded:
	nitc $(file) -m actors_$(file) -o thread_ring_threaded

test:
	time ./thread_ring_threaded 1000
bm:
	time ./thread_ring_threaded 50000000

clean:
	rm thread_ring_threaded
	rm actors_$(file)
