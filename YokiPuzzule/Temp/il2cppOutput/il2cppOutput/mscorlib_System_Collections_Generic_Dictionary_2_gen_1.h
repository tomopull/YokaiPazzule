﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t88;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1922;
// System.String[]
struct StringU5BU5D_t144;
// JSONObject[]
struct JSONObjectU5BU5D_t143;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,JSONObject,System.Collections.DictionaryEntry>
struct Transform_1_t1983;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct  Dictionary_2_t142  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::table
	Int32U5BU5D_t88* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::linkSlots
	LinkU5BU5D_t1922* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::keySlots
	StringU5BU5D_t144* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,JSONObject>::valueSlots
	JSONObjectU5BU5D_t143* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,JSONObject>::serialization_info
	SerializationInfo_t797 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,JSONObject>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t142_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,JSONObject>::<>f__am$cacheB
	Transform_1_t1983 * ___U3CU3Ef__amU24cacheB_15;
};
