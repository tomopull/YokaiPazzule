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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2086;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2076;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14387_gshared (ShimEnumerator_t2086 * __this, Dictionary_2_t2076 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14387(__this, ___host, method) (( void (*) (ShimEnumerator_t2086 *, Dictionary_2_t2076 *, const MethodInfo*))ShimEnumerator__ctor_m14387_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14388_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14388(__this, method) (( bool (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_MoveNext_m14388_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t120  ShimEnumerator_get_Entry_m14389_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14389(__this, method) (( DictionaryEntry_t120  (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_get_Entry_m14389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14390_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14390(__this, method) (( Object_t * (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_get_Key_m14390_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14391_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14391(__this, method) (( Object_t * (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_get_Value_m14391_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14392_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14392(__this, method) (( Object_t * (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_get_Current_m14392_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14393_gshared (ShimEnumerator_t2086 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14393(__this, method) (( void (*) (ShimEnumerator_t2086 *, const MethodInfo*))ShimEnumerator_Reset_m14393_gshared)(__this, method)
