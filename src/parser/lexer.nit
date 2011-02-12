# Lexer and its tokens.
# This file was generated by SableCC (http://www.sablecc.org/).
package lexer

intrude import parser_nodes
private import tables

redef class Token
    readable var _text: String

    fun parser_index: Int is abstract

    redef fun to_s: String do
        return "'{_text}'"
    end
end

redef class TEol
    redef fun parser_index: Int
    do
	return 0
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TComment
    redef fun parser_index: Int
    do
	return 1
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TKwmodule
    redef fun parser_index: Int
    do
	return 2
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TKwimport
    redef fun parser_index: Int
    do
	return 3
    end

    init init_tk(loc: Location)
    do
        _text = once "import"
		_location = loc
    end
end

redef class TKwclass
    redef fun parser_index: Int
    do
	return 4
    end

    init init_tk(loc: Location)
    do
        _text = once "class"
		_location = loc
    end
end

redef class TKwabstract
    redef fun parser_index: Int
    do
	return 5
    end

    init init_tk(loc: Location)
    do
        _text = once "abstract"
		_location = loc
    end
end

redef class TKwinterface
    redef fun parser_index: Int
    do
	return 6
    end

    init init_tk(loc: Location)
    do
        _text = once "interface"
		_location = loc
    end
end

redef class TKwenum
    redef fun parser_index: Int
    do
	return 7
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TKwspecial
    redef fun parser_index: Int
    do
	return 8
    end

    init init_tk(loc: Location)
    do
        _text = once "special"
		_location = loc
    end
end

redef class TKwend
    redef fun parser_index: Int
    do
	return 9
    end

    init init_tk(loc: Location)
    do
        _text = once "end"
		_location = loc
    end
end

redef class TKwmeth
    redef fun parser_index: Int
    do
	return 10
    end

    init init_tk(loc: Location)
    do
        _text = once "fun"
		_location = loc
    end
end

redef class TKwtype
    redef fun parser_index: Int
    do
	return 11
    end

    init init_tk(loc: Location)
    do
        _text = once "type"
		_location = loc
    end
end

redef class TKwinit
    redef fun parser_index: Int
    do
	return 12
    end

    init init_tk(loc: Location)
    do
        _text = once "init"
		_location = loc
    end
end

redef class TKwredef
    redef fun parser_index: Int
    do
	return 13
    end

    init init_tk(loc: Location)
    do
        _text = once "redef"
		_location = loc
    end
end

redef class TKwis
    redef fun parser_index: Int
    do
	return 14
    end

    init init_tk(loc: Location)
    do
        _text = once "is"
		_location = loc
    end
end

redef class TKwdo
    redef fun parser_index: Int
    do
	return 15
    end

    init init_tk(loc: Location)
    do
        _text = once "do"
		_location = loc
    end
end

redef class TKwreadable
    redef fun parser_index: Int
    do
	return 16
    end

    init init_tk(loc: Location)
    do
        _text = once "readable"
		_location = loc
    end
end

redef class TKwwritable
    redef fun parser_index: Int
    do
	return 17
    end

    init init_tk(loc: Location)
    do
        _text = once "writable"
		_location = loc
    end
end

redef class TKwvar
    redef fun parser_index: Int
    do
	return 18
    end

    init init_tk(loc: Location)
    do
        _text = once "var"
		_location = loc
    end
end

redef class TKwintern
    redef fun parser_index: Int
    do
	return 19
    end

    init init_tk(loc: Location)
    do
        _text = once "intern"
		_location = loc
    end
end

redef class TKwextern
    redef fun parser_index: Int
    do
	return 20
    end

    init init_tk(loc: Location)
    do
        _text = once "extern"
		_location = loc
    end
end

redef class TKwprotected
    redef fun parser_index: Int
    do
	return 21
    end

    init init_tk(loc: Location)
    do
        _text = once "protected"
		_location = loc
    end
end

