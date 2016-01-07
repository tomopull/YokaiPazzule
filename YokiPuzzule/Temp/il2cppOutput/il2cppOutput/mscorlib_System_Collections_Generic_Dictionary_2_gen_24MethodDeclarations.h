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
struct Dictionary_2_t1965;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>[]
struct KeyValuePair_2U5BU5D_t2627;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>
struct IEnumerator_1_t2628;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>
struct KeyCollection_t1968;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t1972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m12713_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12713(__this, method) (( void (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2__ctor_m12713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12715_gshared (Dictionary_2_t1965 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12715(__this, ___comparer, method) (( void (*) (Dictionary_2_t1965 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12715_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12717_gshared (Dictionary_2_t1965 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12717(__this, ___capacity, method) (( void (*) (Dictionary_2_t1965 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12717_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12719_gshared (Dictionary_2_t1965 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12719(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1965 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m12719_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m12721_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m12721(__this, method) (( Object_t * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m12721_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m12723_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m12723(__this, method) (( Object_t * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m12723_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12725_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12725(__this, method) (( bool (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12727_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12727(__this, method) (( bool (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12727_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12729_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12729(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12729_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12731_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12731(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12731_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12733_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12733(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12733_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12735_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12735(__this, ___key, method) (( bool (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12735_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12737_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12737(__this, ___key, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12737_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12739_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12739(__this, method) (( bool (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12739_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12741_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12741(__this, method) (( Object_t * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12741_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12743_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12743(__this, method) (( bool (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12743_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12745_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2_t1957  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12745(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1965 *, KeyValuePair_2_t1957 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12745_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12747_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2_t1957  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12747(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1965 *, KeyValuePair_2_t1957 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12747_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12749_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2U5BU5D_t2627* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12749(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1965 *, KeyValuePair_2U5BU5D_t2627*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12749_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12751_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2_t1957  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12751(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1965 *, KeyValuePair_2_t1957 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12751_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12753_gshared (Dictionary_2_t1965 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12753(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1965 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12753_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12755_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12755(__this, method) (( Object_t * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12755_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12757_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12757(__this, method) (( Object_t* (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12757_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12759_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12759(__this, method) (( Object_t * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12759_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12761_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12761(__this, method) (( int32_t (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_get_Count_m12761_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Item(TKey)
extern "C" ArrayMetadata_t48  Dictionary_2_get_Item_m12763_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12763(__this, ___key, method) (( ArrayMetadata_t48  (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12763_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12765_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12765(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_set_Item_m12765_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12767_gshared (Dictionary_2_t1965 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12767(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1965 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12767_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12769_gshared (Dictionary_2_t1965 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12769(__this, ___size, method) (( void (*) (Dictionary_2_t1965 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12769_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12771_gshared (Dictionary_2_t1965 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12771(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1965 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12771_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1957  Dictionary_2_make_pair_m12773_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12773(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1957  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_make_pair_m12773_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12775_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12775(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_pick_key_m12775_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::pick_value(TKey,TValue)
extern "C" ArrayMetadata_t48  Dictionary_2_pick_value_m12777_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12777(__this /* static, unused */, ___key, ___value, method) (( ArrayMetadata_t48  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_pick_value_m12777_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12779_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2U5BU5D_t2627* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12779(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1965 *, KeyValuePair_2U5BU5D_t2627*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12779_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m12781_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12781(__this, method) (( void (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_Resize_m12781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12783_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12783(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_Add_m12783_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m12785_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12785(__this, method) (( void (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_Clear_m12785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12787_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12787(__this, ___key, method) (( bool (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12787_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12789_gshared (Dictionary_2_t1965 * __this, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12789(__this, ___value, method) (( bool (*) (Dictionary_2_t1965 *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_ContainsValue_m12789_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12791_gshared (Dictionary_2_t1965 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12791(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1965 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m12791_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12793_gshared (Dictionary_2_t1965 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12793(__this, ___sender, method) (( void (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12793_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12795_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12795(__this, ___key, method) (( bool (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12795_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12797_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, ArrayMetadata_t48 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12797(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1965 *, Object_t *, ArrayMetadata_t48 *, const MethodInfo*))Dictionary_2_TryGetValue_m12797_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Keys()
extern "C" KeyCollection_t1968 * Dictionary_2_get_Keys_m12799_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12799(__this, method) (( KeyCollection_t1968 * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_get_Keys_m12799_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::get_Values()
extern "C" ValueCollection_t1972 * Dictionary_2_get_Values_m12801_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12801(__this, method) (( ValueCollection_t1972 * (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_get_Values_m12801_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12803_gshared (Dictionary_2_t1965 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12803(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12803_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ToTValue(System.Object)
extern "C" ArrayMetadata_t48  Dictionary_2_ToTValue_m12805_gshared (Dictionary_2_t1965 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12805(__this, ___value, method) (( ArrayMetadata_t48  (*) (Dictionary_2_t1965 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12805_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12807_gshared (Dictionary_2_t1965 * __this, KeyValuePair_2_t1957  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12807(__this, ___pair, method) (( bool (*) (Dictionary_2_t1965 *, KeyValuePair_2_t1957 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12807_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t1970  Dictionary_2_GetEnumerator_m12809_gshared (Dictionary_2_t1965 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12809(__this, method) (( Enumerator_t1970  (*) (Dictionary_2_t1965 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12809_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m12811_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ArrayMetadata_t48  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12811(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, Object_t *, ArrayMetadata_t48 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12811_gshared)(__this /* static, unused */, ___key, ___value, method)
