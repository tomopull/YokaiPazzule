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
struct List_1_t420;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2708;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2619;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2709;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2365;
// System.Int32[]
struct Int32U5BU5D_t76;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2368;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2372;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m18441_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1__ctor_m18441(__this, method) (( void (*) (List_1_t420 *, const MethodInfo*))List_1__ctor_m18441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18442_gshared (List_1_t420 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18442(__this, ___collection, method) (( void (*) (List_1_t420 *, Object_t*, const MethodInfo*))List_1__ctor_m18442_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18443_gshared (List_1_t420 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18443(__this, ___capacity, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1__ctor_m18443_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m18444_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18444(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18444_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18445_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18445(__this, method) (( Object_t* (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18446_gshared (List_1_t420 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18446(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t420 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18446_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18447_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18447(__this, method) (( Object_t * (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18447_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18448_gshared (List_1_t420 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18448(__this, ___item, method) (( int32_t (*) (List_1_t420 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18448_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18449_gshared (List_1_t420 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18449(__this, ___item, method) (( bool (*) (List_1_t420 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18449_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18450_gshared (List_1_t420 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18450(__this, ___item, method) (( int32_t (*) (List_1_t420 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18450_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18451_gshared (List_1_t420 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18451(__this, ___index, ___item, method) (( void (*) (List_1_t420 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18451_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18452_gshared (List_1_t420 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18452(__this, ___item, method) (( void (*) (List_1_t420 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18452_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18453_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18453(__this, method) (( bool (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18454_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18454(__this, method) (( bool (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18454_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18455_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18455(__this, method) (( Object_t * (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18455_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18456_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18456(__this, method) (( bool (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18456_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18457_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18457(__this, method) (( bool (*) (List_1_t420 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18457_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18458_gshared (List_1_t420 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18458(__this, ___index, method) (( Object_t * (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18458_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18459_gshared (List_1_t420 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18459(__this, ___index, ___value, method) (( void (*) (List_1_t420 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18459_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m18460_gshared (List_1_t420 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m18460(__this, ___item, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_Add_m18460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18461_gshared (List_1_t420 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18461(__this, ___newCount, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18461_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18462_gshared (List_1_t420 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18462(__this, ___collection, method) (( void (*) (List_1_t420 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18462_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18463_gshared (List_1_t420 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18463(__this, ___enumerable, method) (( void (*) (List_1_t420 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18463_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2818_gshared (List_1_t420 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2818(__this, ___collection, method) (( void (*) (List_1_t420 *, Object_t*, const MethodInfo*))List_1_AddRange_m2818_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2365 * List_1_AsReadOnly_m18464_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18464(__this, method) (( ReadOnlyCollection_1_t2365 * (*) (List_1_t420 *, const MethodInfo*))List_1_AsReadOnly_m18464_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m18465_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_Clear_m18465(__this, method) (( void (*) (List_1_t420 *, const MethodInfo*))List_1_Clear_m18465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m18466_gshared (List_1_t420 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m18466(__this, ___item, method) (( bool (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_Contains_m18466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18467_gshared (List_1_t420 * __this, Int32U5BU5D_t76* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18467(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t420 *, Int32U5BU5D_t76*, int32_t, const MethodInfo*))List_1_CopyTo_m18467_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m18468_gshared (List_1_t420 * __this, Predicate_1_t2368 * ___match, const MethodInfo* method);
#define List_1_Find_m18468(__this, ___match, method) (( int32_t (*) (List_1_t420 *, Predicate_1_t2368 *, const MethodInfo*))List_1_Find_m18468_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18469_gshared (Object_t * __this /* static, unused */, Predicate_1_t2368 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18469(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2368 *, const MethodInfo*))List_1_CheckMatch_m18469_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18470_gshared (List_1_t420 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2368 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18470(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t420 *, int32_t, int32_t, Predicate_1_t2368 *, const MethodInfo*))List_1_GetIndex_m18470_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2364  List_1_GetEnumerator_m18471_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18471(__this, method) (( Enumerator_t2364  (*) (List_1_t420 *, const MethodInfo*))List_1_GetEnumerator_m18471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18472_gshared (List_1_t420 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m18472(__this, ___item, method) (( int32_t (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_IndexOf_m18472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18473_gshared (List_1_t420 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18473(__this, ___start, ___delta, method) (( void (*) (List_1_t420 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18473_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18474_gshared (List_1_t420 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18474(__this, ___index, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18475_gshared (List_1_t420 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m18475(__this, ___index, ___item, method) (( void (*) (List_1_t420 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m18475_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18476_gshared (List_1_t420 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18476(__this, ___collection, method) (( void (*) (List_1_t420 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18476_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m18477_gshared (List_1_t420 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m18477(__this, ___item, method) (( bool (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_Remove_m18477_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18478_gshared (List_1_t420 * __this, Predicate_1_t2368 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18478(__this, ___match, method) (( int32_t (*) (List_1_t420 *, Predicate_1_t2368 *, const MethodInfo*))List_1_RemoveAll_m18478_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18479_gshared (List_1_t420 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18479(__this, ___index, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m18480_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_Reverse_m18480(__this, method) (( void (*) (List_1_t420 *, const MethodInfo*))List_1_Reverse_m18480_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m18481_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_Sort_m18481(__this, method) (( void (*) (List_1_t420 *, const MethodInfo*))List_1_Sort_m18481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18482_gshared (List_1_t420 * __this, Comparison_1_t2372 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18482(__this, ___comparison, method) (( void (*) (List_1_t420 *, Comparison_1_t2372 *, const MethodInfo*))List_1_Sort_m18482_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t76* List_1_ToArray_m18483_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_ToArray_m18483(__this, method) (( Int32U5BU5D_t76* (*) (List_1_t420 *, const MethodInfo*))List_1_ToArray_m18483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18484_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18484(__this, method) (( void (*) (List_1_t420 *, const MethodInfo*))List_1_TrimExcess_m18484_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18485_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18485(__this, method) (( int32_t (*) (List_1_t420 *, const MethodInfo*))List_1_get_Capacity_m18485_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18486_gshared (List_1_t420 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18486(__this, ___value, method) (( void (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18486_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m18487_gshared (List_1_t420 * __this, const MethodInfo* method);
#define List_1_get_Count_m18487(__this, method) (( int32_t (*) (List_1_t420 *, const MethodInfo*))List_1_get_Count_m18487_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m18488_gshared (List_1_t420 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18488(__this, ___index, method) (( int32_t (*) (List_1_t420 *, int32_t, const MethodInfo*))List_1_get_Item_m18488_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18489_gshared (List_1_t420 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m18489(__this, ___index, ___value, method) (( void (*) (List_1_t420 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m18489_gshared)(__this, ___index, ___value, method)