redef class TKwprivate
    redef fun parser_index: Int
    do
	return 22
    end

    init init_tk(loc: Location)
    do
        _text = once "private"
		_location = loc
    end
end

redef class TKwintrude
    redef fun parser_index: Int
    do
	return 23
    end

    init init_tk(loc: Location)
    do
        _text = once "intrude"
		_location = loc
    end
end

redef class TKwif
    redef fun parser_index: Int
    do
	return 24
    end

    init init_tk(loc: Location)
    do
        _text = once "if"
		_location = loc
    end
end

redef class TKwthen
    redef fun parser_index: Int
    do
	return 25
    end

    init init_tk(loc: Location)
    do
        _text = once "then"
		_location = loc
    end
end

redef class TKwelse
    redef fun parser_index: Int
    do
	return 26
    end

    init init_tk(loc: Location)
    do
        _text = once "else"
		_location = loc
    end
end

redef class TKwwhile
    redef fun parser_index: Int
    do
	return 27
    end

    init init_tk(loc: Location)
    do
        _text = once "while"
		_location = loc
    end
end

redef class TKwloop
    redef fun parser_index: Int
    do
	return 28
    end

    init init_tk(loc: Location)
    do
        _text = once "loop"
		_location = loc
    end
end

redef class TKwfor
    redef fun parser_index: Int
    do
	return 29
    end

    init init_tk(loc: Location)
    do
        _text = once "for"
		_location = loc
    end
end

redef class TKwin
    redef fun parser_index: Int
    do
	return 30
    end

    init init_tk(loc: Location)
    do
        _text = once "in"
		_location = loc
    end
end

redef class TKwand
    redef fun parser_index: Int
    do
	return 31
    end

    init init_tk(loc: Location)
    do
        _text = once "and"
		_location = loc
    end
end

redef class TKwor
    redef fun parser_index: Int
    do
	return 32
    end

    init init_tk(loc: Location)
    do
        _text = once "or"
		_location = loc
    end
end

redef class TKwnot
    redef fun parser_index: Int
    do
	return 33
    end

    init init_tk(loc: Location)
    do
        _text = once "not"
		_location = loc
    end
end

redef class TKwreturn
    redef fun parser_index: Int
    do
	return 34
    end

    init init_tk(loc: Location)
    do
        _text = once "return"
		_location = loc
    end
end

redef class TKwcontinue
    redef fun parser_index: Int
    do
	return 35
    end

    init init_tk(loc: Location)
    do
        _text = once "continue"
		_location = loc
    end
end

redef class TKwbreak
    redef fun parser_index: Int
    do
	return 36
    end

    init init_tk(loc: Location)
    do
        _text = once "break"
		_location = loc
    end
end

redef class TKwabort
    redef fun parser_index: Int
    do
	return 37
    end

    init init_tk(loc: Location)
    do
        _text = once "abort"
		_location = loc
    end
end

redef class TKwassert
    redef fun parser_index: Int
    do
	return 38
    end

    init init_tk(loc: Location)
    do
        _text = once "assert"
		_location = loc
    end
end

redef class TKwnew
    redef fun parser_index: Int
    do
	return 39
    end

    init init_tk(loc: Location)
    do
        _text = once "new"
		_location = loc
    end
end

redef class TKwisa
    redef fun parser_index: Int
    do
	return 40
    end

    init init_tk(loc: Location)
    do
        _text = once "isa"
		_location = loc
    end
end

redef class TKwonce
    redef fun parser_index: Int
    do
	return 41
    end

    init init_tk(loc: Location)
    do
        _text = once "once"
		_location = loc
    end
end

redef class TKwsuper
    redef fun parser_index: Int
    do
	return 42
    end

    init init_tk(loc: Location)
    do
        _text = once "super"
		_location = loc
    end
end

redef class TKwself
    redef fun parser_index: Int
    do
	return 43
    end

    init init_tk(loc: Location)
    do
        _text = once "self"
		_location = loc
    end
end

