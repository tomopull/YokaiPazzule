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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>
struct ShimEnumerator_t2041;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2031;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13776_gshared (ShimEnumerator_t2041 * __this, Dictionary_2_t2031 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13776(__this, ___host, method) (( void (*) (ShimEnumerator_t2041 *, Dictionary_2_t2031 *, const MethodInfo*))ShimEnumerator__ctor_m13776_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13777_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13777(__this, method) (( bool (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_MoveNext_m13777_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Entry()
extern "C" DictionaryEntry_t120  ShimEnumerator_get_Entry_m13778_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13778(__this, method) (( DictionaryEntry_t120  (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Entry_m13778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13779_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13779(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Key_m13779_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13780_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13780(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Value_m13780_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13781_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13781(__this, method) (( Object_t * (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_get_Current_m13781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m13782_gshared (ShimEnumerator_t2041 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13782(__this, method) (( void (*) (ShimEnumerator_t2041 *, const MethodInfo*))ShimEnumerator_Reset_m13782_gshared)(__this, method)
