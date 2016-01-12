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
struct Dictionary_2_t2031;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>[]
struct KeyValuePair_2U5BU5D_t2651;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>
struct IEnumerator_1_t2652;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.PropertyMetadata>
struct KeyCollection_t2033;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.PropertyMetadata>
struct ValueCollection_t2037;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m13607_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13607(__this, method) (( void (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2__ctor_m13607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13609_gshared (Dictionary_2_t2031 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13609(__this, ___comparer, method) (( void (*) (Dictionary_2_t2031 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13609_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13611_gshared (Dictionary_2_t2031 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13611(__this, ___capacity, method) (( void (*) (Dictionary_2_t2031 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13611_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13613_gshared (Dictionary_2_t2031 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13613(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2031 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m13613_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m13615_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m13615(__this, method) (( Object_t * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m13615_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m13617_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m13617(__this, method) (( Object_t * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m13617_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13619_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13619(__this, method) (( bool (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m13619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13621_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13621(__this, method) (( bool (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m13621_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13623_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13623(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13623_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13625_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13625(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13625_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13627_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13627_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13629_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13629(__this, ___key, method) (( bool (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13629_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13631_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13631(__this, ___key, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13631_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13633_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13633(__this, method) (( bool (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13633_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13635_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13635(__this, method) (( Object_t * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13637_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13637(__this, method) (( bool (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13639_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2_t1955  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13639(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2031 *, KeyValuePair_2_t1955 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13639_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13641_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2_t1955  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13641(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2031 *, KeyValuePair_2_t1955 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13641_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13643_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2U5BU5D_t2651* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13643(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2031 *, KeyValuePair_2U5BU5D_t2651*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13643_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13645_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2_t1955  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13645(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2031 *, KeyValuePair_2_t1955 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13645_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13647_gshared (Dictionary_2_t2031 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13647(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2031 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13647_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13649_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13649(__this, method) (( Object_t * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13649_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13651_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13651(__this, method) (( Object_t* (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13651_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13653_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13653(__this, method) (( Object_t * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13653_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13655_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13655(__this, method) (( int32_t (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_get_Count_m13655_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Item(TKey)
extern "C" PropertyMetadata_t47  Dictionary_2_get_Item_m13657_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13657(__this, ___key, method) (( PropertyMetadata_t47  (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13657_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13659_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13659(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_set_Item_m13659_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13661_gshared (Dictionary_2_t2031 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13661(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2031 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13661_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13663_gshared (Dictionary_2_t2031 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13663(__this, ___size, method) (( void (*) (Dictionary_2_t2031 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13663_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13665_gshared (Dictionary_2_t2031 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2031 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13665_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1955  Dictionary_2_make_pair_m13667_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13667(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1955  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_make_pair_m13667_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13669_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13669(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_pick_key_m13669_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::pick_value(TKey,TValue)
extern "C" PropertyMetadata_t47  Dictionary_2_pick_value_m13671_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13671(__this /* static, unused */, ___key, ___value, method) (( PropertyMetadata_t47  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_pick_value_m13671_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13673_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2U5BU5D_t2651* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2031 *, KeyValuePair_2U5BU5D_t2651*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13673_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m13675_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13675(__this, method) (( void (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_Resize_m13675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13677_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13677(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_Add_m13677_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m13679_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13679(__this, method) (( void (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_Clear_m13679_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13681_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13681(__this, ___key, method) (( bool (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13681_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13683_gshared (Dictionary_2_t2031 * __this, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13683(__this, ___value, method) (( bool (*) (Dictionary_2_t2031 *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_ContainsValue_m13683_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13685_gshared (Dictionary_2_t2031 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13685(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2031 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m13685_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13687_gshared (Dictionary_2_t2031 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13687(__this, ___sender, method) (( void (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13687_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13689_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13689(__this, ___key, method) (( bool (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13691_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, PropertyMetadata_t47 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13691(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2031 *, Object_t *, PropertyMetadata_t47 *, const MethodInfo*))Dictionary_2_TryGetValue_m13691_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Keys()
extern "C" KeyCollection_t2033 * Dictionary_2_get_Keys_m13693_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13693(__this, method) (( KeyCollection_t2033 * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_get_Keys_m13693_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::get_Values()
extern "C" ValueCollection_t2037 * Dictionary_2_get_Values_m13695_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13695(__this, method) (( ValueCollection_t2037 * (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_get_Values_m13695_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13697_gshared (Dictionary_2_t2031 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13697(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13697_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ToTValue(System.Object)
extern "C" PropertyMetadata_t47  Dictionary_2_ToTValue_m13699_gshared (Dictionary_2_t2031 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13699(__this, ___value, method) (( PropertyMetadata_t47  (*) (Dictionary_2_t2031 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13699_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13701_gshared (Dictionary_2_t2031 * __this, KeyValuePair_2_t1955  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13701(__this, ___pair, method) (( bool (*) (Dictionary_2_t2031 *, KeyValuePair_2_t1955 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13701_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2035  Dictionary_2_GetEnumerator_m13703_gshared (Dictionary_2_t2031 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13703(__this, method) (( Enumerator_t2035  (*) (Dictionary_2_t2031 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13703_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m13705_gshared (Object_t * __this /* static, unused */, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13705(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13705_gshared)(__this /* static, unused */, ___key, ___value, method)
