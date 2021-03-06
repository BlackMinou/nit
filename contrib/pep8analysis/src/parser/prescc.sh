# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# prescc, a Sablecc preprocessor.
#
# Synopsis
#
#   Extends a sablecc grammar with parametrized productions.
#
# Description
#
#   A production named foo~bar~baz semantically correspond to a production foo with two boolean parameters bar and baz
#   In fact foo is a family of 4 distinct productions: foo, foo_bar, foo_baz and foo_bar_baz
#   In a parametrized production with a parameter ~xxx:
#    * parameters (~xxx) are substituted with _xxx if the parameter is true and removed if the parameter is false
#    * guarded alternatives (!xxx) are disabled if the parameter is true
#
# Limitations
#
#   prescc is badly implemented with shell, sed and perl and is not robust.
#   Users must remember the following:
#    * parametrized productions MUST be terminated with a line containing only a single semicolon (;)
#    * parameters (~) and guards (!) in alternatives MUST correspond to a parameter of the enclosing production
#    * if required, names in transformations MUST contain the full invocation name (with all parameters)
#        foo bar_x~y~z_t baz {-> New p(foo, bar_x~y~z_t.q)}
#    * guards do not understand grammar, they just remove the whole line
#    * The AST MUST start with a line containing only "Abstract Syntax Tree"
#
# Example of the dangling else implementation:
#
#   stmt~withelse =
#                'if' expr 'then' stmt_withelse 'else' stmt~withelse |
#     !withelse  'if' expr 'then' stmt |
#                nop
#                ;


case $# in
	2);;
	*) echo "Usage: prescc infile outfile"; exit
esac


infile=$1
outfile=$2
tmpfile=`mktemp "$2.XXXXXX"`

printf "/* This file is autogenerated, do not modify it */" > "$outfile"
cat "$infile" >> "$outfile"

# The perl code is used to list all the available parameters in the extended grammar
for token in `perl -ne 'while (/\~([a-zA-Z]+)/g) {if (!$found{$1}) {print "$1\n"; $found{$1}=1}}' "$infile"`
do
	echo "Parameter ~$token"
	# first, sed starts from first line to the AST line and removes ~xxx and !xxx
	sed -n -e "
		1,/^Abstract Syntax Tree/{
			/^Abstract Syntax Tree/b
			s/[\~!]$token//g
			p
		}
	" "$outfile" > "$tmpfile"
	# second, sed clones ~xxx parametrized productions, substitute ~xxx with _xxx and delete !xxx lines
	sed -n -e "
		/\~$token/,/;/{
			s/\~$token/_$token/g
			/!$token/d
			p
		}
	" "$outfile" >> "$tmpfile"
	# third, sed continues fron AST line to last line and remove ~xxx and !xxx
	sed -n -e "
		/^Abstract Syntax Tree/,\${
			s/[\~!]$token//g
			p
		}
	" "$outfile" >> "$tmpfile"
	mv "$tmpfile" "$outfile"
done

