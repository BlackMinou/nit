file= chameneosredux.nit

default: threaded

threaded:
	nitc $(file) -m actors_$(file) -o chameneosredux_threaded

test:
	time ./chameneosredux_threaded 1000
bm:
	time ./chameneosredux_threaded 50000000

clean:
	rm chameneosredux_threaded
	rm actors_$(file)
