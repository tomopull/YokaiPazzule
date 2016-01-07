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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2482;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2721;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2722;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19778_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19778(__this, method) (( void (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2__ctor_m19778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19779_gshared (Dictionary_2_t2482 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19779(__this, ___comparer, method) (( void (*) (Dictionary_2_t2482 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19779_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19781_gshared (Dictionary_2_t2482 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19781(__this, ___capacity, method) (( void (*) (Dictionary_2_t2482 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19781_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19783_gshared (Dictionary_2_t2482 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19783(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2482 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m19783_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m19785_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19785(__this, method) (( Object_t * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m19785_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m19787_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m19787(__this, method) (( Object_t * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m19787_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m19789_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m19789(__this, method) (( bool (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m19789_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m19791_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m19791(__this, method) (( bool (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m19791_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19793_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19793(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19793_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19795_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19795(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19795_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19797_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19797(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19797_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19799_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19799(__this, ___key, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19799_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19801_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19801(__this, ___key, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19801_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19803_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19803(__this, method) (( bool (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19803_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19805_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19805(__this, method) (( Object_t * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19805_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19807_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19807(__this, method) (( bool (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19807_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19809_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2_t2484  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19809(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2482 *, KeyValuePair_2_t2484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19809_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19811_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2_t2484  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19811(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2482 *, KeyValuePair_2_t2484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19811_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19813_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19813(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2482 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19813_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19815_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2_t2484  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19815(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2482 *, KeyValuePair_2_t2484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19815_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19817_gshared (Dictionary_2_t2482 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19817(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2482 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19817_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19819_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19819(__this, method) (( Object_t * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19819_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19821_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19821(__this, method) (( Object_t* (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19821_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19823_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19823(__this, method) (( Object_t * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19823_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19825_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19825(__this, method) (( int32_t (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_get_Count_m19825_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19827_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19827(__this, ___key, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19827_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19829_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19829(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19829_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19831_gshared (Dictionary_2_t2482 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19831(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2482 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19831_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19833_gshared (Dictionary_2_t2482 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19833(__this, ___size, method) (( void (*) (Dictionary_2_t2482 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19833_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19835_gshared (Dictionary_2_t2482 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2482 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19835_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2484  Dictionary_2_make_pair_m19837_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19837(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2484  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19837_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19839_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19839(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m19839_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19841_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19841(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19841_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19843_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2U5BU5D_t2721* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19843(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2482 *, KeyValuePair_2U5BU5D_t2721*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19843_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19845_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19845(__this, method) (( void (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_Resize_m19845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19847_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19847_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19849_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19849(__this, method) (( void (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_Clear_m19849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19851_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19851(__this, ___key, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19851_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19853_gshared (Dictionary_2_t2482 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19853(__this, ___value, method) (( bool (*) (Dictionary_2_t2482 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19853_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19855_gshared (Dictionary_2_t2482 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19855(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2482 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m19855_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19857_gshared (Dictionary_2_t2482 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19857(__this, ___sender, method) (( void (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19857_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19859_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19859(__this, ___key, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19859_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19861_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19861(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19861_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2487 * Dictionary_2_get_Keys_m19863_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19863(__this, method) (( KeyCollection_t2487 * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_get_Keys_m19863_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2491 * Dictionary_2_get_Values_m19865_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19865(__this, method) (( ValueCollection_t2491 * (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_get_Values_m19865_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19867_gshared (Dictionary_2_t2482 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19867(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19867_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19869_gshared (Dictionary_2_t2482 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19869(__this, ___value, method) (( bool (*) (Dictionary_2_t2482 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19869_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19871_gshared (Dictionary_2_t2482 * __this, KeyValuePair_2_t2484  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19871(__this, ___pair, method) (( bool (*) (Dictionary_2_t2482 *, KeyValuePair_2_t2484 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19871_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2489  Dictionary_2_GetEnumerator_m19873_gshared (Dictionary_2_t2482 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19873(__this, method) (( Enumerator_t2489  (*) (Dictionary_2_t2482 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19873_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m19875_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19875(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19875_gshared)(__this /* static, unused */, ___key, ___value, method)
