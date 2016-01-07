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
struct List_1_t635;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2718;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2719;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t500;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2439;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t716;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2443;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2446;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m19263_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1__ctor_m19263(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1__ctor_m19263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19264_gshared (List_1_t635 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19264(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1__ctor_m19264_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3788_gshared (List_1_t635 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3788(__this, ___capacity, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1__ctor_m3788_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m19265_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19265(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19265_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19266_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19266(__this, method) (( Object_t* (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19266_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19267_gshared (List_1_t635 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19267(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19267_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19268_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19268(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19268_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19269_gshared (List_1_t635 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19269(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19269_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19270_gshared (List_1_t635 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19270(__this, ___item, method) (( bool (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19270_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19271_gshared (List_1_t635 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19271(__this, ___item, method) (( int32_t (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19271_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19272_gshared (List_1_t635 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19272(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19272_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19273_gshared (List_1_t635 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19273(__this, ___item, method) (( void (*) (List_1_t635 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19273_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19274_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19274(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19275_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19275(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19275_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19276_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19276(__this, method) (( Object_t * (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19276_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19277_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19277(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19278_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19278(__this, method) (( bool (*) (List_1_t635 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19278_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19279_gshared (List_1_t635 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19279(__this, ___index, method) (( Object_t * (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19279_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19280_gshared (List_1_t635 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19280(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19280_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m19281_gshared (List_1_t635 * __this, UILineInfo_t496  ___item, const MethodInfo* method);
#define List_1_Add_m19281(__this, ___item, method) (( void (*) (List_1_t635 *, UILineInfo_t496 , const MethodInfo*))List_1_Add_m19281_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19282_gshared (List_1_t635 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19282(__this, ___newCount, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19282_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19283_gshared (List_1_t635 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19283(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19283_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19284_gshared (List_1_t635 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19284(__this, ___enumerable, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19284_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m19285_gshared (List_1_t635 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m19285(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_AddRange_m19285_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2439 * List_1_AsReadOnly_m19286_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19286(__this, method) (( ReadOnlyCollection_1_t2439 * (*) (List_1_t635 *, const MethodInfo*))List_1_AsReadOnly_m19286_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m19287_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_Clear_m19287(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Clear_m19287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m19288_gshared (List_1_t635 * __this, UILineInfo_t496  ___item, const MethodInfo* method);
#define List_1_Contains_m19288(__this, ___item, method) (( bool (*) (List_1_t635 *, UILineInfo_t496 , const MethodInfo*))List_1_Contains_m19288_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19289_gshared (List_1_t635 * __this, UILineInfoU5BU5D_t716* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19289(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t635 *, UILineInfoU5BU5D_t716*, int32_t, const MethodInfo*))List_1_CopyTo_m19289_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t496  List_1_Find_m19290_gshared (List_1_t635 * __this, Predicate_1_t2443 * ___match, const MethodInfo* method);
#define List_1_Find_m19290(__this, ___match, method) (( UILineInfo_t496  (*) (List_1_t635 *, Predicate_1_t2443 *, const MethodInfo*))List_1_Find_m19290_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19291_gshared (Object_t * __this /* static, unused */, Predicate_1_t2443 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19291(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2443 *, const MethodInfo*))List_1_CheckMatch_m19291_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19292_gshared (List_1_t635 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2443 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19292(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t635 *, int32_t, int32_t, Predicate_1_t2443 *, const MethodInfo*))List_1_GetIndex_m19292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2438  List_1_GetEnumerator_m19293_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19293(__this, method) (( Enumerator_t2438  (*) (List_1_t635 *, const MethodInfo*))List_1_GetEnumerator_m19293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19294_gshared (List_1_t635 * __this, UILineInfo_t496  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19294(__this, ___item, method) (( int32_t (*) (List_1_t635 *, UILineInfo_t496 , const MethodInfo*))List_1_IndexOf_m19294_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19295_gshared (List_1_t635 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19295(__this, ___start, ___delta, method) (( void (*) (List_1_t635 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19295_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19296_gshared (List_1_t635 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19296(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19296_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19297_gshared (List_1_t635 * __this, int32_t ___index, UILineInfo_t496  ___item, const MethodInfo* method);
#define List_1_Insert_m19297(__this, ___index, ___item, method) (( void (*) (List_1_t635 *, int32_t, UILineInfo_t496 , const MethodInfo*))List_1_Insert_m19297_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19298_gshared (List_1_t635 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19298(__this, ___collection, method) (( void (*) (List_1_t635 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19298_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m19299_gshared (List_1_t635 * __this, UILineInfo_t496  ___item, const MethodInfo* method);
#define List_1_Remove_m19299(__this, ___item, method) (( bool (*) (List_1_t635 *, UILineInfo_t496 , const MethodInfo*))List_1_Remove_m19299_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19300_gshared (List_1_t635 * __this, Predicate_1_t2443 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19300(__this, ___match, method) (( int32_t (*) (List_1_t635 *, Predicate_1_t2443 *, const MethodInfo*))List_1_RemoveAll_m19300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19301_gshared (List_1_t635 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19301(__this, ___index, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19301_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m19302_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_Reverse_m19302(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Reverse_m19302_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m19303_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_Sort_m19303(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_Sort_m19303_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19304_gshared (List_1_t635 * __this, Comparison_1_t2446 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19304(__this, ___comparison, method) (( void (*) (List_1_t635 *, Comparison_1_t2446 *, const MethodInfo*))List_1_Sort_m19304_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t716* List_1_ToArray_m19305_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_ToArray_m19305(__this, method) (( UILineInfoU5BU5D_t716* (*) (List_1_t635 *, const MethodInfo*))List_1_ToArray_m19305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m19306_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19306(__this, method) (( void (*) (List_1_t635 *, const MethodInfo*))List_1_TrimExcess_m19306_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19307_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19307(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Capacity_m19307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19308_gshared (List_1_t635 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19308(__this, ___value, method) (( void (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19308_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m19309_gshared (List_1_t635 * __this, const MethodInfo* method);
#define List_1_get_Count_m19309(__this, method) (( int32_t (*) (List_1_t635 *, const MethodInfo*))List_1_get_Count_m19309_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t496  List_1_get_Item_m19310_gshared (List_1_t635 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19310(__this, ___index, method) (( UILineInfo_t496  (*) (List_1_t635 *, int32_t, const MethodInfo*))List_1_get_Item_m19310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19311_gshared (List_1_t635 * __this, int32_t ___index, UILineInfo_t496  ___value, const MethodInfo* method);
#define List_1_set_Item_m19311(__this, ___index, ___value, method) (( void (*) (List_1_t635 *, int32_t, UILineInfo_t496 , const MethodInfo*))List_1_set_Item_m19311_gshared)(__this, ___index, ___value, method)
