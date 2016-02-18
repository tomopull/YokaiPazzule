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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t472;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2845;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2756;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2846;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2458;
// System.Int32[]
struct Int32U5BU5D_t88;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2461;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2465;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m19417_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1__ctor_m19417(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1__ctor_m19417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19418_gshared (List_1_t472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19418(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1__ctor_m19418_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m19419_gshared (List_1_t472 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m19419(__this, ___capacity, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1__ctor_m19419_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m19420_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19420(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19420_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19421_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19421(__this, method) (( Object_t* (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19421_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19422_gshared (List_1_t472 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19422(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t472 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19422_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19423_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19423(__this, method) (( Object_t * (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19423_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19424_gshared (List_1_t472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19424(__this, ___item, method) (( int32_t (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19424_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19425_gshared (List_1_t472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19425(__this, ___item, method) (( bool (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19425_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19426_gshared (List_1_t472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19426(__this, ___item, method) (( int32_t (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19426_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19427_gshared (List_1_t472 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19427(__this, ___index, ___item, method) (( void (*) (List_1_t472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19427_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19428_gshared (List_1_t472 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19428(__this, ___item, method) (( void (*) (List_1_t472 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19428_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19429_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19429(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19429_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19430_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19430(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19430_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19431_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19431(__this, method) (( Object_t * (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19431_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19432_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19432(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19432_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19433_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19433(__this, method) (( bool (*) (List_1_t472 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19433_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19434_gshared (List_1_t472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19434(__this, ___index, method) (( Object_t * (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19434_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19435_gshared (List_1_t472 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19435(__this, ___index, ___value, method) (( void (*) (List_1_t472 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19435_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m19436_gshared (List_1_t472 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m19436(__this, ___item, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_Add_m19436_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19437_gshared (List_1_t472 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19437(__this, ___newCount, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19437_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19438_gshared (List_1_t472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19438(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19438_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19439_gshared (List_1_t472 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19439(__this, ___enumerable, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19439_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3289_gshared (List_1_t472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3289(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_AddRange_m3289_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2458 * List_1_AsReadOnly_m19440_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19440(__this, method) (( ReadOnlyCollection_1_t2458 * (*) (List_1_t472 *, const MethodInfo*))List_1_AsReadOnly_m19440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m19441_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_Clear_m19441(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Clear_m19441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m19442_gshared (List_1_t472 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m19442(__this, ___item, method) (( bool (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_Contains_m19442_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19443_gshared (List_1_t472 * __this, Int32U5BU5D_t88* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19443(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t472 *, Int32U5BU5D_t88*, int32_t, const MethodInfo*))List_1_CopyTo_m19443_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m19444_gshared (List_1_t472 * __this, Predicate_1_t2461 * ___match, const MethodInfo* method);
#define List_1_Find_m19444(__this, ___match, method) (( int32_t (*) (List_1_t472 *, Predicate_1_t2461 *, const MethodInfo*))List_1_Find_m19444_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19445_gshared (Object_t * __this /* static, unused */, Predicate_1_t2461 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19445(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2461 *, const MethodInfo*))List_1_CheckMatch_m19445_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19446_gshared (List_1_t472 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2461 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19446(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t472 *, int32_t, int32_t, Predicate_1_t2461 *, const MethodInfo*))List_1_GetIndex_m19446_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2457  List_1_GetEnumerator_m19447_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19447(__this, method) (( Enumerator_t2457  (*) (List_1_t472 *, const MethodInfo*))List_1_GetEnumerator_m19447_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19448_gshared (List_1_t472 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m19448(__this, ___item, method) (( int32_t (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_IndexOf_m19448_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19449_gshared (List_1_t472 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19449(__this, ___start, ___delta, method) (( void (*) (List_1_t472 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19449_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19450_gshared (List_1_t472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19450(__this, ___index, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19450_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19451_gshared (List_1_t472 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m19451(__this, ___index, ___item, method) (( void (*) (List_1_t472 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m19451_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19452_gshared (List_1_t472 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19452(__this, ___collection, method) (( void (*) (List_1_t472 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19452_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m19453_gshared (List_1_t472 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m19453(__this, ___item, method) (( bool (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_Remove_m19453_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19454_gshared (List_1_t472 * __this, Predicate_1_t2461 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19454(__this, ___match, method) (( int32_t (*) (List_1_t472 *, Predicate_1_t2461 *, const MethodInfo*))List_1_RemoveAll_m19454_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19455_gshared (List_1_t472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19455(__this, ___index, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19455_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m19456_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_Reverse_m19456(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Reverse_m19456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m19457_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_Sort_m19457(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_Sort_m19457_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19458_gshared (List_1_t472 * __this, Comparison_1_t2465 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19458(__this, ___comparison, method) (( void (*) (List_1_t472 *, Comparison_1_t2465 *, const MethodInfo*))List_1_Sort_m19458_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t88* List_1_ToArray_m19459_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_ToArray_m19459(__this, method) (( Int32U5BU5D_t88* (*) (List_1_t472 *, const MethodInfo*))List_1_ToArray_m19459_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m19460_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19460(__this, method) (( void (*) (List_1_t472 *, const MethodInfo*))List_1_TrimExcess_m19460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19461_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19461(__this, method) (( int32_t (*) (List_1_t472 *, const MethodInfo*))List_1_get_Capacity_m19461_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19462_gshared (List_1_t472 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19462(__this, ___value, method) (( void (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19462_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m19463_gshared (List_1_t472 * __this, const MethodInfo* method);
#define List_1_get_Count_m19463(__this, method) (( int32_t (*) (List_1_t472 *, const MethodInfo*))List_1_get_Count_m19463_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m19464_gshared (List_1_t472 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19464(__this, ___index, method) (( int32_t (*) (List_1_t472 *, int32_t, const MethodInfo*))List_1_get_Item_m19464_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19465_gshared (List_1_t472 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m19465(__this, ___index, ___value, method) (( void (*) (List_1_t472 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m19465_gshared)(__this, ___index, ___value, method)
