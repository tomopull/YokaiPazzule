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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1906;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2617;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2618;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1910;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1914;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11972_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11972(__this, method) (( void (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2__ctor_m11972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11974_gshared (Dictionary_2_t1906 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11974(__this, ___comparer, method) (( void (*) (Dictionary_2_t1906 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11974_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11975_gshared (Dictionary_2_t1906 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11975(__this, ___capacity, method) (( void (*) (Dictionary_2_t1906 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11975_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11977_gshared (Dictionary_2_t1906 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11977(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1906 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m11977_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m11979_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m11979(__this, method) (( Object_t * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m11979_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m11981_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m11981(__this, method) (( Object_t * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m11981_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11983_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11983(__this, method) (( bool (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11985_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11985(__this, method) (( bool (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11985_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11987_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11987(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11987_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11989_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11989(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11989_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11991_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11991_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11993_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11993(__this, ___key, method) (( bool (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11993_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11995_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11995(__this, ___key, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11995_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11997_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11997(__this, method) (( bool (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11997_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11999_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11999(__this, method) (( Object_t * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12001_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12001(__this, method) (( bool (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12001_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12003_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2_t1908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12003(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1906 *, KeyValuePair_2_t1908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12003_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12005_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2_t1908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12005(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1906 *, KeyValuePair_2_t1908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12005_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12007_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2U5BU5D_t2617* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12007(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1906 *, KeyValuePair_2U5BU5D_t2617*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12007_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12009_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2_t1908  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12009(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1906 *, KeyValuePair_2_t1908 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12009_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12011_gshared (Dictionary_2_t1906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12011(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1906 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12011_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12013_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12013(__this, method) (( Object_t * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12013_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12015_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12015(__this, method) (( Object_t* (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12015_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12017_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12017(__this, method) (( Object_t * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12017_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12019_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12019(__this, method) (( int32_t (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_get_Count_m12019_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12021_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12021(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12021_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12023_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12023(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12023_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12025_gshared (Dictionary_2_t1906 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12025(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1906 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12025_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12027_gshared (Dictionary_2_t1906 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12027(__this, ___size, method) (( void (*) (Dictionary_2_t1906 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12027_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12029_gshared (Dictionary_2_t1906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12029(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1906 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12029_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1908  Dictionary_2_make_pair_m12031_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12031(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1908  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12031_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12033_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12033(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12033_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12035_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12035(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12035_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12037_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2U5BU5D_t2617* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12037(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1906 *, KeyValuePair_2U5BU5D_t2617*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12037_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12039_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12039(__this, method) (( void (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_Resize_m12039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12041_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12041_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12043_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12043(__this, method) (( void (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_Clear_m12043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12045_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12045(__this, ___key, method) (( bool (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12045_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12047_gshared (Dictionary_2_t1906 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12047(__this, ___value, method) (( bool (*) (Dictionary_2_t1906 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12047_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12049_gshared (Dictionary_2_t1906 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12049(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1906 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m12049_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12051_gshared (Dictionary_2_t1906 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12051(__this, ___sender, method) (( void (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12051_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12053_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12053(__this, ___key, method) (( bool (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12053_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12055_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12055(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1906 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12055_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1910 * Dictionary_2_get_Keys_m12057_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12057(__this, method) (( KeyCollection_t1910 * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_get_Keys_m12057_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1914 * Dictionary_2_get_Values_m12059_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12059(__this, method) (( ValueCollection_t1914 * (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_get_Values_m12059_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12061_gshared (Dictionary_2_t1906 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12061(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12061_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12063_gshared (Dictionary_2_t1906 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12063(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1906 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12063_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12065_gshared (Dictionary_2_t1906 * __this, KeyValuePair_2_t1908  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12065(__this, ___pair, method) (( bool (*) (Dictionary_2_t1906 *, KeyValuePair_2_t1908 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12065_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1912  Dictionary_2_GetEnumerator_m12067_gshared (Dictionary_2_t1906 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12067(__this, method) (( Enumerator_t1912  (*) (Dictionary_2_t1906 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12067_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m12069_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12069(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12069_gshared)(__this /* static, unused */, ___key, ___value, method)
