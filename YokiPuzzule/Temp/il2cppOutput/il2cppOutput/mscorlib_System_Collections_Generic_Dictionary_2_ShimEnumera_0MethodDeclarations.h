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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2007;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1995;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13084_gshared (ShimEnumerator_t2007 * __this, Dictionary_2_t1995 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13084(__this, ___host, method) (( void (*) (ShimEnumerator_t2007 *, Dictionary_2_t1995 *, const MethodInfo*))ShimEnumerator__ctor_m13084_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13085_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13085(__this, method) (( bool (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_MoveNext_m13085_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t158  ShimEnumerator_get_Entry_m13086_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13086(__this, method) (( DictionaryEntry_t158  (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Entry_m13086_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13087_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13087(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Key_m13087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13088_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13088(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Value_m13088_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13089_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13089(__this, method) (( Object_t * (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_get_Current_m13089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m13090_gshared (ShimEnumerator_t2007 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13090(__this, method) (( void (*) (ShimEnumerator_t2007 *, const MethodInfo*))ShimEnumerator_Reset_m13090_gshared)(__this, method)
