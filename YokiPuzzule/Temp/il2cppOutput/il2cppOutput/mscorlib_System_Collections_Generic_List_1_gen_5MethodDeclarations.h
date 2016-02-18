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

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t225;
// System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>
struct IEnumerable_1_t239;
// System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>
struct IEnumerator_1_t240;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>
struct ICollection_1_t226;
// System.Collections.ObjectModel.ReadOnlyCollection`1<LitJson.PropertyMetadata>
struct ReadOnlyCollection_1_t2138;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t2118;
// System.Predicate`1<LitJson.PropertyMetadata>
struct Predicate_1_t2140;
// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t2143;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
extern "C" void List_1__ctor_m1192_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1__ctor_m1192(__this, method) (( void (*) (List_1_t225 *, const MethodInfo*))List_1__ctor_m1192_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14775_gshared (List_1_t225 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14775(__this, ___collection, method) (( void (*) (List_1_t225 *, Object_t*, const MethodInfo*))List_1__ctor_m14775_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14776_gshared (List_1_t225 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14776(__this, ___capacity, method) (( void (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1__ctor_m14776_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.cctor()
extern "C" void List_1__cctor_m14777_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14777(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14777_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14778_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14778(__this, method) (( Object_t* (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14778_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14779_gshared (List_1_t225 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14779(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t225 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14779_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14780_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14780(__this, method) (( Object_t * (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14780_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14781_gshared (List_1_t225 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14781(__this, ___item, method) (( int32_t (*) (List_1_t225 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14781_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14782_gshared (List_1_t225 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14782(__this, ___item, method) (( bool (*) (List_1_t225 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14782_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14783_gshared (List_1_t225 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14783(__this, ___item, method) (( int32_t (*) (List_1_t225 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14783_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14784_gshared (List_1_t225 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14784(__this, ___index, ___item, method) (( void (*) (List_1_t225 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14784_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14785_gshared (List_1_t225 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14785(__this, ___item, method) (( void (*) (List_1_t225 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14785_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14786_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14786(__this, method) (( bool (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14786_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14787_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14787(__this, method) (( bool (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14787_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14788_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14788(__this, method) (( Object_t * (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14788_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14789_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14789(__this, method) (( bool (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14789_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14790_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14790(__this, method) (( bool (*) (List_1_t225 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14790_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14791_gshared (List_1_t225 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14791(__this, ___index, method) (( Object_t * (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14791_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14792_gshared (List_1_t225 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14792(__this, ___index, ___value, method) (( void (*) (List_1_t225 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14792_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Add(T)
extern "C" void List_1_Add_m14793_gshared (List_1_t225 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define List_1_Add_m14793(__this, ___item, method) (( void (*) (List_1_t225 *, PropertyMetadata_t59 , const MethodInfo*))List_1_Add_m14793_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14794_gshared (List_1_t225 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14794(__this, ___newCount, method) (( void (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14794_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14795_gshared (List_1_t225 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14795(__this, ___collection, method) (( void (*) (List_1_t225 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14795_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14796_gshared (List_1_t225 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14796(__this, ___enumerable, method) (( void (*) (List_1_t225 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14796_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14797_gshared (List_1_t225 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14797(__this, ___collection, method) (( void (*) (List_1_t225 *, Object_t*, const MethodInfo*))List_1_AddRange_m14797_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2138 * List_1_AsReadOnly_m14798_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14798(__this, method) (( ReadOnlyCollection_1_t2138 * (*) (List_1_t225 *, const MethodInfo*))List_1_AsReadOnly_m14798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Clear()
extern "C" void List_1_Clear_m14799_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_Clear_m14799(__this, method) (( void (*) (List_1_t225 *, const MethodInfo*))List_1_Clear_m14799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Contains(T)
extern "C" bool List_1_Contains_m14800_gshared (List_1_t225 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define List_1_Contains_m14800(__this, ___item, method) (( bool (*) (List_1_t225 *, PropertyMetadata_t59 , const MethodInfo*))List_1_Contains_m14800_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14801_gshared (List_1_t225 * __this, PropertyMetadataU5BU5D_t2118* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14801(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t225 *, PropertyMetadataU5BU5D_t2118*, int32_t, const MethodInfo*))List_1_CopyTo_m14801_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Find(System.Predicate`1<T>)
extern "C" PropertyMetadata_t59  List_1_Find_m14802_gshared (List_1_t225 * __this, Predicate_1_t2140 * ___match, const MethodInfo* method);
#define List_1_Find_m14802(__this, ___match, method) (( PropertyMetadata_t59  (*) (List_1_t225 *, Predicate_1_t2140 *, const MethodInfo*))List_1_Find_m14802_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14803_gshared (Object_t * __this /* static, unused */, Predicate_1_t2140 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14803(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2140 *, const MethodInfo*))List_1_CheckMatch_m14803_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14804_gshared (List_1_t225 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2140 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14804(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t225 *, int32_t, int32_t, Predicate_1_t2140 *, const MethodInfo*))List_1_GetIndex_m14804_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2137  List_1_GetEnumerator_m14805_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14805(__this, method) (( Enumerator_t2137  (*) (List_1_t225 *, const MethodInfo*))List_1_GetEnumerator_m14805_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14806_gshared (List_1_t225 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14806(__this, ___item, method) (( int32_t (*) (List_1_t225 *, PropertyMetadata_t59 , const MethodInfo*))List_1_IndexOf_m14806_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14807_gshared (List_1_t225 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14807(__this, ___start, ___delta, method) (( void (*) (List_1_t225 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14807_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14808_gshared (List_1_t225 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14808(__this, ___index, method) (( void (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14809_gshared (List_1_t225 * __this, int32_t ___index, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define List_1_Insert_m14809(__this, ___index, ___item, method) (( void (*) (List_1_t225 *, int32_t, PropertyMetadata_t59 , const MethodInfo*))List_1_Insert_m14809_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14810_gshared (List_1_t225 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14810(__this, ___collection, method) (( void (*) (List_1_t225 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14810_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Remove(T)
extern "C" bool List_1_Remove_m14811_gshared (List_1_t225 * __this, PropertyMetadata_t59  ___item, const MethodInfo* method);
#define List_1_Remove_m14811(__this, ___item, method) (( bool (*) (List_1_t225 *, PropertyMetadata_t59 , const MethodInfo*))List_1_Remove_m14811_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14812_gshared (List_1_t225 * __this, Predicate_1_t2140 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14812(__this, ___match, method) (( int32_t (*) (List_1_t225 *, Predicate_1_t2140 *, const MethodInfo*))List_1_RemoveAll_m14812_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14813_gshared (List_1_t225 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14813(__this, ___index, method) (( void (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14813_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Reverse()
extern "C" void List_1_Reverse_m14814_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_Reverse_m14814(__this, method) (( void (*) (List_1_t225 *, const MethodInfo*))List_1_Reverse_m14814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort()
extern "C" void List_1_Sort_m14815_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_Sort_m14815(__this, method) (( void (*) (List_1_t225 *, const MethodInfo*))List_1_Sort_m14815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14816_gshared (List_1_t225 * __this, Comparison_1_t2143 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14816(__this, ___comparison, method) (( void (*) (List_1_t225 *, Comparison_1_t2143 *, const MethodInfo*))List_1_Sort_m14816_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<LitJson.PropertyMetadata>::ToArray()
extern "C" PropertyMetadataU5BU5D_t2118* List_1_ToArray_m14817_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_ToArray_m14817(__this, method) (( PropertyMetadataU5BU5D_t2118* (*) (List_1_t225 *, const MethodInfo*))List_1_ToArray_m14817_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::TrimExcess()
extern "C" void List_1_TrimExcess_m14818_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14818(__this, method) (( void (*) (List_1_t225 *, const MethodInfo*))List_1_TrimExcess_m14818_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14819_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14819(__this, method) (( int32_t (*) (List_1_t225 *, const MethodInfo*))List_1_get_Capacity_m14819_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14820_gshared (List_1_t225 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14820(__this, ___value, method) (( void (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14820_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t List_1_get_Count_m14821_gshared (List_1_t225 * __this, const MethodInfo* method);
#define List_1_get_Count_m14821(__this, method) (( int32_t (*) (List_1_t225 *, const MethodInfo*))List_1_get_Count_m14821_gshared)(__this, method)
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Item(System.Int32)
extern "C" PropertyMetadata_t59  List_1_get_Item_m14822_gshared (List_1_t225 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14822(__this, ___index, method) (( PropertyMetadata_t59  (*) (List_1_t225 *, int32_t, const MethodInfo*))List_1_get_Item_m14822_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14823_gshared (List_1_t225 * __this, int32_t ___index, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define List_1_set_Item_m14823(__this, ___index, ___value, method) (( void (*) (List_1_t225 *, int32_t, PropertyMetadata_t59 , const MethodInfo*))List_1_set_Item_m14823_gshared)(__this, ___index, ___value, method)
