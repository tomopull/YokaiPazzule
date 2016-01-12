#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t167;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>
struct  Enumerator_t1937 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::dictionary
	Dictionary_2_t167 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::current
	KeyValuePair_2_t159  ___current_3;
};
