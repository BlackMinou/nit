tools_path = ../../../../src/actors
file= mandelbrot
actors_compil = $(tools_path)/nitc_actors

# sa is for Scheduled Actors
sa_gen = $(tools_path)/scheduled_actor_gen

# ta is for Threaded Actors
ta_gen = $(tools_path)/threaded_actor_gen

default: scheduled threaded

scheduled:
	$(sa_gen) $(file).nit
	$(actors_compil) --actors_inject scheduled $(file).nit -m actors_$(file).nit -o $(file)_scheduled

threaded:
	$(ta_gen) $(file).nit
	$(actors_compil) $(file).nit -m actors_$(file).nit -o $(file)_threaded

test:
	time ./$(file)_scheduled 200
	time ./$(file)_threaded 200
bm:
	time ./$(file)_scheduled 16000
	time ./$(file)_threaded 16000

clean:
	rm $(file)_scheduled
	rm $(file)_threaded
	rm actors_$(file).nit
