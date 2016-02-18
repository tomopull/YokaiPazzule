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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13627_gshared (InternalEnumerator_1_t2049 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13627(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2049 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13627_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13628_gshared (InternalEnumerator_1_t2049 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13628(__this, method) (( void (*) (InternalEnumerator_1_t2049 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13628_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13629_gshared (InternalEnumerator_1_t2049 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13629(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2049 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13629_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13630_gshared (InternalEnumerator_1_t2049 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13630(__this, method) (( void (*) (InternalEnumerator_1_t2049 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13630_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13631_gshared (InternalEnumerator_1_t2049 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13631(__this, method) (( bool (*) (InternalEnumerator_1_t2049 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13631_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ObjectMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2048  InternalEnumerator_1_get_Current_m13632_gshared (InternalEnumerator_1_t2049 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13632(__this, method) (( KeyValuePair_2_t2048  (*) (InternalEnumerator_1_t2049 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13632_gshared)(__this, method)
