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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2424;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18969_gshared (Comparison_1_t2424 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18969(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2424 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18969_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18970_gshared (Comparison_1_t2424 * __this, Vector3_t27  ___x, Vector3_t27  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18970(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2424 *, Vector3_t27 , Vector3_t27 , const MethodInfo*))Comparison_1_Invoke_m18970_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18971_gshared (Comparison_1_t2424 * __this, Vector3_t27  ___x, Vector3_t27  ___y, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18971(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2424 *, Vector3_t27 , Vector3_t27 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18971_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18972_gshared (Comparison_1_t2424 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18972(__this, ___result, method) (( int32_t (*) (Comparison_1_t2424 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18972_gshared)(__this, ___result, method)
