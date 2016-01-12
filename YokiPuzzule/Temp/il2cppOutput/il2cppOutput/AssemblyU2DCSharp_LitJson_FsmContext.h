#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.Lexer
struct Lexer_t66;

#include "mscorlib_System_Object.h"

// LitJson.FsmContext
struct  FsmContext_t74  : public Object_t
{
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t66 * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;
};
