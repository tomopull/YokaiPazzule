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
struct Dictionary_2_t2165;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2164;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2799;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2800;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2167;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2171;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15150_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15150(__this, method) (( void (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2__ctor_m15150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15152_gshared (Dictionary_2_t2165 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15152(__this, ___comparer, method) (( void (*) (Dictionary_2_t2165 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15152_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15154_gshared (Dictionary_2_t2165 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15154(__this, ___capacity, method) (( void (*) (Dictionary_2_t2165 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15154_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15156_gshared (Dictionary_2_t2165 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15156(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2165 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m15156_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m15158_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m15158(__this, method) (( Object_t * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m15158_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m15160_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m15160(__this, method) (( Object_t * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m15160_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m15162_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m15162(__this, method) (( bool (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m15162_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m15164_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m15164(__this, method) (( bool (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m15164_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15166_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15166(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15166_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15168_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15168(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2165 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15168_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15170_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15170(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2165 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15170_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15172_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15172(__this, ___key, method) (( bool (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15172_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15174_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15174(__this, ___key, method) (( void (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15174_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15176_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15176(__this, method) (( bool (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15176_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15178_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15178(__this, method) (( Object_t * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15178_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15180_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15180(__this, method) (( bool (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15180_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15182_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2_t2159  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15182(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2165 *, KeyValuePair_2_t2159 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15182_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15184_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2_t2159  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15184(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2165 *, KeyValuePair_2_t2159 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15184_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15186_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2U5BU5D_t2799* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15186(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2165 *, KeyValuePair_2U5BU5D_t2799*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15186_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15188_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2_t2159  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15188(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2165 *, KeyValuePair_2_t2159 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15188_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15190_gshared (Dictionary_2_t2165 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15190(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2165 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15190_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15192_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15192(__this, method) (( Object_t * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15192_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15194_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15194(__this, method) (( Object_t* (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15194_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15196_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15196(__this, method) (( Object_t * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15196_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15198_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15198(__this, method) (( int32_t (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_get_Count_m15198_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15200_gshared (Dictionary_2_t2165 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15200(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2165 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15200_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15202_gshared (Dictionary_2_t2165 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15202(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2165 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15202_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15204_gshared (Dictionary_2_t2165 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15204(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2165 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15204_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15206_gshared (Dictionary_2_t2165 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15206(__this, ___size, method) (( void (*) (Dictionary_2_t2165 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15206_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15208_gshared (Dictionary_2_t2165 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15208(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2165 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15208_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2159  Dictionary_2_make_pair_m15210_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15210(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2159  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15210_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15212_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15212(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15214_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15214(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15214_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15216_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2U5BU5D_t2799* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15216(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2165 *, KeyValuePair_2U5BU5D_t2799*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15216_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15218_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15218(__this, method) (( void (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_Resize_m15218_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15220_gshared (Dictionary_2_t2165 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15220(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2165 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15220_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15222_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15222(__this, method) (( void (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_Clear_m15222_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15224_gshared (Dictionary_2_t2165 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15224(__this, ___key, method) (( bool (*) (Dictionary_2_t2165 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15224_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15226_gshared (Dictionary_2_t2165 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15226(__this, ___value, method) (( bool (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15226_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15228_gshared (Dictionary_2_t2165 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15228(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2165 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m15228_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15230_gshared (Dictionary_2_t2165 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15230(__this, ___sender, method) (( void (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15230_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15232_gshared (Dictionary_2_t2165 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15232(__this, ___key, method) (( bool (*) (Dictionary_2_t2165 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15232_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15234_gshared (Dictionary_2_t2165 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15234(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2165 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15234_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2167 * Dictionary_2_get_Keys_m15236_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15236(__this, method) (( KeyCollection_t2167 * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_get_Keys_m15236_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2171 * Dictionary_2_get_Values_m15238_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15238(__this, method) (( ValueCollection_t2171 * (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_get_Values_m15238_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15240_gshared (Dictionary_2_t2165 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15240(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15240_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15242_gshared (Dictionary_2_t2165 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15242(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2165 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15242_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15244_gshared (Dictionary_2_t2165 * __this, KeyValuePair_2_t2159  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15244(__this, ___pair, method) (( bool (*) (Dictionary_2_t2165 *, KeyValuePair_2_t2159 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15244_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2169  Dictionary_2_GetEnumerator_m15246_gshared (Dictionary_2_t2165 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15246(__this, method) (( Enumerator_t2169  (*) (Dictionary_2_t2165 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m15248_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15248(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15248_gshared)(__this /* static, unused */, ___key, ___value, method)
