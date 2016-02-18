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

// LitJson.ImporterFunc`2<System.Object,System.Object>
struct ImporterFunc_2_t2157;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ImporterFunc`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ImporterFunc_2__ctor_m15119_gshared (ImporterFunc_2_t2157 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ImporterFunc_2__ctor_m15119(__this, ___object, ___method, method) (( void (*) (ImporterFunc_2_t2157 *, Object_t *, IntPtr_t, const MethodInfo*))ImporterFunc_2__ctor_m15119_gshared)(__this, ___object, ___method, method)
// TValue LitJson.ImporterFunc`2<System.Object,System.Object>::Invoke(TJson)
extern "C" Object_t * ImporterFunc_2_Invoke_m15120_gshared (ImporterFunc_2_t2157 * __this, Object_t * ___input, const MethodInfo* method);
#define ImporterFunc_2_Invoke_m15120(__this, ___input, method) (( Object_t * (*) (ImporterFunc_2_t2157 *, Object_t *, const MethodInfo*))ImporterFunc_2_Invoke_m15120_gshared)(__this, ___input, method)
// System.IAsyncResult LitJson.ImporterFunc`2<System.Object,System.Object>::BeginInvoke(TJson,System.AsyncCallback,System.Object)
extern "C" Object_t * ImporterFunc_2_BeginInvoke_m15121_gshared (ImporterFunc_2_t2157 * __this, Object_t * ___input, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ImporterFunc_2_BeginInvoke_m15121(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (ImporterFunc_2_t2157 *, Object_t *, AsyncCallback_t34 *, Object_t *, const MethodInfo*))ImporterFunc_2_BeginInvoke_m15121_gshared)(__this, ___input, ___callback, ___object, method)
// TValue LitJson.ImporterFunc`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ImporterFunc_2_EndInvoke_m15122_gshared (ImporterFunc_2_t2157 * __this, Object_t * ___result, const MethodInfo* method);
#define ImporterFunc_2_EndInvoke_m15122(__this, ___result, method) (( Object_t * (*) (ImporterFunc_2_t2157 *, Object_t *, const MethodInfo*))ImporterFunc_2_EndInvoke_m15122_gshared)(__this, ___result, method)
