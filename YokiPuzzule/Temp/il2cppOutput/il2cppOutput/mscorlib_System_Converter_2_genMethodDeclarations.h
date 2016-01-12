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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2518;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m20122_gshared (Converter_2_t2518 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m20122(__this, ___object, ___method, method) (( void (*) (Converter_2_t2518 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m20122_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m20123_gshared (Converter_2_t2518 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m20123(__this, ___input, method) (( Object_t * (*) (Converter_2_t2518 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m20123_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m20124_gshared (Converter_2_t2518 * __this, Object_t * ___input, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m20124(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2518 *, Object_t *, AsyncCallback_t22 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m20124_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m20125_gshared (Converter_2_t2518 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m20125(__this, ___result, method) (( Object_t * (*) (Converter_2_t2518 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m20125_gshared)(__this, ___result, method)
