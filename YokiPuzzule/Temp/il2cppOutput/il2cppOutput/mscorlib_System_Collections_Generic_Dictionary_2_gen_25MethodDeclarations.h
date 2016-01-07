#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1991;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2636;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2637;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>
struct KeyCollection_t1994;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t1998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m13056_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13056(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2__ctor_m13056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13058_gshared (Dictionary_2_t1991 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13058(__this, ___comparer, method) (( void (*) (Dictionary_2_t1991 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13058_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13060_gshared (Dictionary_2_t1991 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13060(__this, ___capacity, method) (( void (*) (Dictionary_2_t1991 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13060_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13062_gshared (Dictionary_2_t1991 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13062(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1991 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m13062_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m13064_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m13064(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m13064_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m13066_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m13066(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m13066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13068_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13068(__this, method) (( bool (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13068_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13070_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13070(__this, method) (( bool (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13070_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13072_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13072(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13072_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13074_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13074(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13074_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13076_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13076(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13076_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13078_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13078(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13078_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13080_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13080(__this, ___key, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13080_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13082_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13082(__this, method) (( bool (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13082_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13084_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13084(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13086_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13086(__this, method) (( bool (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13086_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13088_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1959  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13088(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1959 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13088_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13090_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1959  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13090(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1959 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13090_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13092_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2U5BU5D_t2636* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13092(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2U5BU5D_t2636*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13092_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13094_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1959  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13094(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1959 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13094_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13096_gshared (Dictionary_2_t1991 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13096_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13098_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13098(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13098_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13100_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13100(__this, method) (( Object_t* (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13100_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13102_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13102(__this, method) (( Object_t * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13102_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13104_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13104(__this, method) (( int32_t (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Count_m13104_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t49  Dictionary_2_get_Item_m13106_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13106(__this, ___key, method) (( ObjectMetadata_t49  (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13106_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13108_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_set_Item_m13108_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13110_gshared (Dictionary_2_t1991 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13110(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1991 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13110_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13112_gshared (Dictionary_2_t1991 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13112(__this, ___size, method) (( void (*) (Dictionary_2_t1991 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13112_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13114_gshared (Dictionary_2_t1991 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13114(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13114_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1959  Dictionary_2_make_pair_m13116_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13116(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1959  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_make_pair_m13116_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13118_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13118(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_pick_key_m13118_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t49  Dictionary_2_pick_value_m13120_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13120(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t49  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_pick_value_m13120_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13122_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2U5BU5D_t2636* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13122(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1991 *, KeyValuePair_2U5BU5D_t2636*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13122_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m13124_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13124(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_Resize_m13124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13126_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_Add_m13126_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m13128_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13128(__this, method) (( void (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_Clear_m13128_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13130_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13130(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13130_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13132_gshared (Dictionary_2_t1991 * __this, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13132(__this, ___value, method) (( bool (*) (Dictionary_2_t1991 *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_ContainsValue_m13132_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13134_gshared (Dictionary_2_t1991 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13134(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1991 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m13134_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13136_gshared (Dictionary_2_t1991 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13136(__this, ___sender, method) (( void (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13136_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13138_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13138(__this, ___key, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13140_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, ObjectMetadata_t49 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13140(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1991 *, Object_t *, ObjectMetadata_t49 *, const MethodInfo*))Dictionary_2_TryGetValue_m13140_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Keys()
extern "C" KeyCollection_t1994 * Dictionary_2_get_Keys_m13142_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13142(__this, method) (( KeyCollection_t1994 * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Keys_m13142_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t1998 * Dictionary_2_get_Values_m13144_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13144(__this, method) (( ValueCollection_t1998 * (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_get_Values_m13144_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13146_gshared (Dictionary_2_t1991 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13146(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13146_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t49  Dictionary_2_ToTValue_m13148_gshared (Dictionary_2_t1991 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13148(__this, ___value, method) (( ObjectMetadata_t49  (*) (Dictionary_2_t1991 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13148_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13150_gshared (Dictionary_2_t1991 * __this, KeyValuePair_2_t1959  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13150(__this, ___pair, method) (( bool (*) (Dictionary_2_t1991 *, KeyValuePair_2_t1959 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13150_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t1996  Dictionary_2_GetEnumerator_m13152_gshared (Dictionary_2_t1991 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13152(__this, method) (( Enumerator_t1996  (*) (Dictionary_2_t1991 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13152_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m13154_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t49  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13154(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t49 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13154_gshared)(__this /* static, unused */, ___key, ___value, method)
