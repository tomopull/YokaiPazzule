﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2339;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18133_gshared (Predicate_1_t2339 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18133(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2339 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18133_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18134_gshared (Predicate_1_t2339 * __this, Color32_t451  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18134(__this, ___obj, method) (( bool (*) (Predicate_1_t2339 *, Color32_t451 , const MethodInfo*))Predicate_1_Invoke_m18134_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18135_gshared (Predicate_1_t2339 * __this, Color32_t451  ___obj, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18135(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2339 *, Color32_t451 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18135_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18136_gshared (Predicate_1_t2339 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18136(__this, ___result, method) (( bool (*) (Predicate_1_t2339 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18136_gshared)(__this, ___result, method)
