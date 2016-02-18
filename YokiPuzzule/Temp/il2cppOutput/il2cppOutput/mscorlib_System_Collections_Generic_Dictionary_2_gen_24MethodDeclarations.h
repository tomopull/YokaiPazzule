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
struct Dictionary_2_t1926;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2029;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2744;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1935;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1939;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11858_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11858(__this, method) (( void (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2__ctor_m11858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11860_gshared (Dictionary_2_t1926 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11860(__this, ___comparer, method) (( void (*) (Dictionary_2_t1926 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11860_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11862_gshared (Dictionary_2_t1926 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11862(__this, ___capacity, method) (( void (*) (Dictionary_2_t1926 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11862_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11864_gshared (Dictionary_2_t1926 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11864(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1926 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m11864_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m11866_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m11866(__this, method) (( Object_t * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m11866_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m11868_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m11868(__this, method) (( Object_t * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m11868_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11870_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11870(__this, method) (( bool (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m11870_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11872_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11872(__this, method) (( bool (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m11872_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11874_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11874(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11874_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11876_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11876(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11876_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11878_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11878(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11878_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11880_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11880(__this, ___key, method) (( bool (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11880_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11882_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11882(__this, ___key, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11884_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11884(__this, method) (( bool (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11884_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11886_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11886(__this, method) (( Object_t * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11886_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11888_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11888(__this, method) (( bool (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11890_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2_t1929  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11890(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1926 *, KeyValuePair_2_t1929 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11890_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11892_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2_t1929  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11892(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1926 *, KeyValuePair_2_t1929 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11892_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11894_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2U5BU5D_t2029* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11894(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1926 *, KeyValuePair_2U5BU5D_t2029*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11894_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11896_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2_t1929  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11896(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1926 *, KeyValuePair_2_t1929 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11896_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11898_gshared (Dictionary_2_t1926 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11898(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1926 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11898_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11900_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11900(__this, method) (( Object_t * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11900_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11902_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11902(__this, method) (( Object_t* (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11902_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11904_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11904(__this, method) (( Object_t * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11906_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11906(__this, method) (( int32_t (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_get_Count_m11906_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11908_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11908(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11908_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11910_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11910(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11910_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11912_gshared (Dictionary_2_t1926 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11912(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1926 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11912_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11914_gshared (Dictionary_2_t1926 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11914(__this, ___size, method) (( void (*) (Dictionary_2_t1926 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11914_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11916_gshared (Dictionary_2_t1926 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11916(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1926 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11916_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1929  Dictionary_2_make_pair_m11918_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11918(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1929  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11918_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11920_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11920(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m11920_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11922_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11922(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11922_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11924_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2U5BU5D_t2029* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11924(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1926 *, KeyValuePair_2U5BU5D_t2029*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11924_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11926_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11926(__this, method) (( void (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_Resize_m11926_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11928_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11928(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m11928_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11930_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11930(__this, method) (( void (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_Clear_m11930_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11932_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11932(__this, ___key, method) (( bool (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11932_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11934_gshared (Dictionary_2_t1926 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11934(__this, ___value, method) (( bool (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11934_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11936_gshared (Dictionary_2_t1926 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11936(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1926 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m11936_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11938_gshared (Dictionary_2_t1926 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11938(__this, ___sender, method) (( void (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11938_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11940_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11940(__this, ___key, method) (( bool (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11940_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11942_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11942(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1926 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11942_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1935 * Dictionary_2_get_Keys_m11944_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11944(__this, method) (( KeyCollection_t1935 * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_get_Keys_m11944_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1939 * Dictionary_2_get_Values_m11945_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11945(__this, method) (( ValueCollection_t1939 * (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_get_Values_m11945_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11947_gshared (Dictionary_2_t1926 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11947(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11947_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11949_gshared (Dictionary_2_t1926 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11949(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1926 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11949_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11951_gshared (Dictionary_2_t1926 * __this, KeyValuePair_2_t1929  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11951(__this, ___pair, method) (( bool (*) (Dictionary_2_t1926 *, KeyValuePair_2_t1929 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11951_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1937  Dictionary_2_GetEnumerator_m11952_gshared (Dictionary_2_t1926 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11952(__this, method) (( Enumerator_t1937  (*) (Dictionary_2_t1926 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11952_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m11954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11954(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11954_gshared)(__this /* static, unused */, ___key, ___value, method)