redef class TKwtrue
    redef fun parser_index: Int
    do
	return 44
    end

    init init_tk(loc: Location)
    do
        _text = once "true"
		_location = loc
    end
end

redef class TKwfalse
    redef fun parser_index: Int
    do
	return 45
    end

    init init_tk(loc: Location)
    do
        _text = once "false"
		_location = loc
    end
end

redef class TKwnull
    redef fun parser_index: Int
    do
	return 46
    end

    init init_tk(loc: Location)
    do
        _text = once "null"
		_location = loc
    end
end

redef class TKwas
    redef fun parser_index: Int
    do
	return 47
    end

    init init_tk(loc: Location)
    do
        _text = once "as"
		_location = loc
    end
end

redef class TKwnullable
    redef fun parser_index: Int
    do
	return 48
    end

    init init_tk(loc: Location)
    do
        _text = once "nullable"
		_location = loc
    end
end

redef class TKwisset
    redef fun parser_index: Int
    do
	return 49
    end

    init init_tk(loc: Location)
    do
        _text = once "isset"
		_location = loc
    end
end

redef class TKwlabel
    redef fun parser_index: Int
    do
	return 50
    end

    init init_tk(loc: Location)
    do
        _text = once "label"
		_location = loc
    end
end

redef class TOpar
    redef fun parser_index: Int
    do
	return 51
    end

    init init_tk(loc: Location)
    do
        _text = once "("
		_location = loc
    end
end

redef class TCpar
    redef fun parser_index: Int
    do
	return 52
    end

    init init_tk(loc: Location)
    do
        _text = once ")"
		_location = loc
    end
end

redef class TObra
    redef fun parser_index: Int
    do
	return 53
    end

    init init_tk(loc: Location)
    do
        _text = once "["
		_location = loc
    end
end

redef class TCbra
    redef fun parser_index: Int
    do
	return 54
    end

    init init_tk(loc: Location)
    do
        _text = once "]"
		_location = loc
    end
end

redef class TComma
    redef fun parser_index: Int
    do
	return 55
    end

    init init_tk(loc: Location)
    do
        _text = once ","
		_location = loc
    end
end

redef class TColumn
    redef fun parser_index: Int
    do
	return 56
    end

    init init_tk(loc: Location)
    do
        _text = once ":"
		_location = loc
    end
end

redef class TQuad
    redef fun parser_index: Int
    do
	return 57
    end

    init init_tk(loc: Location)
    do
        _text = once "::"
		_location = loc
    end
end

redef class TAssign
    redef fun parser_index: Int
    do
	return 58
    end

    init init_tk(loc: Location)
    do
        _text = once "="
		_location = loc
    end
end

redef class TPluseq
    redef fun parser_index: Int
    do
	return 59
    end

    init init_tk(loc: Location)
    do
        _text = once "+="
		_location = loc
    end
end

redef class TMinuseq
    redef fun parser_index: Int
    do
	return 60
    end

    init init_tk(loc: Location)
    do
        _text = once "-="
		_location = loc
    end
end

redef class TDotdotdot
    redef fun parser_index: Int
    do
	return 61
    end

    init init_tk(loc: Location)
    do
        _text = once "..."
		_location = loc
    end
end

redef class TDotdot
    redef fun parser_index: Int
    do
	return 62
    end

    init init_tk(loc: Location)
    do
        _text = once ".."
		_location = loc
    end
end

redef class TDot
    redef fun parser_index: Int
    do
	return 63
    end

    init init_tk(loc: Location)
    do
        _text = once "."
		_location = loc
    end
end

redef class TPlus
    redef fun parser_index: Int
    do
	return 64
    end

    init init_tk(loc: Location)
    do
        _text = once "+"
		_location = loc
    end
end

redef class TMinus
    redef fun parser_index: Int
    do
	return 65
    end

    init init_tk(loc: Location)
    do
        _text = once "-"
		_location = loc
    end
end

