module android_audio

import java
import java_io
import android_assetsm
import android_app

in "Java" `{
	import android.media.MediaPlayer;
	import android.media.SoundPool;
	import java.io.IOException;
	import android.media.AudioManager;
	import android.content.Context;
`}


extern class NativeAudioManager in "Java" `{ android.media.AudioManager `}
	super JavaObject
	redef type SELF: NativeAudioManager

	fun mode: Int in "Java" `{ return recv.getMode(); `}
	fun mode=(i: Int) in "Java" `{ recv.setMode(i); `}
	fun wired_headset_on: Bool in "Java" `{ return recv.isWiredHeadsetOn(); `}
	fun wired_headset_on=(b: Bool) in "Java" `{ recv.setWiredHeadsetOn(b); `}
	fun speaker_phone_on: Bool in "Java" `{ return recv.isSpeakerphoneOn(); `}
	fun speaker_phone_on=(b: Bool) in "Java" `{ recv.setSpeakerphoneOn(b); `}
	fun manage_audio_mode in "Java" `{
		recv.setMode(0);
		if (recv.isWiredHeadsetOn()) {
			recv.setSpeakerphoneOn(false);
		} else {
			recv.setSpeakerphoneOn(true);
		}
	`}

end

# Used to play sounds, designed to use with medium sized sounds or streams
extern class NativeMediaPlayer in "Java" `{ android.media.MediaPlayer `}
	super JavaObject
	redef type SELF: NativeMediaPlayer
	
	new in "Java" `{ return new MediaPlayer(); `}
	fun start in "Java" `{ recv.start(); `}
	fun prepare in "Java" `{ 
		try {
			recv.prepare();
		}catch(IOException io) {
		}
	`}

	fun create(context: NativeActivity, id: Int): NativeMediaPlayer in "Java" `{ return recv.create(context, id); `}
	fun pause in "Java" `{ recv.pause(); `}
	fun stop in "Java" `{ recv.stop(); `}
	fun playing: Bool in "Java" `{ return recv.isPlaying(); `}
	fun release in "Java" `{ recv.release(); `}
	fun duration: Int in "Java" `{ return recv.getDuration(); `}
	fun looping: Bool in "Java" `{ return recv.isLooping(); `}
	fun looping=(b: Bool) in "Java" `{ recv.setLooping(b); `}
	fun volume=(vol: Float) in "Java" `{ recv.setVolume((float)vol, (float)vol); `}
	fun both_volume(left_volume, right_volume: Float) in "Java" `{ recv.setVolume((float)left_volume, (float)right_volume); `}
	fun stream_type=(stream_type: Int) in "Java" `{ recv.setAudioStreamType(stream_type); `}
	# API16
	# fun deselect_track(index: Int) in "Java" `{ recv.deselectTrack(index); `}
	# fun select_track(index: Int) in "Java" `{ recv.selectTrack(index); `}
	# fun next_media_player(next: MediaPlayer) in "Java" `{ recv.setNextMediaPlayer(next); `}
	fun data_source_fd=(fd: NativeFileDescriptor) in "Java"  `{ 
		try {
			recv.setDataSource(fd); 
		}catch(IOException io) {
		}
	`}
	fun data_source_path=(path: JavaString) in "Java" `{ 
		try {
			recv.setDataSource(path); 
		}catch(IOException io) {
		}
	`}
end

# Used to play sound, best suited for sounds effects in apps or games
extern class NativeSoundPool in "Java" `{ android.media.SoundPool `}
	super JavaObject
	redef type SELF: NativeSoundPool
	
	new(max_streams, stream_type, src_quality: Int) in "Java" `{ 
		return new SoundPool(max_streams, stream_type, src_quality); 
	`}
	fun load_asset_fd(afd: NativeAssetFileDescriptor, priority: Int): Int in "Java" `{ return recv.load(afd, priority); `}
	fun load_id(context: NativeActivity, resid, priority: Int): Int in "Java" `{ return recv.load(context, resid, priority); `}
	fun load_path(path: JavaString, priority: Int): Int in "Java" `{ return recv.load(path, priority); `}
	fun play(sound_id: Int, left_volume, right_volume: Float, priority, l: Int, rate: Float): Int in "Java" `{ return recv.play(sound_id, (float)left_volume, (float)right_volume, priority, l, (float)rate); `}
	fun pause(stream_id: Int) in "Java" `{ recv.pause(stream_id); `}
	fun auto_pause in "Java" `{ recv.autoPause(); `}
	fun auto_resume in "Java" `{ recv.autoResume(); `}
	fun resume(stream_id: Int) in "Java" `{ recv.resume(stream_id); `}
	fun set_loop(stream_id, l: Int) in "Java" `{ recv.setLoop(stream_id, l); `}
	fun set_priority(stream_id, priority: Int) in "Java" `{ recv.setPriority(stream_id, priority); `}
	fun set_rate(stream_id: Int, rate: Float) in "Java" `{ recv.setRate(stream_id, (float)rate); `}
	fun set_volume(stream_id: Int, left_volume, right_volume: Float) in "Java" `{ recv.setVolume(stream_id, (float)left_volume, (float)right_volume); `}
	fun stop(stream_id: Int) in "Java" `{ recv.stop(stream_id); `}
	fun unload(sound_id: Int): Bool in "Java" `{ return recv.unload(sound_id); `}
