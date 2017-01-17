tools_path = ../../../../src/actors
file= chameneosredux.nit
actors_compil = $(tools_path)/nitc_actors

# sa is for Scheduled Actors
sa_gen = $(tools_path)/scheduled_actor_gen

# ta is for Threaded Actors
ta_gen = $(tools_path)/threaded_actor_gen

default: threaded

scheduled:
	$(sa_gen) $(file)
	$(actors_compil) --actors_inject scheduled $(file) -m actors_$(file) -o chameneosredux_scheduled

threaded:
	$(ta_gen) $(file)
	$(actors_compil) $(file) -m actors_$(file) -o chameneosredux_threaded

sequential:
	nitc sequential_$(file)

test:
	time ./chameneosredux_scheduled 1000
	time ./chameneosredux_threaded 1000
bm:
	time ./chameneosredux_scheduled 50000000
	time ./chameneosredux_threaded 50000000

par_vs_seq:
	./chameneosredux_threaded 5000
	./sequential_chameneosredux 5000

clean:
	rm chameneosredux_scheduled
	rm chameneosredux_threaded
	rm actors_$(file)
