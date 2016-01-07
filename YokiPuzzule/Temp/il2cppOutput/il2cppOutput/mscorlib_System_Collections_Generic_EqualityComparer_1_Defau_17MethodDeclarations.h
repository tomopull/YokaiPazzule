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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2592;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m20813_gshared (DefaultComparer_t2592 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20813(__this, method) (( void (*) (DefaultComparer_t2592 *, const MethodInfo*))DefaultComparer__ctor_m20813_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20814_gshared (DefaultComparer_t2592 * __this, DateTime_t5  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20814(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2592 *, DateTime_t5 , const MethodInfo*))DefaultComparer_GetHashCode_m20814_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20815_gshared (DefaultComparer_t2592 * __this, DateTime_t5  ___x, DateTime_t5  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20815(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2592 *, DateTime_t5 , DateTime_t5 , const MethodInfo*))DefaultComparer_Equals_m20815_gshared)(__this, ___x, ___y, method)
