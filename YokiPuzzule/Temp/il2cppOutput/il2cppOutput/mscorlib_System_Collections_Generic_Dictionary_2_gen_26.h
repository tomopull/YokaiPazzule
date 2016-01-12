#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t76;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1844;
// System.Object[]
struct ObjectU5BU5D_t129;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t2029;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2032;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct  Dictionary_2_t2031  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::table
	Int32U5BU5D_t76* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::linkSlots
	LinkU5BU5D_t1844* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::keySlots
	ObjectU5BU5D_t129* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::valueSlots
	PropertyMetadataU5BU5D_t2029* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::serialization_info
	SerializationInfo_t718 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2031_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::<>f__am$cacheB
	Transform_1_t2032 * ___U3CU3Ef__amU24cacheB_15;
};
