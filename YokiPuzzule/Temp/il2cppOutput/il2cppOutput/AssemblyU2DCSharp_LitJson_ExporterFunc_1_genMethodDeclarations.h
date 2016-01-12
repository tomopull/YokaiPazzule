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

// LitJson.ExporterFunc`1<System.Object>
struct ExporterFunc_1_t2066;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t52;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ExporterFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ExporterFunc_1__ctor_m14181_gshared (ExporterFunc_1_t2066 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ExporterFunc_1__ctor_m14181(__this, ___object, ___method, method) (( void (*) (ExporterFunc_1_t2066 *, Object_t *, IntPtr_t, const MethodInfo*))ExporterFunc_1__ctor_m14181_gshared)(__this, ___object, ___method, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::Invoke(T,LitJson.JsonWriter)
extern "C" void ExporterFunc_1_Invoke_m14182_gshared (ExporterFunc_1_t2066 * __this, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method);
#define ExporterFunc_1_Invoke_m14182(__this, ___obj, ___writer, method) (( void (*) (ExporterFunc_1_t2066 *, Object_t *, JsonWriter_t52 *, const MethodInfo*))ExporterFunc_1_Invoke_m14182_gshared)(__this, ___obj, ___writer, method)
// System.IAsyncResult LitJson.ExporterFunc`1<System.Object>::BeginInvoke(T,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" Object_t * ExporterFunc_1_BeginInvoke_m14183_gshared (ExporterFunc_1_t2066 * __this, Object_t * ___obj, JsonWriter_t52 * ___writer, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ExporterFunc_1_BeginInvoke_m14183(__this, ___obj, ___writer, ___callback, ___object, method) (( Object_t * (*) (ExporterFunc_1_t2066 *, Object_t *, JsonWriter_t52 *, AsyncCallback_t22 *, Object_t *, const MethodInfo*))ExporterFunc_1_BeginInvoke_m14183_gshared)(__this, ___obj, ___writer, ___callback, ___object, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ExporterFunc_1_EndInvoke_m14184_gshared (ExporterFunc_1_t2066 * __this, Object_t * ___result, const MethodInfo* method);
#define ExporterFunc_1_EndInvoke_m14184(__this, ___result, method) (( void (*) (ExporterFunc_1_t2066 *, Object_t *, const MethodInfo*))ExporterFunc_1_EndInvoke_m14184_gshared)(__this, ___result, method)
