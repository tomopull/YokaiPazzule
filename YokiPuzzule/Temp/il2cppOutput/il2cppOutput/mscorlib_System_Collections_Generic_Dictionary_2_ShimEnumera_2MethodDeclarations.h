﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>
struct ShimEnumerator_t2002;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1991;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13231_gshared (ShimEnumerator_t2002 * __this, Dictionary_2_t1991 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13231(__this, ___host, method) (( void (*) (ShimEnumerator_t2002 *, Dictionary_2_t1991 *, const MethodInfo*))ShimEnumerator__ctor_m13231_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13232_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13232(__this, method) (( bool (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_MoveNext_m13232_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Entry()
extern "C" DictionaryEntry_t120  ShimEnumerator_get_Entry_m13233_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13233(__this, method) (( DictionaryEntry_t120  (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_get_Entry_m13233_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13234_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13234(__this, method) (( Object_t * (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_get_Key_m13234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13235_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13235(__this, method) (( Object_t * (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_get_Value_m13235_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13236_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13236(__this, method) (( Object_t * (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_get_Current_m13236_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void ShimEnumerator_Reset_m13237_gshared (ShimEnumerator_t2002 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13237(__this, method) (( void (*) (ShimEnumerator_t2002 *, const MethodInfo*))ShimEnumerator_Reset_m13237_gshared)(__this, method)
