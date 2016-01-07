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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2184;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Predicate`1<System.Object>
struct Predicate_1_t1875;
// System.Comparison`1<System.Object>
struct Comparison_1_t1880;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m15764_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m15764(__this, method) (( void (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1__ctor_m15764_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15766_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15766(__this, method) (( Object_t * (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m15766_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m15768_gshared (IndexedSet_1_t2184 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m15768(__this, ___item, method) (( void (*) (IndexedSet_1_t2184 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m15768_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m15770_gshared (IndexedSet_1_t2184 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m15770(__this, ___item, method) (( bool (*) (IndexedSet_1_t2184 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m15770_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m15772_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m15772(__this, method) (( Object_t* (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m15772_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m15774_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m15774(__this, method) (( void (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1_Clear_m15774_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m15776_gshared (IndexedSet_1_t2184 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m15776(__this, ___item, method) (( bool (*) (IndexedSet_1_t2184 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m15776_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m15778_gshared (IndexedSet_1_t2184 * __this, ObjectU5BU5D_t129* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m15778(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2184 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m15778_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m15780_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m15780(__this, method) (( int32_t (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1_get_Count_m15780_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m15782_gshared (IndexedSet_1_t2184 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m15782(__this, method) (( bool (*) (IndexedSet_1_t2184 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m15782_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m15784_gshared (IndexedSet_1_t2184 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m15784(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2184 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m15784_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m15786_gshared (IndexedSet_1_t2184 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m15786(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2184 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m15786_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m15788_gshared (IndexedSet_1_t2184 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m15788(__this, ___index, method) (( void (*) (IndexedSet_1_t2184 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m15788_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m15790_gshared (IndexedSet_1_t2184 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m15790(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2184 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m15790_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m15792_gshared (IndexedSet_1_t2184 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m15792(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2184 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m15792_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m15793_gshared (IndexedSet_1_t2184 * __this, Predicate_1_t1875 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m15793(__this, ___match, method) (( void (*) (IndexedSet_1_t2184 *, Predicate_1_t1875 *, const MethodInfo*))IndexedSet_1_RemoveAll_m15793_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m15794_gshared (IndexedSet_1_t2184 * __this, Comparison_1_t1880 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m15794(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2184 *, Comparison_1_t1880 *, const MethodInfo*))IndexedSet_1_Sort_m15794_gshared)(__this, ___sortLayoutFunction, method)
