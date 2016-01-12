#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t68;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t65;
// LitJson.Lexer
struct Lexer_t66;
// System.IO.TextReader
struct TextReader_t67;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_LitJson_JsonToken.h"

// LitJson.JsonReader
struct  JsonReader_t64  : public Object_t
{
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t65 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t66 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t67 * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Object LitJson.JsonReader::token_value
	Object_t * ___token_value_12;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_13;
};
struct JsonReader_t64_StaticFields{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	Object_t* ___parse_table_0;
};
