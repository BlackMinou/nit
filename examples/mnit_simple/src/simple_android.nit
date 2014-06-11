# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module simple_android is
	java_package("org.nitlanguage.simple")
	android_manifest("""<uses-permission android:name="android.permission.VIBRATE" />""")
	android_manifest("""<uses-permission android:name="android.permission.MODIFY_AUDIO_SETTINGS" />""")
end

import simple
import mnit_android
import mnit_android::android_assetsm
import mnit_android::android_audio
in "Java" `{
	import android.content.Context;
	import android.widget.Toast;
	import android.media.MediaPlayer;
`}

redef class MyApp
var string_resource: String

redef fun init_window
do
	super
	string_resource = resource_manager.string("app_name")
	var amanager = audio_manager
	amanager.manage_audio_mode
	# media_player = create_media_player(self.native_activity, resource_manager.raw_id("sound"))
	# string_resource = android_resources.get_string(android_resources.get_identifier("app_name","string",package_name.to_s)).to_s 
end


redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			play_sound("sound")
			do_java_stuff
		end
		return super
	end

	fun do_java_stuff import native_activity, string_resource, String.to_java_string in "Java" `{
		// + Log (no context needed)
		android.util.Log.d("mnit_simple", "Java within NIT!!!");

		// - Context needed from now on
		// NativeActivity is a Java sub-class of Context
		final android.app.NativeActivity context = MyApp_native_activity(recv);

		// Vibration
		android.os.Vibrator v = (android.os.Vibrator)
			context.getSystemService(android.content.Context.VIBRATOR_SERVICE);
		v.vibrate(500);
		
		final CharSequence text = String_to_java_string(MyApp_string_resource(recv));

		// - UI thread needed from now on
		context.runOnUiThread(new Runnable() {
			@Override
			public void run()  {
				// + Toast
 				//CharSequence text = "Java within Nit!";
				//text = String_to_java_string(My_app_string_resource(recv));
				int duration = Toast.LENGTH_SHORT;
				Toast toast = Toast.makeText(context, text, duration);
				toast.show();
			}
		});
	`}
end
