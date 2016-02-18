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
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11955_gshared (InternalEnumerator_1_t1930 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11955(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1930 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11955_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11956_gshared (InternalEnumerator_1_t1930 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11956(__this, method) (( void (*) (InternalEnumerator_1_t1930 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11956_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11957_gshared (InternalEnumerator_1_t1930 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11957(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1930 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11957_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11958_gshared (InternalEnumerator_1_t1930 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11958(__this, method) (( void (*) (InternalEnumerator_1_t1930 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11958_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11959_gshared (InternalEnumerator_1_t1930 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11959(__this, method) (( bool (*) (InternalEnumerator_1_t1930 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11959_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1929  InternalEnumerator_1_get_Current_m11960_gshared (InternalEnumerator_1_t1930 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11960(__this, method) (( KeyValuePair_2_t1929  (*) (InternalEnumerator_1_t1930 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11960_gshared)(__this, method)