redef class TStar
    redef fun parser_index: Int
    do
	return 66
    end

    init init_tk(loc: Location)
    do
        _text = once "*"
		_location = loc
    end
end

redef class TSlash
    redef fun parser_index: Int
    do
	return 67
    end

    init init_tk(loc: Location)
    do
        _text = once "/"
		_location = loc
    end
end

redef class TPercent
    redef fun parser_index: Int
    do
	return 68
    end

    init init_tk(loc: Location)
    do
        _text = once "%"
		_location = loc
    end
end

redef class TEq
    redef fun parser_index: Int
    do
	return 69
    end

    init init_tk(loc: Location)
    do
        _text = once "=="
		_location = loc
    end
end

redef class TNe
    redef fun parser_index: Int
    do
	return 70
    end

    init init_tk(loc: Location)
    do
        _text = once "!="
		_location = loc
    end
end

redef class TLt
    redef fun parser_index: Int
    do
	return 71
    end

    init init_tk(loc: Location)
    do
        _text = once "<"
		_location = loc
    end
end

redef class TLe
    redef fun parser_index: Int
    do
	return 72
    end

    init init_tk(loc: Location)
    do
        _text = once "<="
		_location = loc
    end
end

redef class TLl
    redef fun parser_index: Int
    do
	return 73
    end

    init init_tk(loc: Location)
    do
        _text = once "<<"
		_location = loc
    end
end

redef class TGt
    redef fun parser_index: Int
    do
	return 74
    end

    init init_tk(loc: Location)
    do
        _text = once ">"
		_location = loc
    end
end

redef class TGe
    redef fun parser_index: Int
    do
	return 75
    end

    init init_tk(loc: Location)
    do
        _text = once ">="
		_location = loc
    end
end

redef class TGg
    redef fun parser_index: Int
    do
	return 76
    end

    init init_tk(loc: Location)
    do
        _text = once ">>"
		_location = loc
    end
end

redef class TStarship
    redef fun parser_index: Int
    do
	return 77
    end

    init init_tk(loc: Location)
    do
        _text = once "<=>"
		_location = loc
    end
end

redef class TBang
    redef fun parser_index: Int
    do
	return 78
    end

    init init_tk(loc: Location)
    do
        _text = once "!"
		_location = loc
    end
end

redef class TClassid
    redef fun parser_index: Int
    do
	return 79
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TId
    redef fun parser_index: Int
    do
	return 80
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TAttrid
    redef fun parser_index: Int
    do
	return 81
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TNumber
    redef fun parser_index: Int
    do
	return 82
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TFloat
    redef fun parser_index: Int
    do
	return 83
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TChar
    redef fun parser_index: Int
    do
	return 84
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TString
    redef fun parser_index: Int
    do
	return 85
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TStartString
    redef fun parser_index: Int
    do
	return 86
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TMidString
    redef fun parser_index: Int
    do
	return 87
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end

redef class TEndString
    redef fun parser_index: Int
    do
	return 88
    end

    init init_tk(text: String, loc: Location)
    do
        _text = text
		_location = loc
    end
end


redef class EOF
    redef fun parser_index: Int
    do
	return 89
    end

    init(loc: Location)
    do
        _text = ""
		_location = loc
    end
end

redef class AError
    readable var _message: String

    init init_error(message: String, loc: Location)
    do
		init(loc)
		_message = message
    end
end


