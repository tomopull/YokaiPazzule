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

// System.Predicate`1<System.Object>
struct Predicate_1_t1875;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11567_gshared (Predicate_1_t1875 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11567(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1875 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11567_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11568_gshared (Predicate_1_t1875 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11568(__this, ___obj, method) (( bool (*) (Predicate_1_t1875 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m11568_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11569_gshared (Predicate_1_t1875 * __this, Object_t * ___obj, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11569(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1875 *, Object_t *, AsyncCallback_t22 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11569_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11570_gshared (Predicate_1_t1875 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11570(__this, ___result, method) (( bool (*) (Predicate_1_t1875 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11570_gshared)(__this, ___result, method)
