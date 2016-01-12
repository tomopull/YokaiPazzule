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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t505;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t212;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m14681_gshared (EventFunction_1_t505 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m14681(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t505 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m14681_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m14683_gshared (EventFunction_1_t505 * __this, Object_t * ___handler, BaseEventData_t212 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m14683(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t505 *, Object_t *, BaseEventData_t212 *, const MethodInfo*))EventFunction_1_Invoke_m14683_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m14685_gshared (EventFunction_1_t505 * __this, Object_t * ___handler, BaseEventData_t212 * ___eventData, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m14685(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t505 *, Object_t *, BaseEventData_t212 *, AsyncCallback_t22 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m14685_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m14687_gshared (EventFunction_1_t505 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m14687(__this, ___result, method) (( void (*) (EventFunction_1_t505 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m14687_gshared)(__this, ___result, method)
