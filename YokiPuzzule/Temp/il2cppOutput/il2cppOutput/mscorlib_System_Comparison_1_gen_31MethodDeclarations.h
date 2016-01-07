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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2331;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17993_gshared (Comparison_1_t2331 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17993(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2331 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17993_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17994_gshared (Comparison_1_t2331 * __this, Vector3_t99  ___x, Vector3_t99  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17994(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2331 *, Vector3_t99 , Vector3_t99 , const MethodInfo*))Comparison_1_Invoke_m17994_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17995_gshared (Comparison_1_t2331 * __this, Vector3_t99  ___x, Vector3_t99  ___y, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17995(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2331 *, Vector3_t99 , Vector3_t99 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17995_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17996_gshared (Comparison_1_t2331 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17996(__this, ___result, method) (( int32_t (*) (Comparison_1_t2331 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17996_gshared)(__this, ___result, method)
