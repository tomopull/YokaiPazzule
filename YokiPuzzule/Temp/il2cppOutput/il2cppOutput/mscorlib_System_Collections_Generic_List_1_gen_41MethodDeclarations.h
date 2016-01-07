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
struct List_1_t1939;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t2624;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2607;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2625;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyCollection_1_t1942;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1940;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t1947;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t1950;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void List_1__ctor_m12432_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1__ctor_m12432(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1__ctor_m12432_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m12434_gshared (List_1_t1939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m12434(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1__ctor_m12434_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12436_gshared (List_1_t1939 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12436(__this, ___capacity, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1__ctor_m12436_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.cctor()
extern "C" void List_1__cctor_m12438_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12438(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12438_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12440_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12440(__this, method) (( Object_t* (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12442_gshared (List_1_t1939 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12442(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1939 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12442_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12444_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12444(__this, method) (( Object_t * (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12446_gshared (List_1_t1939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12446(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12446_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12448_gshared (List_1_t1939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12448(__this, ___item, method) (( bool (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12448_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12450_gshared (List_1_t1939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12450(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12450_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12452_gshared (List_1_t1939 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12452(__this, ___index, ___item, method) (( void (*) (List_1_t1939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12452_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12454_gshared (List_1_t1939 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12454(__this, ___item, method) (( void (*) (List_1_t1939 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12454_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12456_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12456(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12456_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12458_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12458(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12458_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12460_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12460(__this, method) (( Object_t * (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12462_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12462(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12462_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12464_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12464(__this, method) (( bool (*) (List_1_t1939 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12464_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12466_gshared (List_1_t1939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12466(__this, ___index, method) (( Object_t * (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12466_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12468_gshared (List_1_t1939 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12468(__this, ___index, ___value, method) (( void (*) (List_1_t1939 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12468_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
extern "C" void List_1_Add_m12470_gshared (List_1_t1939 * __this, KeyValuePair_2_t1851  ___item, const MethodInfo* method);
#define List_1_Add_m12470(__this, ___item, method) (( void (*) (List_1_t1939 *, KeyValuePair_2_t1851 , const MethodInfo*))List_1_Add_m12470_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12472_gshared (List_1_t1939 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12472(__this, ___newCount, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12472_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12474_gshared (List_1_t1939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12474(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12474_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12476_gshared (List_1_t1939 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12476(__this, ___enumerable, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12476_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12478_gshared (List_1_t1939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12478(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_AddRange_m12478_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1942 * List_1_AsReadOnly_m12480_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12480(__this, method) (( ReadOnlyCollection_1_t1942 * (*) (List_1_t1939 *, const MethodInfo*))List_1_AsReadOnly_m12480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void List_1_Clear_m12482_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_Clear_m12482(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Clear_m12482_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
extern "C" bool List_1_Contains_m12484_gshared (List_1_t1939 * __this, KeyValuePair_2_t1851  ___item, const MethodInfo* method);
#define List_1_Contains_m12484(__this, ___item, method) (( bool (*) (List_1_t1939 *, KeyValuePair_2_t1851 , const MethodInfo*))List_1_Contains_m12484_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12486_gshared (List_1_t1939 * __this, KeyValuePair_2U5BU5D_t1940* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12486(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1939 *, KeyValuePair_2U5BU5D_t1940*, int32_t, const MethodInfo*))List_1_CopyTo_m12486_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Find(System.Predicate`1<T>)
extern "C" KeyValuePair_2_t1851  List_1_Find_m12488_gshared (List_1_t1939 * __this, Predicate_1_t1947 * ___match, const MethodInfo* method);
#define List_1_Find_m12488(__this, ___match, method) (( KeyValuePair_2_t1851  (*) (List_1_t1939 *, Predicate_1_t1947 *, const MethodInfo*))List_1_Find_m12488_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12490_gshared (Object_t * __this /* static, unused */, Predicate_1_t1947 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12490(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1947 *, const MethodInfo*))List_1_CheckMatch_m12490_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12492_gshared (List_1_t1939 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1947 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12492(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1939 *, int32_t, int32_t, Predicate_1_t1947 *, const MethodInfo*))List_1_GetIndex_m12492_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1941  List_1_GetEnumerator_m12494_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12494(__this, method) (( Enumerator_t1941  (*) (List_1_t1939 *, const MethodInfo*))List_1_GetEnumerator_m12494_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12496_gshared (List_1_t1939 * __this, KeyValuePair_2_t1851  ___item, const MethodInfo* method);
#define List_1_IndexOf_m12496(__this, ___item, method) (( int32_t (*) (List_1_t1939 *, KeyValuePair_2_t1851 , const MethodInfo*))List_1_IndexOf_m12496_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12498_gshared (List_1_t1939 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12498(__this, ___start, ___delta, method) (( void (*) (List_1_t1939 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12498_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12500_gshared (List_1_t1939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12500(__this, ___index, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12502_gshared (List_1_t1939 * __this, int32_t ___index, KeyValuePair_2_t1851  ___item, const MethodInfo* method);
#define List_1_Insert_m12502(__this, ___index, ___item, method) (( void (*) (List_1_t1939 *, int32_t, KeyValuePair_2_t1851 , const MethodInfo*))List_1_Insert_m12502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12504_gshared (List_1_t1939 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12504(__this, ___collection, method) (( void (*) (List_1_t1939 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12504_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
extern "C" bool List_1_Remove_m12506_gshared (List_1_t1939 * __this, KeyValuePair_2_t1851  ___item, const MethodInfo* method);
#define List_1_Remove_m12506(__this, ___item, method) (( bool (*) (List_1_t1939 *, KeyValuePair_2_t1851 , const MethodInfo*))List_1_Remove_m12506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12508_gshared (List_1_t1939 * __this, Predicate_1_t1947 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12508(__this, ___match, method) (( int32_t (*) (List_1_t1939 *, Predicate_1_t1947 *, const MethodInfo*))List_1_RemoveAll_m12508_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12510_gshared (List_1_t1939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12510(__this, ___index, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12510_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Reverse()
extern "C" void List_1_Reverse_m12512_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_Reverse_m12512(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Reverse_m12512_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort()
extern "C" void List_1_Sort_m12514_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_Sort_m12514(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_Sort_m12514_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12516_gshared (List_1_t1939 * __this, Comparison_1_t1950 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12516(__this, ___comparison, method) (( void (*) (List_1_t1939 *, Comparison_1_t1950 *, const MethodInfo*))List_1_Sort_m12516_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToArray()
extern "C" KeyValuePair_2U5BU5D_t1940* List_1_ToArray_m12518_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_ToArray_m12518(__this, method) (( KeyValuePair_2U5BU5D_t1940* (*) (List_1_t1939 *, const MethodInfo*))List_1_ToArray_m12518_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TrimExcess()
extern "C" void List_1_TrimExcess_m12520_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12520(__this, method) (( void (*) (List_1_t1939 *, const MethodInfo*))List_1_TrimExcess_m12520_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12522_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12522(__this, method) (( int32_t (*) (List_1_t1939 *, const MethodInfo*))List_1_get_Capacity_m12522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12524_gshared (List_1_t1939 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12524(__this, ___value, method) (( void (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12524_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t List_1_get_Count_m12526_gshared (List_1_t1939 * __this, const MethodInfo* method);
#define List_1_get_Count_m12526(__this, method) (( int32_t (*) (List_1_t1939 *, const MethodInfo*))List_1_get_Count_m12526_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
extern "C" KeyValuePair_2_t1851  List_1_get_Item_m12528_gshared (List_1_t1939 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12528(__this, ___index, method) (( KeyValuePair_2_t1851  (*) (List_1_t1939 *, int32_t, const MethodInfo*))List_1_get_Item_m12528_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12530_gshared (List_1_t1939 * __this, int32_t ___index, KeyValuePair_2_t1851  ___value, const MethodInfo* method);
#define List_1_set_Item_m12530(__this, ___index, ___value, method) (( void (*) (List_1_t1939 *, int32_t, KeyValuePair_2_t1851 , const MethodInfo*))List_1_set_Item_m12530_gshared)(__this, ___index, ___value, method)
