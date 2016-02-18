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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t682;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2852;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2853;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2854;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2527;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t794;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2531;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2534;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m20182_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1__ctor_m20182(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1__ctor_m20182_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20183_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20183(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1__ctor_m20183_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4531_gshared (List_1_t682 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4531(__this, ___capacity, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1__ctor_m4531_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m20184_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20184(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20184_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20185_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20185(__this, method) (( Object_t* (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20185_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20186_gshared (List_1_t682 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20186(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20186_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20187_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20187(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20188_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20188(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20188_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20189_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20189(__this, ___item, method) (( bool (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20189_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20190_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20190(__this, ___item, method) (( int32_t (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20190_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20191_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20191(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20191_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20192_gshared (List_1_t682 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20192(__this, ___item, method) (( void (*) (List_1_t682 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20192_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20193_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20193(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20193_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20194_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20194(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20194_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20195_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20195(__this, method) (( Object_t * (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20195_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20196_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20196(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20197_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20197(__this, method) (( bool (*) (List_1_t682 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20197_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20198_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20198(__this, ___index, method) (( Object_t * (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20198_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20199_gshared (List_1_t682 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20199(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20199_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m20200_gshared (List_1_t682 * __this, UICharInfo_t547  ___item, const MethodInfo* method);
#define List_1_Add_m20200(__this, ___item, method) (( void (*) (List_1_t682 *, UICharInfo_t547 , const MethodInfo*))List_1_Add_m20200_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20201_gshared (List_1_t682 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20201(__this, ___newCount, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20201_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20202_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20202(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20202_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20203_gshared (List_1_t682 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20203(__this, ___enumerable, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20203_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20204_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20204(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_AddRange_m20204_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2527 * List_1_AsReadOnly_m20205_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20205(__this, method) (( ReadOnlyCollection_1_t2527 * (*) (List_1_t682 *, const MethodInfo*))List_1_AsReadOnly_m20205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m20206_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Clear_m20206(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Clear_m20206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m20207_gshared (List_1_t682 * __this, UICharInfo_t547  ___item, const MethodInfo* method);
#define List_1_Contains_m20207(__this, ___item, method) (( bool (*) (List_1_t682 *, UICharInfo_t547 , const MethodInfo*))List_1_Contains_m20207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20208_gshared (List_1_t682 * __this, UICharInfoU5BU5D_t794* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20208(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t682 *, UICharInfoU5BU5D_t794*, int32_t, const MethodInfo*))List_1_CopyTo_m20208_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t547  List_1_Find_m20209_gshared (List_1_t682 * __this, Predicate_1_t2531 * ___match, const MethodInfo* method);
#define List_1_Find_m20209(__this, ___match, method) (( UICharInfo_t547  (*) (List_1_t682 *, Predicate_1_t2531 *, const MethodInfo*))List_1_Find_m20209_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20210_gshared (Object_t * __this /* static, unused */, Predicate_1_t2531 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20210(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2531 *, const MethodInfo*))List_1_CheckMatch_m20210_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20211_gshared (List_1_t682 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2531 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20211(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t682 *, int32_t, int32_t, Predicate_1_t2531 *, const MethodInfo*))List_1_GetIndex_m20211_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2526  List_1_GetEnumerator_m20212_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20212(__this, method) (( Enumerator_t2526  (*) (List_1_t682 *, const MethodInfo*))List_1_GetEnumerator_m20212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20213_gshared (List_1_t682 * __this, UICharInfo_t547  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20213(__this, ___item, method) (( int32_t (*) (List_1_t682 *, UICharInfo_t547 , const MethodInfo*))List_1_IndexOf_m20213_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20214_gshared (List_1_t682 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20214(__this, ___start, ___delta, method) (( void (*) (List_1_t682 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20214_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20215_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20215(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20216_gshared (List_1_t682 * __this, int32_t ___index, UICharInfo_t547  ___item, const MethodInfo* method);
#define List_1_Insert_m20216(__this, ___index, ___item, method) (( void (*) (List_1_t682 *, int32_t, UICharInfo_t547 , const MethodInfo*))List_1_Insert_m20216_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20217_gshared (List_1_t682 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20217(__this, ___collection, method) (( void (*) (List_1_t682 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20217_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m20218_gshared (List_1_t682 * __this, UICharInfo_t547  ___item, const MethodInfo* method);
#define List_1_Remove_m20218(__this, ___item, method) (( bool (*) (List_1_t682 *, UICharInfo_t547 , const MethodInfo*))List_1_Remove_m20218_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20219_gshared (List_1_t682 * __this, Predicate_1_t2531 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20219(__this, ___match, method) (( int32_t (*) (List_1_t682 *, Predicate_1_t2531 *, const MethodInfo*))List_1_RemoveAll_m20219_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20220_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20220(__this, ___index, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20220_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m20221_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Reverse_m20221(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Reverse_m20221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m20222_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_Sort_m20222(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_Sort_m20222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20223_gshared (List_1_t682 * __this, Comparison_1_t2534 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20223(__this, ___comparison, method) (( void (*) (List_1_t682 *, Comparison_1_t2534 *, const MethodInfo*))List_1_Sort_m20223_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t794* List_1_ToArray_m20224_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_ToArray_m20224(__this, method) (( UICharInfoU5BU5D_t794* (*) (List_1_t682 *, const MethodInfo*))List_1_ToArray_m20224_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20225_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20225(__this, method) (( void (*) (List_1_t682 *, const MethodInfo*))List_1_TrimExcess_m20225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20226_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20226(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Capacity_m20226_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20227_gshared (List_1_t682 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20227(__this, ___value, method) (( void (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20227_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20228_gshared (List_1_t682 * __this, const MethodInfo* method);
#define List_1_get_Count_m20228(__this, method) (( int32_t (*) (List_1_t682 *, const MethodInfo*))List_1_get_Count_m20228_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t547  List_1_get_Item_m20229_gshared (List_1_t682 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20229(__this, ___index, method) (( UICharInfo_t547  (*) (List_1_t682 *, int32_t, const MethodInfo*))List_1_get_Item_m20229_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20230_gshared (List_1_t682 * __this, int32_t ___index, UICharInfo_t547  ___value, const MethodInfo* method);
#define List_1_set_Item_m20230(__this, ___index, ___value, method) (( void (*) (List_1_t682 *, int32_t, UICharInfo_t547 , const MethodInfo*))List_1_set_Item_m20230_gshared)(__this, ___index, ___value, method)