# The lexer extract NIT tokens from an input stream.
# It is better user with the Parser
class Lexer
	super TablesCapable
	# Last peeked token
	var _token: nullable Token

	# Lexer current state
	var _state: Int = 0

	# Name of the stream (as given to tokens)
	readable var _filename: String

	# Input stream where character are read
	var _stream: IStream

	# Pushback buffer to store unread character
	var _stream_buf: Buffer

	# Number of character stored in the pushback buffer
	var _stream_pos: Int

	# Current line number in the input stream
	var _line: Int = 0

	# Current column in the input stream
	var _pos: Int = 0

	# Was the last character a cariage-return?
	var _cr: Bool = false

	# If the end of stream?
	var _eof: Bool = false

	# Current working text read from the input stream
	var _text: Buffer

	# Constante state values
	private fun state_initial: Int do return 0 end

	# Create a new lexer for a stream (and a name)
	init(stream: IStream, fname: String)
	do
		_filename = fname
		_text = new Buffer
		_stream = stream
		_stream_pos = -1
		_stream_buf = new Buffer
	end

	# Give the next token (but do not consume it)
	fun peek: Token
	do
		while _token == null do
			_token = get_token
		end
		return _token.as(not null)
	end

	# Give and consume the next token
	fun next: Token
	do
		var result = _token
		while result == null do
			result = get_token
		end
		_token = null
		return result.as(not null)
	end

	# Get a token, or null if it is discarded
	private fun get_token: nullable Token
	do
		var dfa_state = 0

		var start_pos = _pos
		var start_line = _line

		var accept_state = -1
		var accept_token = -1
		var accept_length = -1
		var accept_pos = -1
		var accept_line = -1

		var text = _text
		text.clear

		loop
			var c = get_char

			if c != -1 then
				var cr = _cr
				var line = _line
				var pos = _pos
				if c == 10 then
					if cr then
						cr = false
					else
						line = line + 1
						pos = 0
					end
				else if c == 13 then
					line = line + 1
					pos = 0
					cr = true
				else
					pos = pos + 1
					cr = false
				end

				text.add(c.ascii)

				loop
					var old_state = dfa_state
					if dfa_state < -1 then
						old_state = -2 - dfa_state
					end

					dfa_state = -1

					var low = 0
					var high = lexer_goto(old_state, 0) - 1

					if high >= 0 then
						while low <= high do
							var middle = (low + high) / 2
							var offset = middle * 3 + 1 # +1 because length is at 0

							if c < lexer_goto(old_state, offset) then
								high = middle - 1
							else if c > lexer_goto(old_state, offset+1) then
								low = middle + 1
							else
								dfa_state = lexer_goto(old_state, offset+2)
								break
							end
						end
					end
					if dfa_state > -2 then break
				end

				_cr = cr
				_line = line
				_pos = pos
			else
				dfa_state = -1
			end

			if dfa_state >= 0 then
				var tok = lexer_accept(dfa_state)
				if tok != -1 then
					accept_state = dfa_state
					accept_token = tok
					accept_length = text.length
					accept_pos = _pos
					accept_line = _line
				end
			else
				if accept_state != -1 then
					var location = new Location(_filename, start_line + 1, accept_line + 1, start_pos + 1, accept_pos)
					_pos = accept_pos
					_line = accept_line
					push_back(accept_length)
					if accept_token == 0 then
						return null
					end
					if accept_token == 1 then
						var token_text = text.substring(0, accept_length)
						return new TEol.init_tk(token_text, location)
					end
					if accept_token == 2 then
						var token_text = text.substring(0, accept_length)
						return new TComment.init_tk(token_text, location)
					end
					if accept_token == 3 then
						var token_text = text.substring(0, accept_length)
						return new TKwmodule.init_tk(token_text, location)
					end
					if accept_token == 4 then
						return new TKwimport.init_tk(location)
					end
					if accept_token == 5 then
						return new TKwclass.init_tk(location)
					end
					if accept_token == 6 then
						return new TKwabstract.init_tk(location)
					end
					if accept_token == 7 then
						return new TKwinterface.init_tk(location)
					end
					if accept_token == 8 then
						var token_text = text.substring(0, accept_length)
						return new TKwenum.init_tk(token_text, location)
					end
					if accept_token == 9 then
						return new TKwspecial.init_tk(location)
					end
					if accept_token == 10 then
						return new TKwend.init_tk(location)
					end
					if accept_token == 11 then
						return new TKwmeth.init_tk(location)
					end
					if accept_token == 12 then
						return new TKwtype.init_tk(location)
					end
					if accept_token == 13 then
						return new TKwinit.init_tk(location)
					end
					if accept_token == 14 then
						return new TKwredef.init_tk(location)
					end
					if accept_token == 15 then
						return new TKwis.init_tk(location)
					end
					if accept_token == 16 then
						return new TKwdo.init_tk(location)
					end
					if accept_token == 17 then
						return new TKwreadable.init_tk(location)
					end
					if accept_token == 18 then
						return new TKwwritable.init_tk(location)
					end
					if accept_token == 19 then
						return new TKwvar.init_tk(location)
					end
					if accept_token == 20 then
						return new TKwintern.init_tk(location)
					end
					if accept_token == 21 then
						return new TKwextern.init_tk(location)
					end
					if accept_token == 22 then
						return new TKwprotected.init_tk(location)
					end
					if accept_token == 23 then
						return new TKwprivate.init_tk(location)
					end
					if accept_token == 24 then
						return new TKwintrude.init_tk(location)
					end
					if accept_token == 25 then
						return new TKwif.init_tk(location)
					end
					if accept_token == 26 then
						return new TKwthen.init_tk(location)
					end
					if accept_token == 27 then
						return new TKwelse.init_tk(location)
					end
					if accept_token == 28 then
						return new TKwwhile.init_tk(location)
					end
					if accept_token == 29 then
						return new TKwloop.init_tk(location)
					end
					if accept_token == 30 then
						return new TKwfor.init_tk(location)
					end
					if accept_token == 31 then
						return new TKwin.init_tk(location)
					end
					if accept_token == 32 then
						return new TKwand.init_tk(location)
					end
					if accept_token == 33 then
						return new TKwor.init_tk(location)
					end
					if accept_token == 34 then
						return new TKwnot.init_tk(location)
					end
					if accept_token == 35 then
						return new TKwreturn.init_tk(location)
					end
					if accept_token == 36 then
						return new TKwcontinue.init_tk(location)
					end
					if accept_token == 37 then
						return new TKwbreak.init_tk(location)
					end
					if accept_token == 38 then
						return new TKwabort.init_tk(location)
					end
					if accept_token == 39 then
						return new TKwassert.init_tk(location)
					end
					if accept_token == 40 then
						return new TKwnew.init_tk(location)
					end
					if accept_token == 41 then
						return new TKwisa.init_tk(location)
					end
					if accept_token == 42 then
						return new TKwonce.init_tk(location)
					end
					if accept_token == 43 then
						return new TKwsuper.init_tk(location)
					end
					if accept_token == 44 then
						return new TKwself.init_tk(location)
					end
					if accept_token == 45 then
						return new TKwtrue.init_tk(location)
					end
					if accept_token == 46 then
						return new TKwfalse.init_tk(location)
					end
					if accept_token == 47 then
						return new TKwnull.init_tk(location)
					end
					if accept_token == 48 then
						return new TKwas.init_tk(location)
					end
					if accept_token == 49 then
						return new TKwnullable.init_tk(location)
					end
					if accept_token == 50 then
						return new TKwisset.init_tk(location)
					end
					if accept_token == 51 then
						return new TKwlabel.init_tk(location)
					end
					if accept_token == 52 then
						return new TOpar.init_tk(location)
					end
					if accept_token == 53 then
						return new TCpar.init_tk(location)
					end
					if accept_token == 54 then
						return new TObra.init_tk(location)
					end
					if accept_token == 55 then
						return new TCbra.init_tk(location)
					end
					if accept_token == 56 then
						return new TComma.init_tk(location)
					end
					if accept_token == 57 then
						return new TColumn.init_tk(location)
					end
					if accept_token == 58 then
						return new TQuad.init_tk(location)
					end
					if accept_token == 59 then
						return new TAssign.init_tk(location)
					end
					if accept_token == 60 then
						return new TPluseq.init_tk(location)
					end
					if accept_token == 61 then
						return new TMinuseq.init_tk(location)
					end
					if accept_token == 62 then
						return new TDotdotdot.init_tk(location)
					end
					if accept_token == 63 then
						return new TDotdot.init_tk(location)
					end
					if accept_token == 64 then
						return new TDot.init_tk(location)
					end
					if accept_token == 65 then
						return new TPlus.init_tk(location)
					end
					if accept_token == 66 then
						return new TMinus.init_tk(location)
					end
					if accept_token == 67 then
						return new TStar.init_tk(location)
					end
					if accept_token == 68 then
						return new TSlash.init_tk(location)
					end
					if accept_token == 69 then
						return new TPercent.init_tk(location)
					end
					if accept_token == 70 then
						return new TEq.init_tk(location)
					end
					if accept_token == 71 then
						return new TNe.init_tk(location)
					end
					if accept_token == 72 then
						return new TLt.init_tk(location)
					end
					if accept_token == 73 then
						return new TLe.init_tk(location)
					end
					if accept_token == 74 then
						return new TLl.init_tk(location)
					end
					if accept_token == 75 then
						return new TGt.init_tk(location)
					end
					if accept_token == 76 then
						return new TGe.init_tk(location)
					end
					if accept_token == 77 then
						return new TGg.init_tk(location)
					end
					if accept_token == 78 then
						return new TStarship.init_tk(location)
					end
					if accept_token == 79 then
						return new TBang.init_tk(location)
					end
					if accept_token == 80 then
						var token_text = text.substring(0, accept_length)
						return new TClassid.init_tk(token_text, location)
					end
					if accept_token == 81 then
						var token_text = text.substring(0, accept_length)
						return new TId.init_tk(token_text, location)
					end
					if accept_token == 82 then
						var token_text = text.substring(0, accept_length)
						return new TAttrid.init_tk(token_text, location)
					end
					if accept_token == 83 then
						var token_text = text.substring(0, accept_length)
						return new TNumber.init_tk(token_text, location)
					end
					if accept_token == 84 then
						var token_text = text.substring(0, accept_length)
						return new TFloat.init_tk(token_text, location)
					end
					if accept_token == 85 then
						var token_text = text.substring(0, accept_length)
						return new TChar.init_tk(token_text, location)
					end
					if accept_token == 86 then
						var token_text = text.substring(0, accept_length)
						return new TString.init_tk(token_text, location)
					end
					if accept_token == 87 then
						var token_text = text.substring(0, accept_length)
						return new TStartString.init_tk(token_text, location)
					end
					if accept_token == 88 then
						var token_text = text.substring(0, accept_length)
						return new TMidString.init_tk(token_text, location)
					end
					if accept_token == 89 then
						var token_text = text.substring(0, accept_length)
						return new TEndString.init_tk(token_text, location)
					end
				else
					var location = new Location(_filename, start_line + 1, start_line + 1, start_pos + 1, start_pos + 1)
					if text.length > 0 then
						var token = new AError.init_error("Syntax error: unknown token {text}.", location)
						return token
					else
						var token = new EOF(location)
						return token
					end
				end
			end
			if false then break # FIXME remove once unreach loop exits are in c_src
		end
		return null # FIXME remove once unreach loop exits are in c_src
	end

	# Read the next character.
	# The character is read from the stream of from the pushback buffer.
	private fun get_char: Int
	do
		if _eof then
			return -1
		end

		var result: Int

		var sp = _stream_pos
		if sp >= 0 then
			var res = _stream_buf[_stream_pos]
			_stream_pos = sp - 1
			result = res.ascii
		else
			result = _stream.read_char
		end

		if result == -1 then
			_eof = true
		end

		return result
	end

	# Unread some characters.
	# Unread characters are stored in the pushback buffer.
	private fun push_back(accept_length: Int)
	do
		var length = _text.length
		var i = length - 1
		while i >= accept_length do
			_eof = false
			_stream_pos = _stream_pos + 1
			_stream_buf[_stream_pos] = _text[i]
			i = i - 1
		end
	end
end

