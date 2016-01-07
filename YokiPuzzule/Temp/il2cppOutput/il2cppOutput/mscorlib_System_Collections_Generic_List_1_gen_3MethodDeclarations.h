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
struct List_1_t181;
// System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>
struct IEnumerable_1_t195;
// System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>
struct IEnumerator_1_t196;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>
struct ICollection_1_t182;
// System.Collections.ObjectModel.ReadOnlyCollection`1<LitJson.PropertyMetadata>
struct ReadOnlyCollection_1_t2049;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t2029;
// System.Predicate`1<LitJson.PropertyMetadata>
struct Predicate_1_t2051;
// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t2054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
extern "C" void List_1__ctor_m803_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1__ctor_m803(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1__ctor_m803_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m13843_gshared (List_1_t181 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m13843(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, const MethodInfo*))List_1__ctor_m13843_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13844_gshared (List_1_t181 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13844(__this, ___capacity, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1__ctor_m13844_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.cctor()
extern "C" void List_1__cctor_m13845_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13845(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13845_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13846_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13846(__this, method) (( Object_t* (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13846_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13847_gshared (List_1_t181 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13847(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13847_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13848_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13848(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13848_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13849_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13849(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13849_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13850_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13850(__this, ___item, method) (( bool (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13850_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13851_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13851(__this, ___item, method) (( int32_t (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13852_gshared (List_1_t181 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13852(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13852_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13853_gshared (List_1_t181 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13853(__this, ___item, method) (( void (*) (List_1_t181 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13853_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13854_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13854(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13854_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13855_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13855(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13855_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13856_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13856(__this, method) (( Object_t * (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13856_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13857_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13857(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13857_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13858_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13858(__this, method) (( bool (*) (List_1_t181 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13858_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13859_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13859(__this, ___index, method) (( Object_t * (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13859_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13860_gshared (List_1_t181 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13860(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13860_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Add(T)
extern "C" void List_1_Add_m13861_gshared (List_1_t181 * __this, PropertyMetadata_t47  ___item, const MethodInfo* method);
#define List_1_Add_m13861(__this, ___item, method) (( void (*) (List_1_t181 *, PropertyMetadata_t47 , const MethodInfo*))List_1_Add_m13861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13862_gshared (List_1_t181 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13862(__this, ___newCount, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13862_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13863_gshared (List_1_t181 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13863(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13863_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13864_gshared (List_1_t181 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13864(__this, ___enumerable, method) (( void (*) (List_1_t181 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13864_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13865_gshared (List_1_t181 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13865(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, const MethodInfo*))List_1_AddRange_m13865_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2049 * List_1_AsReadOnly_m13866_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13866(__this, method) (( ReadOnlyCollection_1_t2049 * (*) (List_1_t181 *, const MethodInfo*))List_1_AsReadOnly_m13866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Clear()
extern "C" void List_1_Clear_m13867_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_Clear_m13867(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_Clear_m13867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Contains(T)
extern "C" bool List_1_Contains_m13868_gshared (List_1_t181 * __this, PropertyMetadata_t47  ___item, const MethodInfo* method);
#define List_1_Contains_m13868(__this, ___item, method) (( bool (*) (List_1_t181 *, PropertyMetadata_t47 , const MethodInfo*))List_1_Contains_m13868_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m13869_gshared (List_1_t181 * __this, PropertyMetadataU5BU5D_t2029* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m13869(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t181 *, PropertyMetadataU5BU5D_t2029*, int32_t, const MethodInfo*))List_1_CopyTo_m13869_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Find(System.Predicate`1<T>)
extern "C" PropertyMetadata_t47  List_1_Find_m13870_gshared (List_1_t181 * __this, Predicate_1_t2051 * ___match, const MethodInfo* method);
#define List_1_Find_m13870(__this, ___match, method) (( PropertyMetadata_t47  (*) (List_1_t181 *, Predicate_1_t2051 *, const MethodInfo*))List_1_Find_m13870_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m13871_gshared (Object_t * __this /* static, unused */, Predicate_1_t2051 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m13871(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2051 *, const MethodInfo*))List_1_CheckMatch_m13871_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m13872_gshared (List_1_t181 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2051 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m13872(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t181 *, int32_t, int32_t, Predicate_1_t2051 *, const MethodInfo*))List_1_GetIndex_m13872_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LitJson.PropertyMetadata>::GetEnumerator()
extern "C" Enumerator_t2048  List_1_GetEnumerator_m13873_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m13873(__this, method) (( Enumerator_t2048  (*) (List_1_t181 *, const MethodInfo*))List_1_GetEnumerator_m13873_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m13874_gshared (List_1_t181 * __this, PropertyMetadata_t47  ___item, const MethodInfo* method);
#define List_1_IndexOf_m13874(__this, ___item, method) (( int32_t (*) (List_1_t181 *, PropertyMetadata_t47 , const MethodInfo*))List_1_IndexOf_m13874_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m13875_gshared (List_1_t181 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m13875(__this, ___start, ___delta, method) (( void (*) (List_1_t181 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m13875_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m13876_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m13876(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_CheckIndex_m13876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m13877_gshared (List_1_t181 * __this, int32_t ___index, PropertyMetadata_t47  ___item, const MethodInfo* method);
#define List_1_Insert_m13877(__this, ___index, ___item, method) (( void (*) (List_1_t181 *, int32_t, PropertyMetadata_t47 , const MethodInfo*))List_1_Insert_m13877_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m13878_gshared (List_1_t181 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m13878(__this, ___collection, method) (( void (*) (List_1_t181 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m13878_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Remove(T)
extern "C" bool List_1_Remove_m13879_gshared (List_1_t181 * __this, PropertyMetadata_t47  ___item, const MethodInfo* method);
#define List_1_Remove_m13879(__this, ___item, method) (( bool (*) (List_1_t181 *, PropertyMetadata_t47 , const MethodInfo*))List_1_Remove_m13879_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m13880_gshared (List_1_t181 * __this, Predicate_1_t2051 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m13880(__this, ___match, method) (( int32_t (*) (List_1_t181 *, Predicate_1_t2051 *, const MethodInfo*))List_1_RemoveAll_m13880_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m13881_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m13881(__this, ___index, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13881_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Reverse()
extern "C" void List_1_Reverse_m13882_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_Reverse_m13882(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_Reverse_m13882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort()
extern "C" void List_1_Sort_m13883_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_Sort_m13883(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_Sort_m13883_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m13884_gshared (List_1_t181 * __this, Comparison_1_t2054 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m13884(__this, ___comparison, method) (( void (*) (List_1_t181 *, Comparison_1_t2054 *, const MethodInfo*))List_1_Sort_m13884_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<LitJson.PropertyMetadata>::ToArray()
extern "C" PropertyMetadataU5BU5D_t2029* List_1_ToArray_m13885_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_ToArray_m13885(__this, method) (( PropertyMetadataU5BU5D_t2029* (*) (List_1_t181 *, const MethodInfo*))List_1_ToArray_m13885_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::TrimExcess()
extern "C" void List_1_TrimExcess_m13886_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m13886(__this, method) (( void (*) (List_1_t181 *, const MethodInfo*))List_1_TrimExcess_m13886_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m13887_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m13887(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Capacity_m13887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m13888_gshared (List_1_t181 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m13888(__this, ___value, method) (( void (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_set_Capacity_m13888_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Count()
extern "C" int32_t List_1_get_Count_m13889_gshared (List_1_t181 * __this, const MethodInfo* method);
#define List_1_get_Count_m13889(__this, method) (( int32_t (*) (List_1_t181 *, const MethodInfo*))List_1_get_Count_m13889_gshared)(__this, method)
// T System.Collections.Generic.List`1<LitJson.PropertyMetadata>::get_Item(System.Int32)
extern "C" PropertyMetadata_t47  List_1_get_Item_m13890_gshared (List_1_t181 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m13890(__this, ___index, method) (( PropertyMetadata_t47  (*) (List_1_t181 *, int32_t, const MethodInfo*))List_1_get_Item_m13890_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m13891_gshared (List_1_t181 * __this, int32_t ___index, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define List_1_set_Item_m13891(__this, ___index, ___value, method) (( void (*) (List_1_t181 *, int32_t, PropertyMetadata_t47 , const MethodInfo*))List_1_set_Item_m13891_gshared)(__this, ___index, ___value, method)
