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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2054;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2764;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2765;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>
struct KeyCollection_t2057;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2061;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m13645_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13645(__this, method) (( void (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2__ctor_m13645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13647_gshared (Dictionary_2_t2054 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13647(__this, ___comparer, method) (( void (*) (Dictionary_2_t2054 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13647_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13649_gshared (Dictionary_2_t2054 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13649(__this, ___capacity, method) (( void (*) (Dictionary_2_t2054 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13649_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13651_gshared (Dictionary_2_t2054 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13651(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2054 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m13651_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m13653_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m13653(__this, method) (( Object_t * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m13653_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m13655_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m13655(__this, method) (( Object_t * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m13655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13657_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13657(__this, method) (( bool (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13659_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13659(__this, method) (( bool (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13659_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13661_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13661(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13663_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13663_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13665_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13665_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13667_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13667(__this, ___key, method) (( bool (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13667_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13669_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13669(__this, ___key, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13669_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13671_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13671(__this, method) (( bool (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13671_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13673_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13673(__this, method) (( Object_t * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13673_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13675_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13675(__this, method) (( bool (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13677_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2_t2046  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2054 *, KeyValuePair_2_t2046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13677_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13679_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2_t2046  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13679(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2054 *, KeyValuePair_2_t2046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13679_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13681_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2U5BU5D_t2764* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2054 *, KeyValuePair_2U5BU5D_t2764*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13681_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13683_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2_t2046  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13683(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2054 *, KeyValuePair_2_t2046 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13683_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13685_gshared (Dictionary_2_t2054 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13685_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13687_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13687(__this, method) (( Object_t * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13687_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13689_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13689(__this, method) (( Object_t* (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13689_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13691_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13691(__this, method) (( Object_t * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13693_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13693(__this, method) (( int32_t (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_get_Count_m13693_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t60  Dictionary_2_get_Item_m13695_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13695(__this, ___key, method) (( ArrayMetadata_t60  (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13695_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13697_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_set_Item_m13697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13699_gshared (Dictionary_2_t2054 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13699(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2054 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13699_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13701_gshared (Dictionary_2_t2054 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13701(__this, ___size, method) (( void (*) (Dictionary_2_t2054 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13701_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13703_gshared (Dictionary_2_t2054 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2054 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13703_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2046  Dictionary_2_make_pair_m13705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13705(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2046  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_make_pair_m13705_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13707_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13707(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_pick_key_m13707_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t60  Dictionary_2_pick_value_m13709_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13709(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t60  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_pick_value_m13709_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13711_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2U5BU5D_t2764* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2054 *, KeyValuePair_2U5BU5D_t2764*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13711_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m13713_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13713(__this, method) (( void (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_Resize_m13713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13715_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_Add_m13715_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m13717_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13717(__this, method) (( void (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_Clear_m13717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13719_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13719(__this, ___key, method) (( bool (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13719_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13721_gshared (Dictionary_2_t2054 * __this, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13721(__this, ___value, method) (( bool (*) (Dictionary_2_t2054 *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_ContainsValue_m13721_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13723_gshared (Dictionary_2_t2054 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13723(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2054 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m13723_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13725_gshared (Dictionary_2_t2054 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13725(__this, ___sender, method) (( void (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13725_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13727_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13727(__this, ___key, method) (( bool (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13727_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13729_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, ArrayMetadata_t60 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2054 *, Object_t *, ArrayMetadata_t60 *, const MethodInfo*))Dictionary_2_TryGetValue_m13729_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Keys()
extern "C" KeyCollection_t2057 * Dictionary_2_get_Keys_m13731_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13731(__this, method) (( KeyCollection_t2057 * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_get_Keys_m13731_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t2061 * Dictionary_2_get_Values_m13733_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13733(__this, method) (( ValueCollection_t2061 * (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_get_Values_m13733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13735_gshared (Dictionary_2_t2054 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13735(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t60  Dictionary_2_ToTValue_m13737_gshared (Dictionary_2_t2054 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13737(__this, ___value, method) (( ArrayMetadata_t60  (*) (Dictionary_2_t2054 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13739_gshared (Dictionary_2_t2054 * __this, KeyValuePair_2_t2046  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13739(__this, ___pair, method) (( bool (*) (Dictionary_2_t2054 *, KeyValuePair_2_t2046 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2059  Dictionary_2_GetEnumerator_m13741_gshared (Dictionary_2_t2054 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13741(__this, method) (( Enumerator_t2059  (*) (Dictionary_2_t2054 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m13743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13743(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13743_gshared)(__this /* static, unused */, ___key, ___value, method)
