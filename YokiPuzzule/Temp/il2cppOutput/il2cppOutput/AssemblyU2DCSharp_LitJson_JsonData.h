#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t40;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t41;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t42;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_LitJson_JsonType.h"

// LitJson.JsonData
struct  JsonData_t7  : public Object_t
{
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	Object_t* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	Object_t* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	Object_t* ___object_list_9;
};
