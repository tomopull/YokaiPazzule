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
struct ExporterFunc_1_t2155;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t64;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ExporterFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ExporterFunc_1__ctor_m15113_gshared (ExporterFunc_1_t2155 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ExporterFunc_1__ctor_m15113(__this, ___object, ___method, method) (( void (*) (ExporterFunc_1_t2155 *, Object_t *, IntPtr_t, const MethodInfo*))ExporterFunc_1__ctor_m15113_gshared)(__this, ___object, ___method, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::Invoke(T,LitJson.JsonWriter)
extern "C" void ExporterFunc_1_Invoke_m15114_gshared (ExporterFunc_1_t2155 * __this, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method);
#define ExporterFunc_1_Invoke_m15114(__this, ___obj, ___writer, method) (( void (*) (ExporterFunc_1_t2155 *, Object_t *, JsonWriter_t64 *, const MethodInfo*))ExporterFunc_1_Invoke_m15114_gshared)(__this, ___obj, ___writer, method)
// System.IAsyncResult LitJson.ExporterFunc`1<System.Object>::BeginInvoke(T,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" Object_t * ExporterFunc_1_BeginInvoke_m15115_gshared (ExporterFunc_1_t2155 * __this, Object_t * ___obj, JsonWriter_t64 * ___writer, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ExporterFunc_1_BeginInvoke_m15115(__this, ___obj, ___writer, ___callback, ___object, method) (( Object_t * (*) (ExporterFunc_1_t2155 *, Object_t *, JsonWriter_t64 *, AsyncCallback_t34 *, Object_t *, const MethodInfo*))ExporterFunc_1_BeginInvoke_m15115_gshared)(__this, ___obj, ___writer, ___callback, ___object, method)
// System.Void LitJson.ExporterFunc`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void ExporterFunc_1_EndInvoke_m15116_gshared (ExporterFunc_1_t2155 * __this, Object_t * ___result, const MethodInfo* method);
#define ExporterFunc_1_EndInvoke_m15116(__this, ___result, method) (( void (*) (ExporterFunc_1_t2155 *, Object_t *, const MethodInfo*))ExporterFunc_1_EndInvoke_m15116_gshared)(__this, ___result, method)
