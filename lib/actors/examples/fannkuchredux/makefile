file= fannkuchredux.nit

default: threaded

threaded:
	nitc $(file) -m actors_$(file) -o fannkuchredux_threaded

sequential:
	nitc sequential_$(file)

test:
	time ./fannkuchredux_threaded 1000
bm:
	time ./fannkuchredux_threaded 50000000

par_vs_seq:
	./fannkuchredux_threaded 5000
	./sequential_fannkuchredux 5000

clean:
	rm fannkuchredux_threaded
	rm actors_$(file)
