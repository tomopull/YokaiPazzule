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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2243;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16168_gshared (Predicate_1_t2243 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16168(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2243 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16168_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16169_gshared (Predicate_1_t2243 * __this, RaycastResult_t304  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16169(__this, ___obj, method) (( bool (*) (Predicate_1_t2243 *, RaycastResult_t304 , const MethodInfo*))Predicate_1_Invoke_m16169_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16170_gshared (Predicate_1_t2243 * __this, RaycastResult_t304  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16170(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2243 *, RaycastResult_t304 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16170_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16171_gshared (Predicate_1_t2243 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16171(__this, ___result, method) (( bool (*) (Predicate_1_t2243 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16171_gshared)(__this, ___result, method)
