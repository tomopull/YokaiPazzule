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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1865;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1848;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11319_gshared (ShimEnumerator_t1865 * __this, Dictionary_2_t1848 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11319(__this, ___host, method) (( void (*) (ShimEnumerator_t1865 *, Dictionary_2_t1848 *, const MethodInfo*))ShimEnumerator__ctor_m11319_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11320_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11320(__this, method) (( bool (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_MoveNext_m11320_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t120  ShimEnumerator_get_Entry_m11321_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11321(__this, method) (( DictionaryEntry_t120  (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_get_Entry_m11321_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11322_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11322(__this, method) (( Object_t * (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_get_Key_m11322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11323_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11323(__this, method) (( Object_t * (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_get_Value_m11323_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11324_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11324(__this, method) (( Object_t * (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_get_Current_m11324_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m11325_gshared (ShimEnumerator_t1865 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11325(__this, method) (( void (*) (ShimEnumerator_t1865 *, const MethodInfo*))ShimEnumerator_Reset_m11325_gshared)(__this, method)
