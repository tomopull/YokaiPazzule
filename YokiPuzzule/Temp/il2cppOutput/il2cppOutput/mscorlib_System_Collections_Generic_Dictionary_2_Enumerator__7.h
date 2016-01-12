#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t1965;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>
struct  Enumerator_t1970 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::dictionary
	Dictionary_2_t1965 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::current
	KeyValuePair_2_t1957  ___current_3;
};
