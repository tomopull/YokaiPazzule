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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_100.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceCacheItem.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20645_gshared (InternalEnumerator_1_t2574 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20645(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2574 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20645_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20646_gshared (InternalEnumerator_1_t2574 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20646(__this, method) (( void (*) (InternalEnumerator_1_t2574 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m20646_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20647_gshared (InternalEnumerator_1_t2574 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20647(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2574 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20647_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20648_gshared (InternalEnumerator_1_t2574 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20648(__this, method) (( void (*) (InternalEnumerator_1_t2574 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20648_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20649_gshared (InternalEnumerator_1_t2574 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20649(__this, method) (( bool (*) (InternalEnumerator_1_t2574 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20649_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceCacheItem>::get_Current()
extern "C" ResourceCacheItem_t1398  InternalEnumerator_1_get_Current_m20650_gshared (InternalEnumerator_1_t2574 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20650(__this, method) (( ResourceCacheItem_t1398  (*) (InternalEnumerator_1_t2574 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20650_gshared)(__this, method)
