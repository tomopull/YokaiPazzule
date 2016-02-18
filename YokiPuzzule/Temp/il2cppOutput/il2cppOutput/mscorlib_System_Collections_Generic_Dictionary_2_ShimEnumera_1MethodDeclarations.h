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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>
struct ShimEnumerator_t2065;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2054;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13820_gshared (ShimEnumerator_t2065 * __this, Dictionary_2_t2054 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13820(__this, ___host, method) (( void (*) (ShimEnumerator_t2065 *, Dictionary_2_t2054 *, const MethodInfo*))ShimEnumerator__ctor_m13820_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13821_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13821(__this, method) (( bool (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_MoveNext_m13821_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Entry()
extern "C" DictionaryEntry_t158  ShimEnumerator_get_Entry_m13822_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13822(__this, method) (( DictionaryEntry_t158  (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Entry_m13822_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13823_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13823(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Key_m13823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13824_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13824(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Value_m13824_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13825_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13825(__this, method) (( Object_t * (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_get_Current_m13825_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m13826_gshared (ShimEnumerator_t2065 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13826(__this, method) (( void (*) (ShimEnumerator_t2065 *, const MethodInfo*))ShimEnumerator_Reset_m13826_gshared)(__this, method)
