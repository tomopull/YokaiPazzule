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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20675_gshared (InternalEnumerator_1_t2579 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20675(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2579 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20675_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20676_gshared (InternalEnumerator_1_t2579 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20676(__this, method) (( void (*) (InternalEnumerator_1_t2579 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20676_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20677_gshared (InternalEnumerator_1_t2579 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20677(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2579 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20677_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20678_gshared (InternalEnumerator_1_t2579 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20678(__this, method) (( void (*) (InternalEnumerator_1_t2579 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20678_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20679_gshared (InternalEnumerator_1_t2579 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20679(__this, method) (( bool (*) (InternalEnumerator_1_t2579 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20679_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t5  InternalEnumerator_1_get_Current_m20680_gshared (InternalEnumerator_1_t2579 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20680(__this, method) (( DateTime_t5  (*) (InternalEnumerator_1_t2579 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20680_gshared)(__this, method)
