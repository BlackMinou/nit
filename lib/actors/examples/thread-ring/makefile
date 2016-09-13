tools_path = ../../../../src/actors
file= thread_ring.nit
actors_compil = $(tools_path)/nitc_actors

# sa is for Scheduled Actors
sa_gen = $(tools_path)/scheduled_actor_gen

# ta is for Threaded Actors
ta_gen = $(tools_path)/threaded_actor_gen

default: scheduled threaded

scheduled:
	$(sa_gen) $(file)
	$(actors_compil) --actors_inject scheduled $(file) -m actors_$(file) -o thread_ring_scheduled

threaded:
	$(ta_gen) $(file)
	$(actors_compil) $(file) -m actors_$(file) -o thread_ring_threaded

test:
	time ./thread_ring_scheduled 1000
	time ./thread_ring_threaded 1000
bm:
	time ./thread_ring_scheduled 50000000
	time ./thread_ring_threaded 50000000

clean:
	rm thread_ring_scheduled
	rm thread_ring_threaded
	rm actors_$(file)
