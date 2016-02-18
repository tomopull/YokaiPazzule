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

// System.Collections.SortedList/ListValues
struct ListValues_t1322;
// System.Collections.SortedList
struct SortedList_t1015;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.SortedList/ListValues::.ctor(System.Collections.SortedList)
extern "C" void ListValues__ctor_m8308 (ListValues_t1322 * __this, SortedList_t1015 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::get_Count()
extern "C" int32_t ListValues_get_Count_m8309 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m8310 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m8311 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m8312 (ListValues_t1322 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsFixedSize()
extern "C" bool ListValues_get_IsFixedSize_m8313 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m8314 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m8315 (ListValues_t1322 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::set_Item(System.Int32,System.Object)
extern "C" void ListValues_set_Item_m8316 (ListValues_t1322 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::Add(System.Object)
extern "C" int32_t ListValues_Add_m8317 (ListValues_t1322 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Clear()
extern "C" void ListValues_Clear_m8318 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::Contains(System.Object)
extern "C" bool ListValues_Contains_m8319 (ListValues_t1322 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::IndexOf(System.Object)
extern "C" int32_t ListValues_IndexOf_m8320 (ListValues_t1322 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Insert(System.Int32,System.Object)
extern "C" void ListValues_Insert_m8321 (ListValues_t1322 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Remove(System.Object)
extern "C" void ListValues_Remove_m8322 (ListValues_t1322 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m8323 (ListValues_t1322 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListValues::GetEnumerator()
extern "C" Object_t * ListValues_GetEnumerator_m8324 (ListValues_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
