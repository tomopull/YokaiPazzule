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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2080;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>[]
struct KeyValuePair_2U5BU5D_t2773;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>
struct IEnumerator_1_t2774;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ObjectMetadata>
struct KeyCollection_t2083;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C" void Dictionary_2__ctor_m13988_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13988(__this, method) (( void (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2__ctor_m13988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13990_gshared (Dictionary_2_t2080 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13990(__this, ___comparer, method) (( void (*) (Dictionary_2_t2080 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13990_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13992_gshared (Dictionary_2_t2080 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13992(__this, ___capacity, method) (( void (*) (Dictionary_2_t2080 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13992_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13994_gshared (Dictionary_2_t2080 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13994(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2080 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m13994_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m13996_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m13996(__this, method) (( Object_t * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m13996_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m13998_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m13998(__this, method) (( Object_t * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m13998_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14000_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14000(__this, method) (( bool (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m14000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14002_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14002(__this, method) (( bool (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m14002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14004_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14004(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14004_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14006_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14006(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14006_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14008_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14008(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14008_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14010_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14010(__this, ___key, method) (( bool (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14010_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14012_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14012(__this, ___key, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14012_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14014_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14014(__this, method) (( bool (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14014_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14016_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14016(__this, method) (( Object_t * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14018_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14018(__this, method) (( bool (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14018_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14020_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2_t2048  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14020(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2080 *, KeyValuePair_2_t2048 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14020_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14022_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2_t2048  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14022(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2080 *, KeyValuePair_2_t2048 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14022_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14024_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2U5BU5D_t2773* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14024(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2080 *, KeyValuePair_2U5BU5D_t2773*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14024_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14026_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2_t2048  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14026(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2080 *, KeyValuePair_2_t2048 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14026_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14028_gshared (Dictionary_2_t2080 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14028(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14028_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14030_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14030(__this, method) (( Object_t * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14030_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14032_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14032(__this, method) (( Object_t* (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14032_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14034_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14034(__this, method) (( Object_t * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14034_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14036_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14036(__this, method) (( int32_t (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_get_Count_m14036_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Item(TKey)
extern "C" ObjectMetadata_t61  Dictionary_2_get_Item_m14038_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14038(__this, ___key, method) (( ObjectMetadata_t61  (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14038_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14040_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14040(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_set_Item_m14040_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14042_gshared (Dictionary_2_t2080 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14042(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2080 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14042_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14044_gshared (Dictionary_2_t2080 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14044(__this, ___size, method) (( void (*) (Dictionary_2_t2080 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14044_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14046_gshared (Dictionary_2_t2080 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14046(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2080 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14046_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2048  Dictionary_2_make_pair_m14048_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14048(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2048  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_make_pair_m14048_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14050_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14050(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_pick_key_m14050_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::pick_value(TKey,TValue)
extern "C" ObjectMetadata_t61  Dictionary_2_pick_value_m14052_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14052(__this /* static, unused */, ___key, ___value, method) (( ObjectMetadata_t61  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_pick_value_m14052_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14054_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2U5BU5D_t2773* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14054(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2080 *, KeyValuePair_2U5BU5D_t2773*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14054_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Resize()
extern "C" void Dictionary_2_Resize_m14056_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14056(__this, method) (( void (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_Resize_m14056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14058_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_Add_m14058_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Clear()
extern "C" void Dictionary_2_Clear_m14060_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14060(__this, method) (( void (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_Clear_m14060_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14062_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14062(__this, ___key, method) (( bool (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14062_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14064_gshared (Dictionary_2_t2080 * __this, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14064(__this, ___value, method) (( bool (*) (Dictionary_2_t2080 *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_ContainsValue_m14064_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14066_gshared (Dictionary_2_t2080 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14066(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2080 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m14066_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14068_gshared (Dictionary_2_t2080 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14068(__this, ___sender, method) (( void (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14068_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14070_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14070(__this, ___key, method) (( bool (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14072_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, ObjectMetadata_t61 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14072(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2080 *, Object_t *, ObjectMetadata_t61 *, const MethodInfo*))Dictionary_2_TryGetValue_m14072_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Keys()
extern "C" KeyCollection_t2083 * Dictionary_2_get_Keys_m14074_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14074(__this, method) (( KeyCollection_t2083 * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_get_Keys_m14074_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::get_Values()
extern "C" ValueCollection_t2087 * Dictionary_2_get_Values_m14076_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14076(__this, method) (( ValueCollection_t2087 * (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_get_Values_m14076_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14078_gshared (Dictionary_2_t2080 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14078(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14078_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ToTValue(System.Object)
extern "C" ObjectMetadata_t61  Dictionary_2_ToTValue_m14080_gshared (Dictionary_2_t2080 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14080(__this, ___value, method) (( ObjectMetadata_t61  (*) (Dictionary_2_t2080 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14080_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14082_gshared (Dictionary_2_t2080 * __this, KeyValuePair_2_t2048  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14082(__this, ___pair, method) (( bool (*) (Dictionary_2_t2080 *, KeyValuePair_2_t2048 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14082_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2085  Dictionary_2_GetEnumerator_m14084_gshared (Dictionary_2_t2080 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14084(__this, method) (( Enumerator_t2085  (*) (Dictionary_2_t2080 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14084_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m14086_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ObjectMetadata_t61  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14086(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, ObjectMetadata_t61 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14086_gshared)(__this /* static, unused */, ___key, ___value, method)
