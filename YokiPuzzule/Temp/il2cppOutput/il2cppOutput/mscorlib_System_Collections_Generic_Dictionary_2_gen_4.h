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
// System.Type[]
struct TypeU5BU5D_t185;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t1962;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t1964;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t1963;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t171  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::table
	Int32U5BU5D_t76* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::linkSlots
	LinkU5BU5D_t1844* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::keySlots
	TypeU5BU5D_t185* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::valueSlots
	ArrayMetadataU5BU5D_t1962* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::serialization_info
	SerializationInfo_t718 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t171_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::<>f__am$cacheB
	Transform_1_t1963 * ___U3CU3Ef__amU24cacheB_15;
};
