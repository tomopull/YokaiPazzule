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
// ObjectData[]
struct ObjectDataU5BU5D_t1923;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,ObjectData,System.Collections.DictionaryEntry>
struct Transform_1_t1924;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct  Dictionary_2_t13  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,ObjectData>::table
	Int32U5BU5D_t88* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,ObjectData>::linkSlots
	LinkU5BU5D_t1922* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,ObjectData>::keySlots
	StringU5BU5D_t144* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,ObjectData>::valueSlots
	ObjectDataU5BU5D_t1923* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ObjectData>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ObjectData>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ObjectData>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ObjectData>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,ObjectData>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,ObjectData>::serialization_info
	SerializationInfo_t797 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ObjectData>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t13_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,ObjectData>::<>f__am$cacheB
	Transform_1_t1924 * ___U3CU3Ef__amU24cacheB_15;
};
