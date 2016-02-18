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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
struct DefaultComparer_t2452;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m19400_gshared (DefaultComparer_t2452 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19400(__this, method) (( void (*) (DefaultComparer_t2452 *, const MethodInfo*))DefaultComparer__ctor_m19400_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19401_gshared (DefaultComparer_t2452 * __this, Vector4_t147  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19401(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2452 *, Vector4_t147 , const MethodInfo*))DefaultComparer_GetHashCode_m19401_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19402_gshared (DefaultComparer_t2452 * __this, Vector4_t147  ___x, Vector4_t147  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19402(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2452 *, Vector4_t147 , Vector4_t147 , const MethodInfo*))DefaultComparer_Equals_m19402_gshared)(__this, ___x, ___y, method)
