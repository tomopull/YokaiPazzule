#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t34;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t32;
// System.Collections.Generic.List`1<System.String>
struct List_1_t33;
// System.Diagnostics.Stopwatch
struct Stopwatch_t35;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_JSONObject_Type.h"

// JSONObject
struct  JSONObject_t20  : public Object_t
{
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t32 * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t33 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::useInt
	bool ___useInt_11;
	// System.Int64 JSONObject::i
	int64_t ___i_12;
	// System.Boolean JSONObject::b
	bool ___b_13;
};
struct JSONObject_t20_StaticFields{
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t34* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t35 * ___printWatch_14;
};
