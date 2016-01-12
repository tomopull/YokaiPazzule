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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2076;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2075;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Collections.ICollection
struct ICollection_t116;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2662;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2663;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2078;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2082;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14218_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14218(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2__ctor_m14218_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14220_gshared (Dictionary_2_t2076 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14220(__this, ___comparer, method) (( void (*) (Dictionary_2_t2076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14220_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14222_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14222(__this, ___capacity, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14222_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14224_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14224(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2__ctor_m14224_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m14226_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m14226(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14226_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m14228_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m14228(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m14228_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14230_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14230(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14232_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14232(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14234_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14234(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14234_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14236_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14236(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14236_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14238_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14238_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14240_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14240(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14240_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14242_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14242(__this, ___key, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14242_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14244_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14244(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14244_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14246_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14246(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14246_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14248_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14248(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14248_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14250_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2070  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14250(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14250_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14252_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2070  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14252(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14252_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14254_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2662* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2662*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14254_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14256_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2070  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14256(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2070 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14256_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14258_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14258(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14258_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14260_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14260(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14260_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14262_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14262(__this, method) (( Object_t* (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14262_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14264_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14264(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14266_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14266(__this, method) (( int32_t (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Count_m14266_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14268_gshared (Dictionary_2_t2076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14268(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m14268_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14270_gshared (Dictionary_2_t2076 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14270_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14272_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14272(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2076 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14272_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14274_gshared (Dictionary_2_t2076 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14274(__this, ___size, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14274_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14276_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14276(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14276_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2070  Dictionary_2_make_pair_m14278_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14278(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2070  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14278_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m14280_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14280(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14280_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14282_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14282(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14282_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14284_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2662* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14284(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2662*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14284_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14286_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14286(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Resize_m14286_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14288_gshared (Dictionary_2_t2076 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m14288_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14290_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14290(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Clear_m14290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14292_gshared (Dictionary_2_t2076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14292(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m14292_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14294_gshared (Dictionary_2_t2076 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14294(__this, ___value, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14294_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14296_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14296(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t718 *, StreamingContext_t719 , const MethodInfo*))Dictionary_2_GetObjectData_m14296_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14298_gshared (Dictionary_2_t2076 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14298(__this, ___sender, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14298_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14300_gshared (Dictionary_2_t2076 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14300(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m14300_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14302_gshared (Dictionary_2_t2076 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14302(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2076 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14302_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2078 * Dictionary_2_get_Keys_m14304_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14304(__this, method) (( KeyCollection_t2078 * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Keys_m14304_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2082 * Dictionary_2_get_Values_m14306_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14306(__this, method) (( ValueCollection_t2082 * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Values_m14306_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m14308_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14308(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14308_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14310_gshared (Dictionary_2_t2076 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14310(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14310_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14312_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2070  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14312(__this, ___pair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2070 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14312_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2080  Dictionary_2_GetEnumerator_m14314_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14314(__this, method) (( Enumerator_t2080  (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14314_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t120  Dictionary_2_U3CCopyToU3Em__0_m14316_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14316(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t120  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14316_gshared)(__this /* static, unused */, ___key, ___value, method)
