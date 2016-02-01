module ai

intrude import core

redef class Enemy

	# Square of the range to shoot at the player
	fun range2: Float do return 32.0*32.0

	redef fun update(dt, world)
	do
		super

		var player = world.player
		if is_alive and player != null and player.is_alive and can_shoot(world) then
			# Shoot if possible
			if player.center.dist2(self.center) < range2 then
				aim_and_shoot(world, player)
			end
		end
	end

	fun aim_and_shoot(world: World, target: Body)
	do
		# TODO aim forward of `moving` target
		var angle = self.center.atan2(target.center)

		shoot(angle, world)
	end

	fun go_to(pc: Point3d[Float], displacement: Float) do
		var sc = center
		var k = 1.0
		if pc.x < sc.x then
			inertia.x -= k
			if inertia.x < -displacement then inertia.x = -displacement
		else
			inertia.x += k
			if inertia.x > displacement then inertia.x = displacement
		end
		if pc.y < sc.y then
			inertia.y -= k
			if inertia.y < -displacement then inertia.y = -displacement
		else
			inertia.y += k
			if inertia.y > displacement then inertia.y = displacement
		end
	end
end

redef class JetpackEnemy
	redef fun update(dt, world)
	do
		super

		var player = world.player
		if is_alive and player != null and player.is_alive and can_shoot(world) then
			# Move towards player
			var pc = player.center
			go_to(pc, 40.0)
		end
		#print "Updated jetpack soldier position to {center}, player position is {player.center}"
	end
end

redef class Boss
	redef fun range2 do return 64.0*64.0

	redef fun update(dt, world) do
		super
		if true then return
		# TODO choose whether the boss moves or not, if it does it messes with bullets

		var player = world.player
		if is_alive and player != null and player.is_alive and can_shoot(world) then
			var pc = player.center
			var pcy = pc.y + 50.0
			var pcx = pc.x
			var objective = new Point3d[Float](pcx, pcy, 0.0)
			go_to(objective, 60.0)
		end
		super
	end
end
