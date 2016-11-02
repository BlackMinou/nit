file= mandelbrot

default: threaded

threaded:
	nitc $(file).nit -m actors_$(file).nit -o $(file)_threaded

test:
	time ./$(file)_threaded 200
bm:
	time ./$(file)_threaded 16000

clean:
	rm $(file)_threaded
	rm actors_$(file).nit
