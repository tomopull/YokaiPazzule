#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t76;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t77;
// LitJson.FsmContext
struct FsmContext_t74;
// System.IO.TextReader
struct TextReader_t67;
// System.Text.StringBuilder
struct StringBuilder_t28;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// LitJson.Lexer
struct  Lexer_t66  : public Object_t
{
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t74 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t67 * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t28 * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;
};
struct Lexer_t66_StaticFields{
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t76* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t77* ___fsm_handler_table_1;
};
