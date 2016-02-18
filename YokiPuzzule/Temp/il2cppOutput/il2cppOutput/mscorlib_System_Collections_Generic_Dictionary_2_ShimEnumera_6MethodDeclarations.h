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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2632;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2619;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21585_gshared (ShimEnumerator_t2632 * __this, Dictionary_2_t2619 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21585(__this, ___host, method) (( void (*) (ShimEnumerator_t2632 *, Dictionary_2_t2619 *, const MethodInfo*))ShimEnumerator__ctor_m21585_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21586_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21586(__this, method) (( bool (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_MoveNext_m21586_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t158  ShimEnumerator_get_Entry_m21587_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21587(__this, method) (( DictionaryEntry_t158  (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_get_Entry_m21587_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21588_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21588(__this, method) (( Object_t * (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_get_Key_m21588_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21589_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21589(__this, method) (( Object_t * (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_get_Value_m21589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21590_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21590(__this, method) (( Object_t * (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_get_Current_m21590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m21591_gshared (ShimEnumerator_t2632 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m21591(__this, method) (( void (*) (ShimEnumerator_t2632 *, const MethodInfo*))ShimEnumerator_Reset_m21591_gshared)(__this, method)
