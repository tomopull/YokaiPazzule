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
struct Dictionary_2_t1995;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2754;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2755;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1999;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2003;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12904_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12904(__this, method) (( void (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2__ctor_m12904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12906_gshared (Dictionary_2_t1995 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12906(__this, ___comparer, method) (( void (*) (Dictionary_2_t1995 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12906_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12907_gshared (Dictionary_2_t1995 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12907(__this, ___capacity, method) (( void (*) (Dictionary_2_t1995 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12907_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12909_gshared (Dictionary_2_t1995 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12909(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1995 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m12909_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m12911_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m12911(__this, method) (( Object_t * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m12911_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m12913_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m12913(__this, method) (( Object_t * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m12913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12915_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12915(__this, method) (( bool (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m12915_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12917_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12917(__this, method) (( bool (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m12917_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12919_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12919(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12919_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12921_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12921(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12923_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12923_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12925_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12925(__this, ___key, method) (( bool (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12927_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12927(__this, ___key, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12927_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12929_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12929(__this, method) (( bool (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12929_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12931_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12931(__this, method) (( Object_t * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12933_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12933(__this, method) (( bool (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12935_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2_t1997  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12935(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1995 *, KeyValuePair_2_t1997 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12935_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12937_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2_t1997  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12937(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1995 *, KeyValuePair_2_t1997 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12937_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12939_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2U5BU5D_t2754* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12939(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1995 *, KeyValuePair_2U5BU5D_t2754*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12939_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12941_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2_t1997  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12941(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1995 *, KeyValuePair_2_t1997 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12941_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12943_gshared (Dictionary_2_t1995 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12943(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1995 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12943_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12945_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12945(__this, method) (( Object_t * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12945_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12947_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12947(__this, method) (( Object_t* (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12947_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12949_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12949(__this, method) (( Object_t * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12949_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12951_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12951(__this, method) (( int32_t (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_get_Count_m12951_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12953_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12953(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12953_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12955_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12955(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12955_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12957_gshared (Dictionary_2_t1995 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12957(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1995 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12957_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12959_gshared (Dictionary_2_t1995 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12959(__this, ___size, method) (( void (*) (Dictionary_2_t1995 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12959_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12961_gshared (Dictionary_2_t1995 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12961(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1995 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12961_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1997  Dictionary_2_make_pair_m12963_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12963(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1997  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12963_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12965_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12965(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12965_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12967_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12967(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12967_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12969_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2U5BU5D_t2754* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12969(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1995 *, KeyValuePair_2U5BU5D_t2754*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12969_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12971_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12971(__this, method) (( void (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_Resize_m12971_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12973_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12973(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12973_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12975_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12975(__this, method) (( void (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_Clear_m12975_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12977_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12977(__this, ___key, method) (( bool (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12977_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12979_gshared (Dictionary_2_t1995 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12979(__this, ___value, method) (( bool (*) (Dictionary_2_t1995 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12979_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12981_gshared (Dictionary_2_t1995 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12981(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1995 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m12981_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12983_gshared (Dictionary_2_t1995 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12983(__this, ___sender, method) (( void (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12983_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12985_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12985(__this, ___key, method) (( bool (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12985_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12987_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12987(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1995 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12987_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1999 * Dictionary_2_get_Keys_m12989_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12989(__this, method) (( KeyCollection_t1999 * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_get_Keys_m12989_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2003 * Dictionary_2_get_Values_m12991_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12991(__this, method) (( ValueCollection_t2003 * (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_get_Values_m12991_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12993_gshared (Dictionary_2_t1995 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12993(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12993_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12995_gshared (Dictionary_2_t1995 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12995(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1995 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12995_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12997_gshared (Dictionary_2_t1995 * __this, KeyValuePair_2_t1997  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12997(__this, ___pair, method) (( bool (*) (Dictionary_2_t1995 *, KeyValuePair_2_t1997 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12997_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2001  Dictionary_2_GetEnumerator_m12999_gshared (Dictionary_2_t1995 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12999(__this, method) (( Enumerator_t2001  (*) (Dictionary_2_t1995 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12999_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m13001_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13001(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13001_gshared)(__this /* static, unused */, ___key, ___value, method)
