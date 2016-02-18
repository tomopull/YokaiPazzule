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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11849_gshared (Nullable_1_t1870 * __this, TimeSpan_t180  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11849(__this, ___value, method) (( void (*) (Nullable_1_t1870 *, TimeSpan_t180 , const MethodInfo*))Nullable_1__ctor_m11849_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11850_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11850(__this, method) (( bool (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_get_HasValue_m11850_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t180  Nullable_1_get_Value_m11851_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11851(__this, method) (( TimeSpan_t180  (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_get_Value_m11851_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m22454_gshared (Nullable_1_t1870 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22454(__this, ___other, method) (( bool (*) (Nullable_1_t1870 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m22454_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m22455_gshared (Nullable_1_t1870 * __this, Nullable_1_t1870  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22455(__this, ___other, method) (( bool (*) (Nullable_1_t1870 *, Nullable_1_t1870 , const MethodInfo*))Nullable_1_Equals_m22455_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m22456_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m22456(__this, method) (( int32_t (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_GetHashCode_m22456_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m22457_gshared (Nullable_1_t1870 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m22457(__this, method) (( String_t* (*) (Nullable_1_t1870 *, const MethodInfo*))Nullable_1_ToString_m22457_gshared)(__this, method)
