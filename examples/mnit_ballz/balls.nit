# this file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Romain Chanoir <chanoir.romain@courrier.uqam.ca>
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

module balls

import mnit
import realtime

class MyApp
	super App
	
	var screen: Screen
	var sensorManager: ASensorManager
	var gyroSensor: ASensor
	var sensorEventQueue: ASensorEventQueue



	init do super


	redef fun init_window 
	do
		super
		screen = new Screen(self)
	end

	redef fun frame_core(display)
	do
		var screen = self.screen
		if screen != null then
			var clock = new Clock

			screen.game.do_turn
			screen.do_frame(display)
			
			var dt = clock.lapse
			if dt.sec == 0 and dt.nanosec < target_dt then
				var slee_t = target_dt - dt.nanosec
				sys.nanosleep(0, sleep_t)
			end
		end
	end

	redef fun input(ie)
	do

	end
end

class Ball
	var x: Int
	var y: Int
	
	var game: Game
	
	init(game: Game, x,y: Int)
	do
		self.x = x
		self.y = y
		self.game = game
	end

	# not very useful at this time
	fun do_turn
	do
	end

	fun intercepts (event: AsensorEvent): Bool
	do

	end

end

class Screen
	var ball_img: Image
	var game: Game = new Game

	init(app: App)
	do
		ball_img = app.load_asset("images/ball.png").as(Image)
		var scale = game.img_dim.to_f / game.img_ori_dim.to_f
		ball_img.scale = scale
	end

	fun do_frame(display: Display)
	do
		display.clear(0.0, 0.7, 0.0)
		display.blit(ball_img, game.ball.x, game.ball.y))
	end
end

class Game
	var ball: Ball
	
	var img_ori_dim: Int = 256
	fun img_dim: Int do return 210

	init
	do
		ball = new Ball
	end

	fun do_turn
	do
	ball.do_turn
	end
end
