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
extern "C" void InternalEnumerator_1__ctor_m12671_gshared (InternalEnumerator_1_t1956 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12671(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1956 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12671_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12672_gshared (InternalEnumerator_1_t1956 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12672(__this, method) (( void (*) (InternalEnumerator_1_t1956 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m12672_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12673_gshared (InternalEnumerator_1_t1956 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12673(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1956 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12673_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12674_gshared (InternalEnumerator_1_t1956 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12674(__this, method) (( void (*) (InternalEnumerator_1_t1956 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12674_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12675_gshared (InternalEnumerator_1_t1956 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12675(__this, method) (( bool (*) (InternalEnumerator_1_t1956 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12675_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::get_Current()
extern "C" KeyValuePair_2_t1955  InternalEnumerator_1_get_Current_m12676_gshared (InternalEnumerator_1_t1956 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12676(__this, method) (( KeyValuePair_2_t1955  (*) (InternalEnumerator_1_t1956 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12676_gshared)(__this, method)
