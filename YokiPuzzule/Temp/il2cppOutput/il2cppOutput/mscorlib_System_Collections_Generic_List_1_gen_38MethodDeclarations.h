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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t683;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2855;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t549;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2536;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t795;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2540;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2543;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m20326_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1__ctor_m20326(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1__ctor_m20326_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20327_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20327(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1__ctor_m20327_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4532_gshared (List_1_t683 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4532(__this, ___capacity, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1__ctor_m4532_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m20328_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20328(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20328_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20329_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20329(__this, method) (( Object_t* (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20329_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20330_gshared (List_1_t683 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20330(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20330_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20331_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20331(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20332_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20332(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20332_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20333_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20333(__this, ___item, method) (( bool (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20333_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20334_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20334(__this, ___item, method) (( int32_t (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20334_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20335_gshared (List_1_t683 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20335(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20335_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20336_gshared (List_1_t683 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20336(__this, ___item, method) (( void (*) (List_1_t683 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20336_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20337_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20337(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20338_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20338(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20338_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20339_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20339(__this, method) (( Object_t * (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20339_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20340_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20340(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20340_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20341_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20341(__this, method) (( bool (*) (List_1_t683 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20341_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20342_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20342(__this, ___index, method) (( Object_t * (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20342_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20343_gshared (List_1_t683 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20343(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20343_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m20344_gshared (List_1_t683 * __this, UILineInfo_t545  ___item, const MethodInfo* method);
#define List_1_Add_m20344(__this, ___item, method) (( void (*) (List_1_t683 *, UILineInfo_t545 , const MethodInfo*))List_1_Add_m20344_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20345_gshared (List_1_t683 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20345(__this, ___newCount, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20345_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20346_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20346(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20346_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20347_gshared (List_1_t683 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20347(__this, ___enumerable, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20347_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20348_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20348(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_AddRange_m20348_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2536 * List_1_AsReadOnly_m20349_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20349(__this, method) (( ReadOnlyCollection_1_t2536 * (*) (List_1_t683 *, const MethodInfo*))List_1_AsReadOnly_m20349_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m20350_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Clear_m20350(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Clear_m20350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m20351_gshared (List_1_t683 * __this, UILineInfo_t545  ___item, const MethodInfo* method);
#define List_1_Contains_m20351(__this, ___item, method) (( bool (*) (List_1_t683 *, UILineInfo_t545 , const MethodInfo*))List_1_Contains_m20351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20352_gshared (List_1_t683 * __this, UILineInfoU5BU5D_t795* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20352(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t683 *, UILineInfoU5BU5D_t795*, int32_t, const MethodInfo*))List_1_CopyTo_m20352_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t545  List_1_Find_m20353_gshared (List_1_t683 * __this, Predicate_1_t2540 * ___match, const MethodInfo* method);
#define List_1_Find_m20353(__this, ___match, method) (( UILineInfo_t545  (*) (List_1_t683 *, Predicate_1_t2540 *, const MethodInfo*))List_1_Find_m20353_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20354_gshared (Object_t * __this /* static, unused */, Predicate_1_t2540 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20354(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2540 *, const MethodInfo*))List_1_CheckMatch_m20354_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20355_gshared (List_1_t683 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2540 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20355(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t683 *, int32_t, int32_t, Predicate_1_t2540 *, const MethodInfo*))List_1_GetIndex_m20355_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2535  List_1_GetEnumerator_m20356_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20356(__this, method) (( Enumerator_t2535  (*) (List_1_t683 *, const MethodInfo*))List_1_GetEnumerator_m20356_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20357_gshared (List_1_t683 * __this, UILineInfo_t545  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20357(__this, ___item, method) (( int32_t (*) (List_1_t683 *, UILineInfo_t545 , const MethodInfo*))List_1_IndexOf_m20357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20358_gshared (List_1_t683 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20358(__this, ___start, ___delta, method) (( void (*) (List_1_t683 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20358_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20359_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20359(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20360_gshared (List_1_t683 * __this, int32_t ___index, UILineInfo_t545  ___item, const MethodInfo* method);
#define List_1_Insert_m20360(__this, ___index, ___item, method) (( void (*) (List_1_t683 *, int32_t, UILineInfo_t545 , const MethodInfo*))List_1_Insert_m20360_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20361_gshared (List_1_t683 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20361(__this, ___collection, method) (( void (*) (List_1_t683 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20361_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m20362_gshared (List_1_t683 * __this, UILineInfo_t545  ___item, const MethodInfo* method);
#define List_1_Remove_m20362(__this, ___item, method) (( bool (*) (List_1_t683 *, UILineInfo_t545 , const MethodInfo*))List_1_Remove_m20362_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20363_gshared (List_1_t683 * __this, Predicate_1_t2540 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20363(__this, ___match, method) (( int32_t (*) (List_1_t683 *, Predicate_1_t2540 *, const MethodInfo*))List_1_RemoveAll_m20363_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20364_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20364(__this, ___index, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20364_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m20365_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Reverse_m20365(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Reverse_m20365_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m20366_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_Sort_m20366(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_Sort_m20366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20367_gshared (List_1_t683 * __this, Comparison_1_t2543 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20367(__this, ___comparison, method) (( void (*) (List_1_t683 *, Comparison_1_t2543 *, const MethodInfo*))List_1_Sort_m20367_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t795* List_1_ToArray_m20368_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_ToArray_m20368(__this, method) (( UILineInfoU5BU5D_t795* (*) (List_1_t683 *, const MethodInfo*))List_1_ToArray_m20368_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20369_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20369(__this, method) (( void (*) (List_1_t683 *, const MethodInfo*))List_1_TrimExcess_m20369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20370_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20370(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Capacity_m20370_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20371_gshared (List_1_t683 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20371(__this, ___value, method) (( void (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20371_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20372_gshared (List_1_t683 * __this, const MethodInfo* method);
#define List_1_get_Count_m20372(__this, method) (( int32_t (*) (List_1_t683 *, const MethodInfo*))List_1_get_Count_m20372_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t545  List_1_get_Item_m20373_gshared (List_1_t683 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20373(__this, ___index, method) (( UILineInfo_t545  (*) (List_1_t683 *, int32_t, const MethodInfo*))List_1_get_Item_m20373_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20374_gshared (List_1_t683 * __this, int32_t ___index, UILineInfo_t545  ___value, const MethodInfo* method);
#define List_1_set_Item_m20374(__this, ___index, ___value, method) (( void (*) (List_1_t683 *, int32_t, UILineInfo_t545 , const MethodInfo*))List_1_set_Item_m20374_gshared)(__this, ___index, ___value, method)
