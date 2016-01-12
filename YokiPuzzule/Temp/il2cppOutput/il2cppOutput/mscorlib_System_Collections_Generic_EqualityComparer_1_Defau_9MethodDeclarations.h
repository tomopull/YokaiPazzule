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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2338;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m18130_gshared (DefaultComparer_t2338 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18130(__this, method) (( void (*) (DefaultComparer_t2338 *, const MethodInfo*))DefaultComparer__ctor_m18130_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18131_gshared (DefaultComparer_t2338 * __this, Color32_t451  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18131(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2338 *, Color32_t451 , const MethodInfo*))DefaultComparer_GetHashCode_m18131_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18132_gshared (DefaultComparer_t2338 * __this, Color32_t451  ___x, Color32_t451  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18132(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2338 *, Color32_t451 , Color32_t451 , const MethodInfo*))DefaultComparer_Equals_m18132_gshared)(__this, ___x, ___y, method)
