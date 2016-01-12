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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2360;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18427_gshared (Predicate_1_t2360 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18427(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2360 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18427_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18428_gshared (Predicate_1_t2360 * __this, Vector4_t107  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18428(__this, ___obj, method) (( bool (*) (Predicate_1_t2360 *, Vector4_t107 , const MethodInfo*))Predicate_1_Invoke_m18428_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18429_gshared (Predicate_1_t2360 * __this, Vector4_t107  ___obj, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18429(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2360 *, Vector4_t107 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18429_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18430_gshared (Predicate_1_t2360 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18430(__this, ___result, method) (( bool (*) (Predicate_1_t2360 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18430_gshared)(__this, ___result, method)
