#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t174;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Enumerator_t2015 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::dictionary
	Dictionary_2_t174 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::current
	KeyValuePair_2_t2012  ___current_3;
};
