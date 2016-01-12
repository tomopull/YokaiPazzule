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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t1946;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m12609_gshared (DefaultComparer_t1946 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12609(__this, method) (( void (*) (DefaultComparer_t1946 *, const MethodInfo*))DefaultComparer__ctor_m12609_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12610_gshared (DefaultComparer_t1946 * __this, KeyValuePair_2_t1851  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12610(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1946 *, KeyValuePair_2_t1851 , const MethodInfo*))DefaultComparer_GetHashCode_m12610_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12611_gshared (DefaultComparer_t1946 * __this, KeyValuePair_2_t1851  ___x, KeyValuePair_2_t1851  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12611(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1946 *, KeyValuePair_2_t1851 , KeyValuePair_2_t1851 , const MethodInfo*))DefaultComparer_Equals_m12611_gshared)(__this, ___x, ___y, method)
