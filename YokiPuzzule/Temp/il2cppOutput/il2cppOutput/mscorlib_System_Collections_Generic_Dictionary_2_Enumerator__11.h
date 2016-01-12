#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t173;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ObjectMetadata>
struct  Enumerator_t2008 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ObjectMetadata>::dictionary
	Dictionary_2_t173 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ObjectMetadata>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ObjectMetadata>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ObjectMetadata>::current
	KeyValuePair_2_t2005  ___current_3;
};
