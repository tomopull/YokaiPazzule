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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
struct Transform_1_t2081;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14351_gshared (Transform_1_t2081 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14351(__this, ___object, ___method, method) (( void (*) (Transform_1_t2081 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14351_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m14352_gshared (Transform_1_t2081 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14352(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2081 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m14352_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14353_gshared (Transform_1_t2081 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14353(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2081 *, int32_t, Object_t *, AsyncCallback_t22 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14353_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m14354_gshared (Transform_1_t2081 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14354(__this, ___result, method) (( int32_t (*) (Transform_1_t2081 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14354_gshared)(__this, ___result, method)
