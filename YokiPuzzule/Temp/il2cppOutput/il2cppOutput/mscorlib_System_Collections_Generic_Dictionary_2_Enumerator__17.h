#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t183;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>
struct  Enumerator_t2059 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::dictionary
	Dictionary_2_t183 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::current
	KeyValuePair_2_t2056  ___current_3;
};
