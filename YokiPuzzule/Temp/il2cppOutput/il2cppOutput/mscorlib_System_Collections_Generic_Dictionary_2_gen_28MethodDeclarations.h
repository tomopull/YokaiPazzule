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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2120;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>[]
struct KeyValuePair_2U5BU5D_t2788;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>
struct IEnumerator_1_t2789;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>
struct KeyCollection_t2122;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>
struct ValueCollection_t2126;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m14539_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14539(__this, method) (( void (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2__ctor_m14539_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14541_gshared (Dictionary_2_t2120 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14541(__this, ___comparer, method) (( void (*) (Dictionary_2_t2120 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14541_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14543_gshared (Dictionary_2_t2120 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14543(__this, ___capacity, method) (( void (*) (Dictionary_2_t2120 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14543_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14545_gshared (Dictionary_2_t2120 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14545(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2120 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m14545_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m14547_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m14547(__this, method) (( Object_t * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14547_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m14549_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m14549(__this, method) (( Object_t * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m14549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14551_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14551(__this, method) (( bool (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14553_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14553(__this, method) (( bool (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14555_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14555(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14555_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14557_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14557(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14557_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14559_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14559(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14559_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14561_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14561(__this, ___key, method) (( bool (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14561_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14563_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14563(__this, ___key, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14563_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14565_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14565(__this, method) (( bool (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14565_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14567_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14567(__this, method) (( Object_t * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14567_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14569_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14569(__this, method) (( bool (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14571_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2_t2044  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14571(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2120 *, KeyValuePair_2_t2044 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14571_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14573_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2_t2044  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14573(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2120 *, KeyValuePair_2_t2044 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14573_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14575_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2U5BU5D_t2788* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14575(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2120 *, KeyValuePair_2U5BU5D_t2788*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14575_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14577_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2_t2044  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14577(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2120 *, KeyValuePair_2_t2044 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14577_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14579_gshared (Dictionary_2_t2120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2120 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14579_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14581_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14581(__this, method) (( Object_t * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14581_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14583_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14583(__this, method) (( Object_t* (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14583_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14585_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14585(__this, method) (( Object_t * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14585_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14587_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14587(__this, method) (( int32_t (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_get_Count_m14587_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Item(TKey)
extern "C" PropertyMetadata_t59  Dictionary_2_get_Item_m14589_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14589(__this, ___key, method) (( PropertyMetadata_t59  (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14589_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14591_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14591(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_set_Item_m14591_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14593_gshared (Dictionary_2_t2120 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14593(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2120 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14593_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14595_gshared (Dictionary_2_t2120 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14595(__this, ___size, method) (( void (*) (Dictionary_2_t2120 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14595_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14597_gshared (Dictionary_2_t2120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14597(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2120 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14597_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2044  Dictionary_2_make_pair_m14599_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14599(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2044  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_make_pair_m14599_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14601_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14601(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_pick_key_m14601_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::pick_value(TKey,TValue)
extern "C" PropertyMetadata_t59  Dictionary_2_pick_value_m14603_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14603(__this /* static, unused */, ___key, ___value, method) (( PropertyMetadata_t59  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_pick_value_m14603_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14605_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2U5BU5D_t2788* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14605(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2120 *, KeyValuePair_2U5BU5D_t2788*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14605_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m14607_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14607(__this, method) (( void (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_Resize_m14607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14609_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14609(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_Add_m14609_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m14611_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14611(__this, method) (( void (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_Clear_m14611_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14613_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14613(__this, ___key, method) (( bool (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14613_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14615_gshared (Dictionary_2_t2120 * __this, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14615(__this, ___value, method) (( bool (*) (Dictionary_2_t2120 *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_ContainsValue_m14615_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14617_gshared (Dictionary_2_t2120 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14617(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2120 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m14617_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14619_gshared (Dictionary_2_t2120 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14619(__this, ___sender, method) (( void (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14619_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14621_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14621(__this, ___key, method) (( bool (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14621_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14623_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, PropertyMetadata_t59 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14623(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2120 *, Object_t *, PropertyMetadata_t59 *, const MethodInfo*))Dictionary_2_TryGetValue_m14623_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Keys()
extern "C" KeyCollection_t2122 * Dictionary_2_get_Keys_m14625_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14625(__this, method) (( KeyCollection_t2122 * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_get_Keys_m14625_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Values()
extern "C" ValueCollection_t2126 * Dictionary_2_get_Values_m14627_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14627(__this, method) (( ValueCollection_t2126 * (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_get_Values_m14627_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14629_gshared (Dictionary_2_t2120 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14629(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14629_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ToTValue(System.Object)
extern "C" PropertyMetadata_t59  Dictionary_2_ToTValue_m14631_gshared (Dictionary_2_t2120 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14631(__this, ___value, method) (( PropertyMetadata_t59  (*) (Dictionary_2_t2120 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14631_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14633_gshared (Dictionary_2_t2120 * __this, KeyValuePair_2_t2044  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14633(__this, ___pair, method) (( bool (*) (Dictionary_2_t2120 *, KeyValuePair_2_t2044 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14633_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2124  Dictionary_2_GetEnumerator_m14635_gshared (Dictionary_2_t2120 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14635(__this, method) (( Enumerator_t2124  (*) (Dictionary_2_t2120 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14635_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m14637_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14637(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14637_gshared)(__this /* static, unused */, ___key, ___value, method)
