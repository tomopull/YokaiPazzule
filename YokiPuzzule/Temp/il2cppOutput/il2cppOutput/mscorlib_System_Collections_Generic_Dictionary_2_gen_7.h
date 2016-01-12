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
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>[]
struct IList_1U5BU5D_t2009;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t1964;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.DictionaryEntry>
struct Transform_1_t2010;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t174  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::table
	Int32U5BU5D_t76* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::linkSlots
	LinkU5BU5D_t1844* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::keySlots
	TypeU5BU5D_t185* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::valueSlots
	IList_1U5BU5D_t2009* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::serialization_info
	SerializationInfo_t718 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t174_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::<>f__am$cacheB
	Transform_1_t2010 * ___U3CU3Ef__amU24cacheB_15;
};
