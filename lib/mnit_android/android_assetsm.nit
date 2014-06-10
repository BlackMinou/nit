module android_assetsm

import android_app
import java_io
import java

in "Java" `{
	import android.content.res.AssetManager;
	import android.content.res.AssetFileDescriptor;
	import android.content.res.Resources;
	import android.content.res.XmlResourceParser;
	import java.io.IOException;
`}

extern class NativeAssetManager in "Java" `{ android.content.res.AssetManager `}
	super JavaObject
	redef type SELF: NativeAssetManager

	fun acess_buffer_mode: Int in "Java" `{ return recv.ACCESS_BUFFER; `}
	fun access_random_mode: Int in "Java" `{ return recv.ACCESS_RANDOM; `}
	fun acess_streaming_mode: Int in "Java" `{ return recv.ACCESS_STREAMING; `}
	fun acess_unknown_mode: Int in "Java" `{ return recv.ACCESS_UNKNOWN; `}

	fun close in "Java" `{ recv.close(); `}
	fun get_locales: Array[JavaString] import Array[JavaString], Array[JavaString].add in "Java" `{
		int arr = new_Array_of_JavaString();
		for (String s : recv.getLocales()) {
			Array_of_JavaString_add(arr, s);
		}
		return arr;
	`}
	fun list(path: String): Array[JavaString] import Array[JavaString], Array[JavaString].add, String.to_java_string in "Java" `{
		int arr = new_Array_of_JavaString();
		try {
			for (String s : recv.list(String_to_java_string(path))) {
				Array_of_JavaString_add(arr, s);
			}
		}catch (IOException io) {

		}
		return arr;
	`}

	fun open(file_name: JavaString): NativeInputStream in "Java" `{ 
		try {
			return recv.open(file_name); 
		}catch (IOException io) {
			return null;
		}
	`}
	fun open_with(file_name: String, access_mode: Int): NativeInputStream import String.to_java_string in "Java" `{ 
		try {
			return recv.open(String_to_java_string(file_name), access_mode); 
		}catch(IOException io){
			return null;
		}
	`}

	fun open_fd(file_name: String): NativeAssetFileDescriptor import String.to_java_string in "Java" `{ 
		try {
			return recv.openFd(String_to_java_string(file_name)); 
		}catch(IOException io){
			return null;
		}
	`}
	fun opend_non_asset_fd(file_name: String): NativeAssetFileDescriptor import String.to_java_string in "Java" `{ 
		try {
			return recv.openNonAssetFd(String_to_java_string(file_name));
		}catch(IOException io){
			return null;
		}
	`}
	fun open_non_asset_fd_cookie(cookie: Int, file_name: String): NativeAssetFileDescriptor import String.to_java_string in "Java" `{ 
		try {
			return recv.openNonAssetFd(cookie, String_to_java_string(file_name)); 
		}catch(IOException io){
			return null;
		}
	`}
	fun open_xml_resource_parser(file_name: String): XmlResourceParser import String.to_java_string in "Java" `{ 
		try {
			return recv.openXmlResourceParser(String_to_java_string(file_name));
		}catch(IOException io){
			return null;
		}
	`}
	fun open_xml_resource_parser_cookie(cookie: Int, file_name: String): XmlResourceParser import String.to_java_string in "Java" `{ 
		try {
			return recv.openXmlResourceParser(cookie, String_to_java_string(file_name));
		}catch(IOException io){
			return null;
		}
	`}	
end

