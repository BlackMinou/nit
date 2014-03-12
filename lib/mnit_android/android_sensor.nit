# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <romain.chanoir@courrier.uqam.ca>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module android_sensor

import mnit

in "C header" `{
	#include <jni.h>
	#include <android/sensor.h>
`}

in "C" `{
	extern struct android_app *mnit_java_app;
`}

extern ASensorType `{int`}
	new accelerometer `{return ASENSOR_TYPE_ACCELEROMETER;`}
	fun is_accelerometer `{return recv == ASENSOR_TYPE_ACCELEROMETER;`}
	new magnetic_field `{return ASENSOR_TYPE_MAGNETIC_FIELD;`}
	fun is_magnetic_field `{return recv == ASENSOR_TYPE_MAGNETIC_FIELD;`}
	new gyroscope `{return ASENSOR_TYPE_GYROSCOPE;`}
	fun is_gyroscope `{ return recv == ASENSOR_TYPE_GYROSCOPE;`}
	new light `{return ASENSOR_TYPE_LIGHT;`}
	fun is_light `{return recv == ASENSOR_TYPE_LIGHT;`}
	new proximity `{return ASENSOR_TYPE_PROXIMITY;`}
	fun is_proximity `{return recv == ASENSOR_TYPE_PROXIMITY;`}
end

extern class ASensorManager `{ASensorManager*`}
	new get_instance: ASensorManager `{
		return ASensorManager_getInstance();
	`}

	private fun get_sensor_list: Array[ASensor] `{
		ASensorList *list;
		ASensorManager_getSensorList(recv, list);
		return list;
	`}

	private fun create_event_qeue(android_app: NdkAndroidApp): ASensorEventQueue `{
		return ASensorManager_CreateEventQueue(recv, android_app->looper, LOOPER_ID_USER, NULL, NULL);
	`}


	private fun destroy_event_queue(queue: ASensorEventQueue) `{
		ASensorManager_destroyEventQueue(recv, queue);
	`}
end

extern class ASensor `{ASensorRef`}
	private fun get_name: NativeString `{
		return ASensor_getName(recv);
	`}

	private fun get_vendor: NativeString `{
		return ASensor_getVendor(recv);
	`}

	private fun get_type: ASensorType `{
		return ASensor_getType(recv);
	`}
	
	private fun get_resolution: Float `{
		return ASensor_getResolution(recv);
	`}

	private fun get_min_delay: Int `{
		return ASensor_GetMinDelay(recv);
	`}
end

extern class ASensorEvent `{ASensorEvent*`}
		super SensorEvent
	fun get_version: Int `{
		return recv.version;
	`}

	fun get_sensor: ASensor `{
		return recv.sensor;
	`}

	fun get_type: ASensorType `{
		return recv.type;
	`}

	fun get_timestamp: Int `{
		return recv.timestamp;
	`}

	fun get_data: Array[Float] `{
		return recv.data;
	`}

	fun get_temperature: Float `{
		return recv.temperature;
	`}

	fun get_distance: Float `{
		return recv.distance;
	`}

	fun get_light: Float `{
		return recv.pressure;
	`}

	fun get_vector: ASensorVector `{
		return recv->vector;
	`}

	fun get_acceleration: ASensorVector `{
		return &(recv->acceleration); 
	`}

	fun get_magnetic: ASensorVector `{
		return recv->magnetic;
	`}
end

extern class ASensorVector `{ASensorVector*`}
	fun get_v: Array[Float] `{
		return recv.v;
	`}

	fun get_x: Float `{
		return recv->x;
	`}

	fun get_y: Float `{
		return recv->y;
	`}

	fun get_z: Float `{
		return recv->z;
	`}

	fun get_azimuth: Float `{
		return recv.azimuth;
	`}

	fun get_pitch: Float `{
		return recv.pitch;
	`}

	fun get_roll: Float `{
		return recv.roll;
	`}

	fun get_status: Int `{
		return recv.status;
	`}
	
	fun get_reserved: Array[Int] `{
		return recv.reserved;
	`}
end

extern class ASensorEventQueue `{ASensorEventQueue*`}
	private fun enable_sensor(sensor: ASensor): Int `{
		return ASensorEventQueue_enableSensor(recv, sensor);
	`}

	private fun disable_sensor(sensor: ASensor): Int `{
		return ASensortEventQueue_disableSensor(recv, sensor);
	`}

	private fun set_event_rate(sensor: ASensor, usec: Int): Int `{
		return ASensorEventQueue_setEventRate(recv, sensor, usec);
	`}

	private fun has_events: Int `{
		return ASensorEventQueue_hasEvents(recv)
	`}

	private fun get_events(events: ASensorEvents, count: Int): Int `{
		return ASensorEventQueue_getEvents(recv, events, (size_t)count);
	`}
end

extern class ASensorEvents `{ASensorEvent*`}
	new (length: Int) `{
		return malloc(sizeof(ASensorEvent)*length);
	`}

	fun [](index: Int): ASensorEvent `{
		return recv+index;	
	`}
end

extern class NdkAndroidApp `{android_app*`}
	
	# FIXME: remove when android_app fixed 
	new `{
		return mnit_java_app;
	`}
end
