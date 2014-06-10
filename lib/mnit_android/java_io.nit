module java_io

import java

in "Java" `{
	import java.io.File;
	import java.io.FileInputStream;
	import java.io.FileOutputStream;
	import java.io.FileDescriptor;
	import java.io.IOException;
	import java.io.SyncFailedException;
`}

extern class NativeFile in "Java" `{ java.io.File `}
	super JavaObject
	redef type SELF: NativeFile

	fun can_execute: Bool in "Java" `{ return recv.canExecute(); `}
	fun can_read: Bool in "Java" `{ return recv.canRead(); `}
	fun can_write: Bool in "Java" `{ return recv.canWrite(); `}
	#fun compare_to: Int in "Java" `{ return recv.compareTo(); `}
	fun createNewFile: Bool in "Java" `{ 
		try {	
			return recv.createNewFile(); 
		}catch(IOException io){
			return false;
		}
	`}
	# createTempFile 3 args
	# createTempFile 2 args
	fun delete: Bool in "Java" `{ return recv.delete(); `}
	fun delete_on_exit in "Java" `{ recv.deleteOnExit(); `}
	fun exists: Bool in "Java" `{ return recv.exists(); `}
	fun absolute_file: NativeFile in "Java" `{ return recv.getAbsoluteFile(); `}
	fun absolute_path: JavaString in "Java" `{ return recv.getAbsolutePath(); `}
	fun canonical_file: NativeFile in "Java" `{ 
		try {
			return recv.getCanonicalFile(); 
		}catch(IOException io){
			return null;
		}
	`}
	fun free_space: Int in "Java" `{ return (int)recv.getFreeSpace(); `}
	fun name: JavaString in "Java" `{ return recv.getName(); `}
	fun parent: JavaString in "Java" `{ return recv.getParent(); `}
	fun parent_file: NativeFile in "Java" `{ return recv.getParentFile(); `}
	fun path: JavaString in "Java" `{ return recv.getPath(); `}
	fun total_space: Int in "Java" `{ return (int)recv.getTotalSpace(); `}
	fun usable_space: Int in "Java" `{ return (int)recv.getUsableSpace(); `}
	fun absolute: Bool in "Java" `{ return recv.isAbsolute(); `}
	fun is_directory: Bool in "Java" `{ return recv.isDirectory(); `}
	fun is_file: Bool in "Java" `{ return recv.isFile(); `}
	fun is_hidden: Bool in "Java" `{ return recv.isHidden(); `}
	fun last_modified: Int in "Java" `{ return (int)recv.lastModified(); `}
	fun length: Int in "Java" `{ return (int)recv.length(); `}
	fun set_readable(r: Bool, owner_only: Bool): Bool in "Java" `{ return recv.setReadable(r, owner_only); `}
	fun set_writable(w: Bool, owner_only: Bool): Bool in "Java" `{ return recv.setWritable(w, owner_only); `}
end


extern class NativeFileInputStream in "Java" `{ java.io.FileInputStream `}
	super JavaObject
	redef type SELF: NativeFileInputStream

	fun available: Int in "Java" `{ 
		try {
			return recv.available();
		}catch(IOException io){
			return -1;
		}
	`}
	fun close in "Java" `{ 
		try {
			recv.close();
		}catch(IOException io){
				
		}
	`}
	fun read: Int in "Java" `{ 
		try {
			return recv.read(); 
		}catch(IOException io){
			return -1;
		}
	`}
	fun skip(byte_count: Int): Int in "Java" `{ 
		try {
			return (int)recv.skip(byte_count);
		}catch(IOException io){
			return -1;
		}
	`}
end

extern class NativeFileOutputStream in "Java" `{ java.io.FileOutputStream `}
	super JavaObject
	redef type SELF: NativeFileOutputStream

	fun close in "Java" `{
		try {
			recv.close();
		}catch(IOException io){
				
		}
	`}
	fun write(one_byte: Int) in "Java" `{ 
		try {
			recv.write(one_byte);
		}catch(IOException io){
			
		}
	`}
	fun flush in "Java" `{
		try {
			recv.flush(); 
		}catch(IOException io){
			
		}
	`}
end

extern class NativeFileDescriptor in "Java" `{ java.io.FileDescriptor `}
	super JavaObject
	redef type SELF: NativeFileDescriptor
	fun sync in "Java" `{ 
		try{
			recv.sync();
		}catch(SyncFailedException sfe){

		}
	`}
	fun valid: Bool in "Java" `{ return recv.valid(); `}
end

extern class NativeInputStream in "Java" `{ java.io.InputStream `}
end