extern class NativeAssetFileDescriptor in "Java" `{ android.content.res.AssetFileDescriptor `}
	super JavaObject
	redef type SELF: NativeAssetFileDescriptor

	fun close in "Java" `{ 
		try {	
			recv.close();
		}catch(IOException io){
			
		}
	`}
	fun create_input_stream: NativeFileInputStream in "Java" `{ 
		try {
			return recv.createInputStream(); 
		}catch(IOException io){
			return null;
		}
	`}
	fun create_output_stream: NativeFileOutputStream in "Java" `{ 
		try {		
			return recv.createOutputStream(); 
		}catch(IOException io){
			return null;
		}
	`}
	fun describe_contents: Int in "Java" `{ return (int)recv.describeContents(); `}
	fun declared_length: Int in "Java" `{ return (int)recv.getDeclaredLength(); `}
	#fun extras: Bundle in "Java" `{ return recv.getExtras(); `}
	fun  file_descriptor: NativeFileDescriptor in "Java" `{ return recv.getFileDescriptor(); `}
	fun length: Int in "Java" `{ return (int)recv.getLength(); `}
	#fun parcel_file_descriptor: ParcelFileDescriptor in "Java" `{ return recv.getParcelFileDescriptor(); `}
	fun start_offset: Int in "Java" `{ return (int)recv.getStartOffset(); `}
	redef fun to_s: String import JavaString.to_s in "Java" `{ return JavaString_to_s(recv.toString()); `}
	# fun write_to_parcel(out: Parcel, Int flags) in "Java" `{ return recv.writeToParcel(out, flags); `}
end

extern class NativeAndroidResources in "Java" `{ android.content.res.Resources `}
	super JavaObject
	redef type SELF: NativeAndroidResources

	fun get_assets:NativeAssetManager in "Java" `{ return recv.getAssets(); `}
	fun get_color(id: Int): Int in "Java" `{ return recv.getColor(id); `}
	fun get_boolean(id: Int): Bool in "Java" `{ return recv.getBoolean(id); `}
	fun get_dimension(id: Int): Int in "Java" `{ return (int)recv.getDimension(id); `}
	#fun get_drawable(id: Int): JDrawable in "Java" `{ return recv.getDrawable(); `}
	fun get_identifier(name, def_type, def_package: String): Int import String.to_java_string in "Java" `{
		return recv.getIdentifier(String_to_java_string(name), String_to_java_string(def_type), String_to_java_string(def_package));
	`}
	fun get_integer(id: Int): Int in "Java" `{ return recv.getInteger(id); `}
	fun get_string(id: Int): JavaString in "Java" `{ return recv.getString(id); `}
	fun get_resource_entry_name(resid: Int): JavaString in "Java" `{ return recv.getResourceEntryName(resid); `}
	fun get_resource_name(resid: Int): JavaString in "Java" `{ return recv.getResourceName(resid); `}
	fun get_resource_pakage_name(resid: Int): JavaString in "Java" `{ return recv.getResourcePackageName(resid); `}
	fun get_resource_type_name(resid: Int): JavaString in "Java" `{ return recv.getResourceTypeName(resid); `}
end

extern class XmlResourceParser in "Java" `{	android.content.res.XmlResourceParser `}
# not yet implemented
end

class ResourcesManager
	var android_resources: NativeAndroidResources
	var app_package: String

	init(res: NativeAndroidResources, app_package: String)
	do
		self.android_resources = res
		self.app_package = app_package
	end

	fun color(name: String): Int do	return android_resources.get_color(android_resources.get_identifier(name, "color", app_package))
	fun boolean(name: String): Bool do return android_resources.get_boolean(android_resources.get_identifier(name, "bool", app_package))
	fun dimension(name: String): Int do return android_resources.get_dimension(android_resources.get_identifier(name, "dimen", app_package))
	fun integer(name: String): Int do return android_resources.get_integer(android_resources.get_identifier(name, "integer", app_package))
	fun string(name: String): String do return android_resources.get_string(android_resources.get_identifier(name, "string", app_package)).to_s
	fun raw_id(name: String): Int do return android_resources.get_identifier(name, "raw", app_package)
end

redef class App
	var resource_manager: ResourcesManager
	var asset_manager: NativeAssetManager
	redef fun init_window
	do
		super
		resource_manager = new ResourcesManager(resources, package_name.to_s)
		asset_manager = assets
	end
	fun assets: NativeAssetManager import native_activity in "Java" `{ return App_native_activity(recv).getAssets(); `}
	fun package_name: JavaString import native_activity in "Java" `{ return App_native_activity(recv).getPackageName(); `}
	fun resources: NativeAndroidResources import native_activity in "Java" `{ return App_native_activity(recv).getResources(); `}
end
