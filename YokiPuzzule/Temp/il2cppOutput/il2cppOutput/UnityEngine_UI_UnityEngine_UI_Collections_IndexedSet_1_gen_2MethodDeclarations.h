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
struct IndexedSet_1_t2279;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t140;
// System.Object[]
struct ObjectU5BU5D_t164;
// System.Predicate`1<System.Object>
struct Predicate_1_t1952;
// System.Comparison`1<System.Object>
struct Comparison_1_t1957;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m16752_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m16752(__this, method) (( void (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1__ctor_m16752_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16754_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16754(__this, method) (( Object_t * (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16754_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m16756_gshared (IndexedSet_1_t2279 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m16756(__this, ___item, method) (( void (*) (IndexedSet_1_t2279 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m16756_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16758_gshared (IndexedSet_1_t2279 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m16758(__this, ___item, method) (( bool (*) (IndexedSet_1_t2279 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m16758_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16760_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m16760(__this, method) (( Object_t* (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m16760_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m16762_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m16762(__this, method) (( void (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1_Clear_m16762_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m16764_gshared (IndexedSet_1_t2279 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m16764(__this, ___item, method) (( bool (*) (IndexedSet_1_t2279 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m16764_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m16766_gshared (IndexedSet_1_t2279 * __this, ObjectU5BU5D_t164* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m16766(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2279 *, ObjectU5BU5D_t164*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m16766_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m16768_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m16768(__this, method) (( int32_t (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1_get_Count_m16768_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m16770_gshared (IndexedSet_1_t2279 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m16770(__this, method) (( bool (*) (IndexedSet_1_t2279 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m16770_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m16772_gshared (IndexedSet_1_t2279 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m16772(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2279 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m16772_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m16774_gshared (IndexedSet_1_t2279 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m16774(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2279 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m16774_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16776_gshared (IndexedSet_1_t2279 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m16776(__this, ___index, method) (( void (*) (IndexedSet_1_t2279 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m16776_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m16778_gshared (IndexedSet_1_t2279 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m16778(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2279 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m16778_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m16780_gshared (IndexedSet_1_t2279 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m16780(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2279 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m16780_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m16781_gshared (IndexedSet_1_t2279 * __this, Predicate_1_t1952 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m16781(__this, ___match, method) (( void (*) (IndexedSet_1_t2279 *, Predicate_1_t1952 *, const MethodInfo*))IndexedSet_1_RemoveAll_m16781_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m16782_gshared (IndexedSet_1_t2279 * __this, Comparison_1_t1957 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m16782(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2279 *, Comparison_1_t1957 *, const MethodInfo*))IndexedSet_1_Sort_m16782_gshared)(__this, ___sortLayoutFunction, method)
