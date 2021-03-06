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

import counter

var ext_counter = new Counter[String]
var todo = new Array[String]
if args.is_empty then
	print "Usage: ./test paths"
	exit -1
else
	todo.add_all args
end
while todo.not_empty do
	var file = todo.pop
	var ext = file.basename.file_extension or else ""
	ext_counter.inc ext
	var entries = file.files
	for entry in entries do
		todo.add file / entry
	end
end
ext_counter.print_summary
ext_counter.print_elements(10)
