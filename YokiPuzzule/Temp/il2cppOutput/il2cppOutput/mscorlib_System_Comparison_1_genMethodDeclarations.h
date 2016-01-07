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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t213;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2243_gshared (Comparison_1_t213 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2243(__this, ___object, ___method, method) (( void (*) (Comparison_1_t213 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2243_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14678_gshared (Comparison_1_t213 * __this, RaycastResult_t244  ___x, RaycastResult_t244  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14678(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t213 *, RaycastResult_t244 , RaycastResult_t244 , const MethodInfo*))Comparison_1_Invoke_m14678_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14679_gshared (Comparison_1_t213 * __this, RaycastResult_t244  ___x, RaycastResult_t244  ___y, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14679(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t213 *, RaycastResult_t244 , RaycastResult_t244 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14679_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14680_gshared (Comparison_1_t213 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14680(__this, ___result, method) (( int32_t (*) (Comparison_1_t213 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14680_gshared)(__this, ___result, method)
