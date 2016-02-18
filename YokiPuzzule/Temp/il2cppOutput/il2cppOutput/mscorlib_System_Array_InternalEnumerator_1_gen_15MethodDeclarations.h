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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13615_gshared (InternalEnumerator_1_t2047 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13615(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2047 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13615_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13616_gshared (InternalEnumerator_1_t2047 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13616(__this, method) (( void (*) (InternalEnumerator_1_t2047 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13616_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13617_gshared (InternalEnumerator_1_t2047 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13617(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2047 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13617_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13618_gshared (InternalEnumerator_1_t2047 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13618(__this, method) (( void (*) (InternalEnumerator_1_t2047 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13618_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13619_gshared (InternalEnumerator_1_t2047 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13619(__this, method) (( bool (*) (InternalEnumerator_1_t2047 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13619_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2046  InternalEnumerator_1_get_Current_m13620_gshared (InternalEnumerator_1_t2047 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13620(__this, method) (( KeyValuePair_2_t2046  (*) (InternalEnumerator_1_t2047 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13620_gshared)(__this, method)
