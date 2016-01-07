#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t171;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ArrayMetadata>
struct  Enumerator_t1982 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ArrayMetadata>::dictionary
	Dictionary_2_t171 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ArrayMetadata>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ArrayMetadata>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,LitJson.ArrayMetadata>::current
	KeyValuePair_2_t1979  ___current_3;
};
