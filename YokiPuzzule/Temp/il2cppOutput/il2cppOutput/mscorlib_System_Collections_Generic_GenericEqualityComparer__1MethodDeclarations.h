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

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1916;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11853_gshared (GenericEqualityComparer_1_t1916 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11853(__this, method) (( void (*) (GenericEqualityComparer_1_t1916 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m11853_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m22465_gshared (GenericEqualityComparer_1_t1916 * __this, Guid_t262  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m22465(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1916 *, Guid_t262 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m22465_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m22466_gshared (GenericEqualityComparer_1_t1916 * __this, Guid_t262  ___x, Guid_t262  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m22466(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1916 *, Guid_t262 , Guid_t262 , const MethodInfo*))GenericEqualityComparer_1_Equals_m22466_gshared)(__this, ___x, ___y, method)
