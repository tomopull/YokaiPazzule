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
struct ShimEnumerator_t2130;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2120;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14708_gshared (ShimEnumerator_t2130 * __this, Dictionary_2_t2120 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14708(__this, ___host, method) (( void (*) (ShimEnumerator_t2130 *, Dictionary_2_t2120 *, const MethodInfo*))ShimEnumerator__ctor_m14708_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14709_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14709(__this, method) (( bool (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_MoveNext_m14709_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Entry()
extern "C" DictionaryEntry_t158  ShimEnumerator_get_Entry_m14710_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14710(__this, method) (( DictionaryEntry_t158  (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_get_Entry_m14710_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14711_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14711(__this, method) (( Object_t * (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_get_Key_m14711_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14712_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14712(__this, method) (( Object_t * (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_get_Value_m14712_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14713_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14713(__this, method) (( Object_t * (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_get_Current_m14713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.PropertyMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m14714_gshared (ShimEnumerator_t2130 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14714(__this, method) (( void (*) (ShimEnumerator_t2130 *, const MethodInfo*))ShimEnumerator_Reset_m14714_gshared)(__this, method)
