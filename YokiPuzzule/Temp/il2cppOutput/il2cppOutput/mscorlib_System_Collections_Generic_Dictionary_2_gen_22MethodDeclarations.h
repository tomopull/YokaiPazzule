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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1848;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1940;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2607;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1857;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1861;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11114_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11114(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2__ctor_m11114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11116_gshared (Dictionary_2_t1848 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11116(__this, ___comparer, method) (( void (*) (Dictionary_2_t1848 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11116_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11118_gshared (Dictionary_2_t1848 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11118(__this, ___capacity, method) (( void (*) (Dictionary_2_t1848 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11120_gshared (Dictionary_2_t1848 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11120(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1848 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m11120_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m11122_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m11122(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m11122_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m11124_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m11124(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m11124_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11126_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11126(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11128_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11128(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11128_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11130_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11130(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11130_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11132_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11132(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11134_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11134(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11134_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11136_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11136(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11138_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11138(__this, ___key, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11140_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11140(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11140_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11142_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11142(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11144_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11144(__this, method) (( bool (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11146_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11146(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11146_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11148_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11148(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11148_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11150_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2U5BU5D_t1940* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11150(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2U5BU5D_t1940*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11150_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11152_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11152(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11154_gshared (Dictionary_2_t1848 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11154_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11156_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11156(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11156_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11158_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11158(__this, method) (( Object_t* (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11158_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11160_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11160(__this, method) (( Object_t * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11160_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11162_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11162(__this, method) (( int32_t (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_get_Count_m11162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11164_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11164(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11166_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11166(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11168_gshared (Dictionary_2_t1848 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11168(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1848 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11168_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11170_gshared (Dictionary_2_t1848 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11170(__this, ___size, method) (( void (*) (Dictionary_2_t1848 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11172_gshared (Dictionary_2_t1848 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11172(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1851  Dictionary_2_make_pair_m11174_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11174(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1851  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11174_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11176_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11176(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m11176_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11178_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11178(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11178_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11180_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2U5BU5D_t1940* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11180(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1848 *, KeyValuePair_2U5BU5D_t1940*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11180_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11182_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11182(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_Resize_m11182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11184_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11184(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m11184_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11186_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11186(__this, method) (( void (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_Clear_m11186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11188_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11188(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11188_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11190_gshared (Dictionary_2_t1848 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11190(__this, ___value, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11190_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11192_gshared (Dictionary_2_t1848 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11192(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1848 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m11192_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11194_gshared (Dictionary_2_t1848 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11194(__this, ___sender, method) (( void (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11194_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11196_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11196(__this, ___key, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11196_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11198_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11198(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1848 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11198_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1857 * Dictionary_2_get_Keys_m11200_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11200(__this, method) (( KeyCollection_t1857 * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_get_Keys_m11200_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1861 * Dictionary_2_get_Values_m11201_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11201(__this, method) (( ValueCollection_t1861 * (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_get_Values_m11201_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11203_gshared (Dictionary_2_t1848 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11203(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11203_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11205_gshared (Dictionary_2_t1848 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11205(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1848 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11205_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11207_gshared (Dictionary_2_t1848 * __this, KeyValuePair_2_t1851  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11207(__this, ___pair, method) (( bool (*) (Dictionary_2_t1848 *, KeyValuePair_2_t1851 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11207_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1859  Dictionary_2_GetEnumerator_m11208_gshared (Dictionary_2_t1848 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11208(__this, method) (( Enumerator_t1859  (*) (Dictionary_2_t1848 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11208_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m11210_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11210(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11210_gshared)(__this /* static, unused */, ___key, ___value, method)
