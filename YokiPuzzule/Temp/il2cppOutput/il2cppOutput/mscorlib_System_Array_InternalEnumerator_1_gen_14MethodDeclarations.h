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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13603_gshared (InternalEnumerator_1_t2045 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13603(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2045 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13603_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13604_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13604(__this, method) (( void (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m13604_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13605_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13605(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13605_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13606_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13606(__this, method) (( void (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13606_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13607_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13607(__this, method) (( bool (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13607_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::get_Current()
extern "C" KeyValuePair_2_t2044  InternalEnumerator_1_get_Current_m13608_gshared (InternalEnumerator_1_t2045 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13608(__this, method) (( KeyValuePair_2_t2044  (*) (InternalEnumerator_1_t2045 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13608_gshared)(__this, method)
