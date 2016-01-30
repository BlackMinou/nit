# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module hollnit

import gamnit::depth

import game

redef class App
	#private var fx_fire = new Sound("sounds/fire.mp3")

	var plane_texture = new Texture("textures/plane.png")
	var ennemy_texture = new Texture("textures/ennemy.png")
	var player_texture = new Texture("textures/player.png")

	var low_background_texture = new Texture("textures/low_background.png")

	var world: World = generate_world is lazy

	fun generate_world: World
	do
		var world = new World
		world.player = new Player(new Point3d[Float](0.0, 0.0, 0.0), 8.0, 32.0,
			new Weapon(1.0, 1.0))
		return world
	end

	redef fun on_create
	do
		super

		# Move the camera to show all the world world in the screen range
		world_camera.reset_height(800.0)
	end

	redef fun update(dt)
	do
		# Game logic
		world.update dt

		# Update background color
		var player = world.player
		var player_pos = if player != null then player.center else new Point3d[Float](0.0, 0.0, 0.0)
		var altitude = player_pos.y
		var p = altitude / world.boss_altitude
		glClearColor(0.0, 0.0, 1.0-p, 1.0)

		# Move camera
		world_camera.position.x = player_pos.x
		world_camera.position.y = player_pos.y
	end

	redef fun accept_event(event)
	do
		if event isa QuitEvent then
			exit 0
		else if event isa KeyEvent and event.is_down then

			if event.name == "space" then
				var player = world.player
				if player != null then player.jump
			end

			if event.name == "escape" then
				exit 0
			end
		end

		return false
	end
end

redef class Body
	fun sprite: Sprite is abstract

	init do app.sprites.add sprite
end

redef class Platform
	redef var sprite = new Sprite(app.plane_texture, center) is lazy
end

redef class Ennemy
	redef var sprite = new Sprite(app.ennemy_texture, center) is lazy
end

redef class Player
	redef var sprite = new Sprite(app.player_texture, center) is lazy
end
