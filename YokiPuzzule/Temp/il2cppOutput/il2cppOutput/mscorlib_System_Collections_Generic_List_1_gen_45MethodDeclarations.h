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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t2028;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2761;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2744;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2762;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t2031;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2029;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2036;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t2039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m13364_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1__ctor_m13364(__this, method) (( void (*) (List_1_t2028 *, const MethodInfo*))List_1__ctor_m13364_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13366_gshared (List_1_t2028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13366(__this, ___collection, method) (( void (*) (List_1_t2028 *, Object_t*, const MethodInfo*))List_1__ctor_m13366_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13368_gshared (List_1_t2028 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13368(__this, ___capacity, method) (( void (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1__ctor_m13368_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m13370_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13370(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13370_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13372_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13372(__this, method) (( Object_t* (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13372_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13374_gshared (List_1_t2028 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13374(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2028 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13374_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13376_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13376(__this, method) (( Object_t * (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13378_gshared (List_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13378(__this, ___item, method) (( int32_t (*) (List_1_t2028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13378_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13380_gshared (List_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13380(__this, ___item, method) (( bool (*) (List_1_t2028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13380_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13382_gshared (List_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13382(__this, ___item, method) (( int32_t (*) (List_1_t2028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13382_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13384_gshared (List_1_t2028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13384(__this, ___index, ___item, method) (( void (*) (List_1_t2028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13384_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13386_gshared (List_1_t2028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13386(__this, ___item, method) (( void (*) (List_1_t2028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13386_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13388_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13388(__this, method) (( bool (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13388_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13390_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13390(__this, method) (( bool (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13390_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13392_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13392(__this, method) (( Object_t * (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13394_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13394(__this, method) (( bool (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13394_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13396_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13396(__this, method) (( bool (*) (List_1_t2028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13396_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13398_gshared (List_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13398(__this, ___index, method) (( Object_t * (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13398_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13400_gshared (List_1_t2028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13400(__this, ___index, ___value, method) (( void (*) (List_1_t2028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13400_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m13402_gshared (List_1_t2028 * __this, KeyValuePair_2_t1929  ___item, const MethodInfo* method);
#define List_1_Add_m13402(__this, ___item, method) (( void (*) (List_1_t2028 *, KeyValuePair_2_t1929 , const MethodInfo*))List_1_Add_m13402_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13404_gshared (List_1_t2028 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13404(__this, ___newCount, method) (( void (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13404_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13406_gshared (List_1_t2028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13406(__this, ___collection, method) (( void (*) (List_1_t2028 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13406_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13408_gshared (List_1_t2028 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13408(__this, ___enumerable, method) (( void (*) (List_1_t2028 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13408_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13410_gshared (List_1_t2028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13410(__this, ___collection, method) (( void (*) (List_1_t2028 *, Object_t*, const MethodInfo*))List_1_AddRange_m13410_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2031 * List_1_AsReadOnly_m13412_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13412(__this, method) (( ReadOnlyCollection_1_t2031 * (*) (List_1_t2028 *, const MethodInfo*))List_1_AsReadOnly_m13412_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m13414_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_Clear_m13414(__this, method) (( void (*) (List_1_t2028 *, const MethodInfo*))List_1_Clear_m13414_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m13416_gshared (List_1_t2028 * __this, KeyValuePair_2_t1929  ___item, const MethodInfo* method);
#define List_1_Contains_m13416(__this, ___item, method) (( bool (*) (List_1_t2028 *, KeyValuePair_2_t1929 , const MethodInfo*))List_1_Contains_m13416_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13418_gshared (List_1_t2028 * __this, KeyValuePair_2U5BU5D_t2029* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13418(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2028 *, KeyValuePair_2U5BU5D_t2029*, int32_t, const MethodInfo*))List_1_CopyTo_m13418_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1929  List_1_Find_m13420_gshared (List_1_t2028 * __this, Predicate_1_t2036 * ___match, const MethodInfo* method);
#define List_1_Find_m13420(__this, ___match, method) (( KeyValuePair_2_t1929  (*) (List_1_t2028 *, Predicate_1_t2036 *, const MethodInfo*))List_1_Find_m13420_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13422_gshared (Object_t * __this /* static, unused */, Predicate_1_t2036 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13422(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2036 *, const MethodInfo*))List_1_CheckMatch_m13422_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13424_gshared (List_1_t2028 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2036 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13424(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2028 *, int32_t, int32_t, Predicate_1_t2036 *, const MethodInfo*))List_1_GetIndex_m13424_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2030  List_1_GetEnumerator_m13426_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13426(__this, method) (( Enumerator_t2030  (*) (List_1_t2028 *, const MethodInfo*))List_1_GetEnumerator_m13426_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13428_gshared (List_1_t2028 * __this, KeyValuePair_2_t1929  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13428(__this, ___item, method) (( int32_t (*) (List_1_t2028 *, KeyValuePair_2_t1929 , const MethodInfo*))List_1_IndexOf_m13428_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13430_gshared (List_1_t2028 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13430(__this, ___start, ___delta, method) (( void (*) (List_1_t2028 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13430_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13432_gshared (List_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13432(__this, ___index, method) (( void (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13432_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13434_gshared (List_1_t2028 * __this, int32_t ___index, KeyValuePair_2_t1929  ___item, const MethodInfo* method);
#define List_1_Insert_m13434(__this, ___index, ___item, method) (( void (*) (List_1_t2028 *, int32_t, KeyValuePair_2_t1929 , const MethodInfo*))List_1_Insert_m13434_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13436_gshared (List_1_t2028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13436(__this, ___collection, method) (( void (*) (List_1_t2028 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13436_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m13438_gshared (List_1_t2028 * __this, KeyValuePair_2_t1929  ___item, const MethodInfo* method);
#define List_1_Remove_m13438(__this, ___item, method) (( bool (*) (List_1_t2028 *, KeyValuePair_2_t1929 , const MethodInfo*))List_1_Remove_m13438_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13440_gshared (List_1_t2028 * __this, Predicate_1_t2036 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13440(__this, ___match, method) (( int32_t (*) (List_1_t2028 *, Predicate_1_t2036 *, const MethodInfo*))List_1_RemoveAll_m13440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13442_gshared (List_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13442(__this, ___index, method) (( void (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13442_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m13444_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_Reverse_m13444(__this, method) (( void (*) (List_1_t2028 *, const MethodInfo*))List_1_Reverse_m13444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m13446_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_Sort_m13446(__this, method) (( void (*) (List_1_t2028 *, const MethodInfo*))List_1_Sort_m13446_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13448_gshared (List_1_t2028 * __this, Comparison_1_t2039 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13448(__this, ___comparison, method) (( void (*) (List_1_t2028 *, Comparison_1_t2039 *, const MethodInfo*))List_1_Sort_m13448_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t2029* List_1_ToArray_m13450_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_ToArray_m13450(__this, method) (( KeyValuePair_2U5BU5D_t2029* (*) (List_1_t2028 *, const MethodInfo*))List_1_ToArray_m13450_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m13452_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13452(__this, method) (( void (*) (List_1_t2028 *, const MethodInfo*))List_1_TrimExcess_m13452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13454_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13454(__this, method) (( int32_t (*) (List_1_t2028 *, const MethodInfo*))List_1_get_Capacity_m13454_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13456_gshared (List_1_t2028 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13456(__this, ___value, method) (( void (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13456_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m13458_gshared (List_1_t2028 * __this, const MethodInfo* method);
#define List_1_get_Count_m13458(__this, method) (( int32_t (*) (List_1_t2028 *, const MethodInfo*))List_1_get_Count_m13458_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1929  List_1_get_Item_m13460_gshared (List_1_t2028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13460(__this, ___index, method) (( KeyValuePair_2_t1929  (*) (List_1_t2028 *, int32_t, const MethodInfo*))List_1_get_Item_m13460_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13462_gshared (List_1_t2028 * __this, int32_t ___index, KeyValuePair_2_t1929  ___value, const MethodInfo* method);
#define List_1_set_Item_m13462(__this, ___index, ___value, method) (( void (*) (List_1_t2028 *, int32_t, KeyValuePair_2_t1929 , const MethodInfo*))List_1_set_Item_m13462_gshared)(__this, ___index, ___value, method)