end

class SoundPool
	private var nsoundpool: NativeSoundPool
	var max_streams = 10
	var stream_type = 3
	var src_quality = 0
	var left_volume = 1.0
	var right_volume = 1.0
	var rate = 1.0
	var looping = 0
	var priority = 1
	var sounds = new HashMap[String, Int]

	init do self.nsoundpool = new NativeSoundPool(max_streams, stream_type, src_quality)

	fun load_asset_fd(afd: NativeAssetFileDescriptor): Int do return nsoundpool.load_asset_fd(afd, priority)
	fun load_id(context: NativeActivity, id:Int): Int do return nsoundpool.load_id(context, id, priority)
	fun load_path(path: String): Int do return nsoundpool.load_path(path.to_java_string, priority)
	fun play(id: Int): Int do return nsoundpool.play(id, left_volume, right_volume, priority, looping, rate)
	fun play_sound(resource_manager: ResourcesManager, context: NativeActivity, sound: String): Int do
		if sounds.keys.has(sound) then 
			return play(sounds[sound])
		else
			sounds[sound] = load_id(context, resource_manager.raw_id(sound))
			return play(sounds[sound])
		end
	end
	fun pause_stream(stream_id: Int) do nsoundpool.pause(stream_id)
	fun auto_pause do nsoundpool.auto_pause
	fun auto_resume do nsoundpool.auto_resume
	fun resume(stream_id: Int) do nsoundpool.resume(stream_id)
	fun stream_loop(stream_id, looping: Int) do nsoundpool.set_loop(stream_id, looping)
	fun stream_priority=(stream_id, priority: Int) do nsoundpool.set_priority(stream_id, priority)
	fun stream_rate=(stream_id: Int, rate: Float) do nsoundpool.set_rate(stream_id, rate)
	fun stream_volume(stream_id: Int, left_volume, right_volume: Float) do nsoundpool.set_volume(stream_id, left_volume, right_volume)
	fun stop_stream(stream_id: Int) do nsoundpool.stop(stream_id)
	fun unload(sound: String): Bool do 
		if sounds.keys.has(sound) then
			return nsoundpool.unload(sounds[sound])
		else
			print "Sound not found in the pool"
			return false
		end
	end
end

class MediaPlayer
	private var nmedia_player: NativeMediaPlayer
	
	init do self.nmedia_player = new NativeMediaPlayer

	init id(context: NativeActivity, id: Int) do
		self.nmedia_player = new NativeMediaPlayer
		self.nmedia_player = nmedia_player.create(context, id)
	end

	fun start do nmedia_player.start
	fun stop do nmedia_player.stop
	fun prepare do nmedia_player.prepare
	fun pause do nmedia_player.pause
	fun playing: Bool do return nmedia_player.playing
	fun release do nmedia_player.release
	fun datasource=(path: String) do nmedia_player.data_source_path = path.to_java_string
	fun datasource_fd=(fd: NativeFileDescriptor) do nmedia_player.data_source_fd = fd
	fun looping: Bool do return nmedia_player.looping
	fun looping=(b: Bool) do nmedia_player.looping = b
	fun volume=(volume: Float) do nmedia_player.volume = volume
	fun both_volume(left_volume, right_volume: Float) do nmedia_player.both_volume(left_volume, right_volume)
	fun stream_type=(stream_type: Int) do nmedia_player.stream_type = stream_type
	# API 16
	# fun select_track(index: Int) do nmedia_player.select_track(index)
	# fun deselect_track(index: Int) do nmedia_player.deselect_track(index)
end


redef class App

	fun media_player: MediaPlayer is cached do return new MediaPlayer
	fun sound_pool: SoundPool is cached do return new SoundPool
	fun audio_manager: NativeAudioManager import native_activity in "Java" `{ 
		return (AudioManager)App_native_activity(recv).getSystemService(Context.AUDIO_SERVICE);
	`}
	fun play_sound(sound: String) do
		sound_pool.play_sound(resource_manager,self.native_activity, sound)
	end
	fun play_music(music: String) do 
		var media_player = new MediaPlayer.id(self.native_activity, resource_manager.raw_id(music))
		media_player.start
	end
end
