default: injection threaded scheduled

injection:
	nitc ../nitc.nit -m actor_injection.nit -o nitc_actors

threaded:
	nitc threaded_actor_gen.nit -m actor_injection.nit

scheduled:
	nitc scheduled_actor_gen.nit -m actor_injection.nit

clean:
	rm nitc_actors
	rm threaded_actor_gen
	rm scheduled_actor_gen
