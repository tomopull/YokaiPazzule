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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t446;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2511_gshared (UnityAction_1_t446 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2511(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t446 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2511_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m15747_gshared (UnityAction_1_t446 * __this, Color_t110  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m15747(__this, ___arg0, method) (( void (*) (UnityAction_1_t446 *, Color_t110 , const MethodInfo*))UnityAction_1_Invoke_m15747_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m15748_gshared (UnityAction_1_t446 * __this, Color_t110  ___arg0, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m15748(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t446 *, Color_t110 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m15748_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m15749_gshared (UnityAction_1_t446 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m15749(__this, ___result, method) (( void (*) (UnityAction_1_t446 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m15749_gshared)(__this, ___result, method)
