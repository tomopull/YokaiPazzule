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
struct ListValues_t1243;
// System.Collections.SortedList
struct SortedList_t934;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.SortedList/ListValues::.ctor(System.Collections.SortedList)
extern "C" void ListValues__ctor_m7562 (ListValues_t1243 * __this, SortedList_t934 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::get_Count()
extern "C" int32_t ListValues_get_Count_m7563 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m7564 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m7565 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m7566 (ListValues_t1243 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsFixedSize()
extern "C" bool ListValues_get_IsFixedSize_m7567 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m7568 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/ListValues::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m7569 (ListValues_t1243 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::set_Item(System.Int32,System.Object)
extern "C" void ListValues_set_Item_m7570 (ListValues_t1243 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::Add(System.Object)
extern "C" int32_t ListValues_Add_m7571 (ListValues_t1243 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Clear()
extern "C" void ListValues_Clear_m7572 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/ListValues::Contains(System.Object)
extern "C" bool ListValues_Contains_m7573 (ListValues_t1243 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList/ListValues::IndexOf(System.Object)
extern "C" int32_t ListValues_IndexOf_m7574 (ListValues_t1243 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Insert(System.Int32,System.Object)
extern "C" void ListValues_Insert_m7575 (ListValues_t1243 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::Remove(System.Object)
extern "C" void ListValues_Remove_m7576 (ListValues_t1243 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/ListValues::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m7577 (ListValues_t1243 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList/ListValues::GetEnumerator()
extern "C" Object_t * ListValues_GetEnumerator_m7578 (ListValues_t1243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
