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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2443;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19393_gshared (Predicate_1_t2443 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m19393(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2443 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m19393_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19394_gshared (Predicate_1_t2443 * __this, UILineInfo_t496  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m19394(__this, ___obj, method) (( bool (*) (Predicate_1_t2443 *, UILineInfo_t496 , const MethodInfo*))Predicate_1_Invoke_m19394_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19395_gshared (Predicate_1_t2443 * __this, UILineInfo_t496  ___obj, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m19395(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2443 *, UILineInfo_t496 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m19395_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19396_gshared (Predicate_1_t2443 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m19396(__this, ___result, method) (( bool (*) (Predicate_1_t2443 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m19396_gshared)(__this, ___result, method)
