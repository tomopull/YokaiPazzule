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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t504;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t526;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2609;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1843;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Predicate`1<System.Object>
struct Predicate_1_t1875;
// System.Comparison`1<System.Object>
struct Comparison_1_t1880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11397_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1__ctor_m11397(__this, method) (( void (*) (List_1_t504 *, const MethodInfo*))List_1__ctor_m11397_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11398_gshared (List_1_t504 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11398(__this, ___collection, method) (( void (*) (List_1_t504 *, Object_t*, const MethodInfo*))List_1__ctor_m11398_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11400_gshared (List_1_t504 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11400(__this, ___capacity, method) (( void (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1__ctor_m11400_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11402_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11402(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11402_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11404_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11404(__this, method) (( Object_t* (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11404_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11406_gshared (List_1_t504 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11406(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t504 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11406_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11408_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11408(__this, method) (( Object_t * (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11408_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11410_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11410(__this, ___item, method) (( int32_t (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11410_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11412_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11412(__this, ___item, method) (( bool (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11412_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11414_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11414(__this, ___item, method) (( int32_t (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11416_gshared (List_1_t504 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11416(__this, ___index, ___item, method) (( void (*) (List_1_t504 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11416_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11418_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11418(__this, ___item, method) (( void (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11418_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11420_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11420(__this, method) (( bool (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11420_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11422_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11422(__this, method) (( bool (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11422_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11424_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11424(__this, method) (( Object_t * (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11424_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11426_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11426(__this, method) (( bool (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11426_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11428_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11428(__this, method) (( bool (*) (List_1_t504 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11428_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11430_gshared (List_1_t504 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11430(__this, ___index, method) (( Object_t * (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11430_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11432_gshared (List_1_t504 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11432(__this, ___index, ___value, method) (( void (*) (List_1_t504 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11432_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11434_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11434(__this, ___item, method) (( void (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_Add_m11434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11436_gshared (List_1_t504 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11436(__this, ___newCount, method) (( void (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11436_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11438_gshared (List_1_t504 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11438(__this, ___collection, method) (( void (*) (List_1_t504 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11438_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11440_gshared (List_1_t504 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11440(__this, ___enumerable, method) (( void (*) (List_1_t504 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11440_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11441_gshared (List_1_t504 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11441(__this, ___collection, method) (( void (*) (List_1_t504 *, Object_t*, const MethodInfo*))List_1_AddRange_m11441_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1843 * List_1_AsReadOnly_m11443_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11443(__this, method) (( ReadOnlyCollection_1_t1843 * (*) (List_1_t504 *, const MethodInfo*))List_1_AsReadOnly_m11443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11445_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_Clear_m11445(__this, method) (( void (*) (List_1_t504 *, const MethodInfo*))List_1_Clear_m11445_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11447_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11447(__this, ___item, method) (( bool (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_Contains_m11447_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11449_gshared (List_1_t504 * __this, ObjectU5BU5D_t129* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11449(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t504 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))List_1_CopyTo_m11449_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11451_gshared (List_1_t504 * __this, Predicate_1_t1875 * ___match, const MethodInfo* method);
#define List_1_Find_m11451(__this, ___match, method) (( Object_t * (*) (List_1_t504 *, Predicate_1_t1875 *, const MethodInfo*))List_1_Find_m11451_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11453_gshared (Object_t * __this /* static, unused */, Predicate_1_t1875 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11453(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1875 *, const MethodInfo*))List_1_CheckMatch_m11453_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11455_gshared (List_1_t504 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1875 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11455(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t504 *, int32_t, int32_t, Predicate_1_t1875 *, const MethodInfo*))List_1_GetIndex_m11455_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1872  List_1_GetEnumerator_m11457_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11457(__this, method) (( Enumerator_t1872  (*) (List_1_t504 *, const MethodInfo*))List_1_GetEnumerator_m11457_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11459_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11459(__this, ___item, method) (( int32_t (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11459_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11461_gshared (List_1_t504 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11461(__this, ___start, ___delta, method) (( void (*) (List_1_t504 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11461_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11463_gshared (List_1_t504 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11463(__this, ___index, method) (( void (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11463_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11465_gshared (List_1_t504 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11465(__this, ___index, ___item, method) (( void (*) (List_1_t504 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11465_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11467_gshared (List_1_t504 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11467(__this, ___collection, method) (( void (*) (List_1_t504 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11467_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11469_gshared (List_1_t504 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11469(__this, ___item, method) (( bool (*) (List_1_t504 *, Object_t *, const MethodInfo*))List_1_Remove_m11469_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11471_gshared (List_1_t504 * __this, Predicate_1_t1875 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11471(__this, ___match, method) (( int32_t (*) (List_1_t504 *, Predicate_1_t1875 *, const MethodInfo*))List_1_RemoveAll_m11471_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11473_gshared (List_1_t504 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11473(__this, ___index, method) (( void (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11473_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11475_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_Reverse_m11475(__this, method) (( void (*) (List_1_t504 *, const MethodInfo*))List_1_Reverse_m11475_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11477_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_Sort_m11477(__this, method) (( void (*) (List_1_t504 *, const MethodInfo*))List_1_Sort_m11477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11479_gshared (List_1_t504 * __this, Comparison_1_t1880 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11479(__this, ___comparison, method) (( void (*) (List_1_t504 *, Comparison_1_t1880 *, const MethodInfo*))List_1_Sort_m11479_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t129* List_1_ToArray_m11481_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_ToArray_m11481(__this, method) (( ObjectU5BU5D_t129* (*) (List_1_t504 *, const MethodInfo*))List_1_ToArray_m11481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11483_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11483(__this, method) (( void (*) (List_1_t504 *, const MethodInfo*))List_1_TrimExcess_m11483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11485_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11485(__this, method) (( int32_t (*) (List_1_t504 *, const MethodInfo*))List_1_get_Capacity_m11485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11487_gshared (List_1_t504 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11487(__this, ___value, method) (( void (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11487_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11489_gshared (List_1_t504 * __this, const MethodInfo* method);
#define List_1_get_Count_m11489(__this, method) (( int32_t (*) (List_1_t504 *, const MethodInfo*))List_1_get_Count_m11489_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11491_gshared (List_1_t504 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11491(__this, ___index, method) (( Object_t * (*) (List_1_t504 *, int32_t, const MethodInfo*))List_1_get_Item_m11491_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11493_gshared (List_1_t504 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11493(__this, ___index, ___value, method) (( void (*) (List_1_t504 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11493_gshared)(__this, ___index, ___value, method)
