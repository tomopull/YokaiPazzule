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
struct List_1_t634;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2715;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2716;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2717;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2430;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t715;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2434;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2437;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m19119_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1__ctor_m19119(__this, method) (( void (*) (List_1_t634 *, const MethodInfo*))List_1__ctor_m19119_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19120_gshared (List_1_t634 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19120(__this, ___collection, method) (( void (*) (List_1_t634 *, Object_t*, const MethodInfo*))List_1__ctor_m19120_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3787_gshared (List_1_t634 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3787(__this, ___capacity, method) (( void (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1__ctor_m3787_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m19121_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19121(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19121_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19122_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19122(__this, method) (( Object_t* (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19122_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19123_gshared (List_1_t634 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19123(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t634 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19123_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19124_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19124(__this, method) (( Object_t * (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19124_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19125_gshared (List_1_t634 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19125(__this, ___item, method) (( int32_t (*) (List_1_t634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19125_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19126_gshared (List_1_t634 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19126(__this, ___item, method) (( bool (*) (List_1_t634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19126_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19127_gshared (List_1_t634 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19127(__this, ___item, method) (( int32_t (*) (List_1_t634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19127_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19128_gshared (List_1_t634 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19128(__this, ___index, ___item, method) (( void (*) (List_1_t634 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19128_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19129_gshared (List_1_t634 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19129(__this, ___item, method) (( void (*) (List_1_t634 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19129_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19130_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19130(__this, method) (( bool (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19130_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19131_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19131(__this, method) (( bool (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19131_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19132_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19132(__this, method) (( Object_t * (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19133_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19133(__this, method) (( bool (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19133_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19134_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19134(__this, method) (( bool (*) (List_1_t634 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19134_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19135_gshared (List_1_t634 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19135(__this, ___index, method) (( Object_t * (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19135_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19136_gshared (List_1_t634 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19136(__this, ___index, ___value, method) (( void (*) (List_1_t634 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19136_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m19137_gshared (List_1_t634 * __this, UICharInfo_t498  ___item, const MethodInfo* method);
#define List_1_Add_m19137(__this, ___item, method) (( void (*) (List_1_t634 *, UICharInfo_t498 , const MethodInfo*))List_1_Add_m19137_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19138_gshared (List_1_t634 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19138(__this, ___newCount, method) (( void (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19138_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19139_gshared (List_1_t634 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19139(__this, ___collection, method) (( void (*) (List_1_t634 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19139_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19140_gshared (List_1_t634 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19140(__this, ___enumerable, method) (( void (*) (List_1_t634 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19140_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m19141_gshared (List_1_t634 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m19141(__this, ___collection, method) (( void (*) (List_1_t634 *, Object_t*, const MethodInfo*))List_1_AddRange_m19141_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2430 * List_1_AsReadOnly_m19142_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19142(__this, method) (( ReadOnlyCollection_1_t2430 * (*) (List_1_t634 *, const MethodInfo*))List_1_AsReadOnly_m19142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m19143_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_Clear_m19143(__this, method) (( void (*) (List_1_t634 *, const MethodInfo*))List_1_Clear_m19143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m19144_gshared (List_1_t634 * __this, UICharInfo_t498  ___item, const MethodInfo* method);
#define List_1_Contains_m19144(__this, ___item, method) (( bool (*) (List_1_t634 *, UICharInfo_t498 , const MethodInfo*))List_1_Contains_m19144_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19145_gshared (List_1_t634 * __this, UICharInfoU5BU5D_t715* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t634 *, UICharInfoU5BU5D_t715*, int32_t, const MethodInfo*))List_1_CopyTo_m19145_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t498  List_1_Find_m19146_gshared (List_1_t634 * __this, Predicate_1_t2434 * ___match, const MethodInfo* method);
#define List_1_Find_m19146(__this, ___match, method) (( UICharInfo_t498  (*) (List_1_t634 *, Predicate_1_t2434 *, const MethodInfo*))List_1_Find_m19146_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19147_gshared (Object_t * __this /* static, unused */, Predicate_1_t2434 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19147(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2434 *, const MethodInfo*))List_1_CheckMatch_m19147_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19148_gshared (List_1_t634 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2434 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19148(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t634 *, int32_t, int32_t, Predicate_1_t2434 *, const MethodInfo*))List_1_GetIndex_m19148_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2429  List_1_GetEnumerator_m19149_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19149(__this, method) (( Enumerator_t2429  (*) (List_1_t634 *, const MethodInfo*))List_1_GetEnumerator_m19149_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19150_gshared (List_1_t634 * __this, UICharInfo_t498  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19150(__this, ___item, method) (( int32_t (*) (List_1_t634 *, UICharInfo_t498 , const MethodInfo*))List_1_IndexOf_m19150_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19151_gshared (List_1_t634 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19151(__this, ___start, ___delta, method) (( void (*) (List_1_t634 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19151_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19152_gshared (List_1_t634 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19152(__this, ___index, method) (( void (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19153_gshared (List_1_t634 * __this, int32_t ___index, UICharInfo_t498  ___item, const MethodInfo* method);
#define List_1_Insert_m19153(__this, ___index, ___item, method) (( void (*) (List_1_t634 *, int32_t, UICharInfo_t498 , const MethodInfo*))List_1_Insert_m19153_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19154_gshared (List_1_t634 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19154(__this, ___collection, method) (( void (*) (List_1_t634 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19154_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m19155_gshared (List_1_t634 * __this, UICharInfo_t498  ___item, const MethodInfo* method);
#define List_1_Remove_m19155(__this, ___item, method) (( bool (*) (List_1_t634 *, UICharInfo_t498 , const MethodInfo*))List_1_Remove_m19155_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19156_gshared (List_1_t634 * __this, Predicate_1_t2434 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19156(__this, ___match, method) (( int32_t (*) (List_1_t634 *, Predicate_1_t2434 *, const MethodInfo*))List_1_RemoveAll_m19156_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19157_gshared (List_1_t634 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19157(__this, ___index, method) (( void (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19157_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m19158_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_Reverse_m19158(__this, method) (( void (*) (List_1_t634 *, const MethodInfo*))List_1_Reverse_m19158_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m19159_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_Sort_m19159(__this, method) (( void (*) (List_1_t634 *, const MethodInfo*))List_1_Sort_m19159_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19160_gshared (List_1_t634 * __this, Comparison_1_t2437 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19160(__this, ___comparison, method) (( void (*) (List_1_t634 *, Comparison_1_t2437 *, const MethodInfo*))List_1_Sort_m19160_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t715* List_1_ToArray_m19161_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_ToArray_m19161(__this, method) (( UICharInfoU5BU5D_t715* (*) (List_1_t634 *, const MethodInfo*))List_1_ToArray_m19161_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m19162_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19162(__this, method) (( void (*) (List_1_t634 *, const MethodInfo*))List_1_TrimExcess_m19162_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19163_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19163(__this, method) (( int32_t (*) (List_1_t634 *, const MethodInfo*))List_1_get_Capacity_m19163_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19164_gshared (List_1_t634 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19164(__this, ___value, method) (( void (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19164_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m19165_gshared (List_1_t634 * __this, const MethodInfo* method);
#define List_1_get_Count_m19165(__this, method) (( int32_t (*) (List_1_t634 *, const MethodInfo*))List_1_get_Count_m19165_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t498  List_1_get_Item_m19166_gshared (List_1_t634 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19166(__this, ___index, method) (( UICharInfo_t498  (*) (List_1_t634 *, int32_t, const MethodInfo*))List_1_get_Item_m19166_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19167_gshared (List_1_t634 * __this, int32_t ___index, UICharInfo_t498  ___value, const MethodInfo* method);
#define List_1_set_Item_m19167(__this, ___index, ___value, method) (( void (*) (List_1_t634 *, int32_t, UICharInfo_t498 , const MethodInfo*))List_1_set_Item_m19167_gshared)(__this, ___index, ___value, method)
