﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_t224;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>
struct  Enumerator_t2136 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>::dictionary
	Dictionary_2_t224 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.PropertyMetadata>::current
	KeyValuePair_2_t2133  ___current_3;
};
