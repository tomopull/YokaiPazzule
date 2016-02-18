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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2575;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Collections.ICollection
struct ICollection_t154;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2863;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2864;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2580;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2584;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m20912_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20912(__this, method) (( void (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2__ctor_m20912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20914_gshared (Dictionary_2_t2575 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20914(__this, ___comparer, method) (( void (*) (Dictionary_2_t2575 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20914_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20916_gshared (Dictionary_2_t2575 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20916(__this, ___capacity, method) (( void (*) (Dictionary_2_t2575 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20916_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20918_gshared (Dictionary_2_t2575 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20918(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2575 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2__ctor_m20918_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m20920_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20920(__this, method) (( Object_t * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20920_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m20922_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m20922(__this, method) (( Object_t * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m20922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m20924_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m20924(__this, method) (( bool (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m20924_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m20926_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m20926(__this, method) (( bool (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m20926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20928_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20928(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20928_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20930_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20930(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20930_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20932_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20932(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20932_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20934_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20934(__this, ___key, method) (( bool (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20934_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20936_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20936(__this, ___key, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20936_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20938_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20938(__this, method) (( bool (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20938_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20940_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20940(__this, method) (( Object_t * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20940_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20942_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20942(__this, method) (( bool (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20944_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2_t2577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20944(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2575 *, KeyValuePair_2_t2577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20944_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20946_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2_t2577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20946(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2575 *, KeyValuePair_2_t2577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20946_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20948_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2U5BU5D_t2863* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20948(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2575 *, KeyValuePair_2U5BU5D_t2863*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20948_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20950_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2_t2577  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2575 *, KeyValuePair_2_t2577 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20952_gshared (Dictionary_2_t2575 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2575 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20952_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954(__this, method) (( Object_t * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20956_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20956(__this, method) (( Object_t* (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20956_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20958_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20958(__this, method) (( Object_t * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20958_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20960_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20960(__this, method) (( int32_t (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_get_Count_m20960_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20962_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20962(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20962_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20964_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20964(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m20964_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20966_gshared (Dictionary_2_t2575 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20966(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2575 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20966_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20968_gshared (Dictionary_2_t2575 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20968(__this, ___size, method) (( void (*) (Dictionary_2_t2575 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20968_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20970_gshared (Dictionary_2_t2575 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20970(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2575 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20970_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2577  Dictionary_2_make_pair_m20972_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20972(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2577  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m20972_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20974_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20974(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m20974_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m20976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20976(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m20976_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20978_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2U5BU5D_t2863* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20978(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2575 *, KeyValuePair_2U5BU5D_t2863*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20978_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m20980_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20980(__this, method) (( void (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_Resize_m20980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20982_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20982(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m20982_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m20984_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20984(__this, method) (( void (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_Clear_m20984_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20986_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20986(__this, ___key, method) (( bool (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m20986_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20988_gshared (Dictionary_2_t2575 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20988(__this, ___value, method) (( bool (*) (Dictionary_2_t2575 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m20988_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20990_gshared (Dictionary_2_t2575 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20990(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2575 *, SerializationInfo_t797 *, StreamingContext_t798 , const MethodInfo*))Dictionary_2_GetObjectData_m20990_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20992_gshared (Dictionary_2_t2575 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20992(__this, ___sender, method) (( void (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20992_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20994_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20994(__this, ___key, method) (( bool (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m20994_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20996_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20996(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2575 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m20996_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2580 * Dictionary_2_get_Keys_m20998_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20998(__this, method) (( KeyCollection_t2580 * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_get_Keys_m20998_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2584 * Dictionary_2_get_Values_m21000_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21000(__this, method) (( ValueCollection_t2584 * (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_get_Values_m21000_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21002_gshared (Dictionary_2_t2575 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21002(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21002_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m21004_gshared (Dictionary_2_t2575 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21004(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2575 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21004_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21006_gshared (Dictionary_2_t2575 * __this, KeyValuePair_2_t2577  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21006(__this, ___pair, method) (( bool (*) (Dictionary_2_t2575 *, KeyValuePair_2_t2577 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21006_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2582  Dictionary_2_GetEnumerator_m21008_gshared (Dictionary_2_t2575 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21008(__this, method) (( Enumerator_t2582  (*) (Dictionary_2_t2575 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21008_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t158  Dictionary_2_U3CCopyToU3Em__0_m21010_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21010(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t158  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21010_gshared)(__this /* static, unused */, ___key, ___value, method)
