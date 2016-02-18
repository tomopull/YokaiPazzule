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
#include "mscorlib_System_Nullable_1_gen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
extern "C" void Nullable_1__ctor_m15643_gshared (Nullable_1_t255 * __this, Vector3_t27  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m15643(__this, ___value, method) (( void (*) (Nullable_1_t255 *, Vector3_t27 , const MethodInfo*))Nullable_1__ctor_m15643_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m1293_gshared (Nullable_1_t255 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m1293(__this, method) (( bool (*) (Nullable_1_t255 *, const MethodInfo*))Nullable_1_get_HasValue_m1293_gshared)(__this, method)
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
extern "C" Vector3_t27  Nullable_1_get_Value_m1294_gshared (Nullable_1_t255 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m1294(__this, method) (( Vector3_t27  (*) (Nullable_1_t255 *, const MethodInfo*))Nullable_1_get_Value_m1294_gshared)(__this, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m15644_gshared (Nullable_1_t255 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15644(__this, ___other, method) (( bool (*) (Nullable_1_t255 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m15644_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m15645_gshared (Nullable_1_t255 * __this, Nullable_1_t255  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m15645(__this, ___other, method) (( bool (*) (Nullable_1_t255 *, Nullable_1_t255 , const MethodInfo*))Nullable_1_Equals_m15645_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<UnityEngine.Vector3>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m15646_gshared (Nullable_1_t255 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m15646(__this, method) (( int32_t (*) (Nullable_1_t255 *, const MethodInfo*))Nullable_1_GetHashCode_m15646_gshared)(__this, method)
// System.String System.Nullable`1<UnityEngine.Vector3>::ToString()
extern "C" String_t* Nullable_1_ToString_m15647_gshared (Nullable_1_t255 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m15647(__this, method) (( String_t* (*) (Nullable_1_t255 *, const MethodInfo*))Nullable_1_ToString_m15647_gshared)(__this, method)
