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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_99.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20639_gshared (InternalEnumerator_1_t2573 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20639(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2573 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20639_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20640_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20640(__this, method) (( void (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20640_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20641_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20641(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20641_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20642_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20642(__this, method) (( void (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20642_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20643_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20643(__this, method) (( bool (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20643_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1397  InternalEnumerator_1_get_Current_m20644_gshared (InternalEnumerator_1_t2573 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20644(__this, method) (( ResourceInfo_t1397  (*) (InternalEnumerator_1_t2573 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20644_gshared)(__this, method)
