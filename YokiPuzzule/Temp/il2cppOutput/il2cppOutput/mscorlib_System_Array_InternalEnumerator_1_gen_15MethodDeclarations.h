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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12683_gshared (InternalEnumerator_1_t1958 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12683(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1958 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12683_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12684_gshared (InternalEnumerator_1_t1958 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12684(__this, method) (( void (*) (InternalEnumerator_1_t1958 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12684_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12685_gshared (InternalEnumerator_1_t1958 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12685(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1958 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12685_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12686_gshared (InternalEnumerator_1_t1958 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12686(__this, method) (( void (*) (InternalEnumerator_1_t1958 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12686_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12687_gshared (InternalEnumerator_1_t1958 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12687(__this, method) (( bool (*) (InternalEnumerator_1_t1958 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12687_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.ArrayMetadata>>::get_Current()
extern "C" KeyValuePair_2_t1957  InternalEnumerator_1_get_Current_m12688_gshared (InternalEnumerator_1_t1958 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12688(__this, method) (( KeyValuePair_2_t1957  (*) (InternalEnumerator_1_t1958 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12688_gshared)(__this, method)
