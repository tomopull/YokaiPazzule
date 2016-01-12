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

// LitJson.ExporterFunc
struct ExporterFunc_t53;
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

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ExporterFunc__ctor_m591 (ExporterFunc_t53 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" void ExporterFunc_Invoke_m592 (ExporterFunc_t53 * __this, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ExporterFunc_t53(Il2CppObject* delegate, Object_t * ___obj, JsonWriter_t52 * ___writer);
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" Object_t * ExporterFunc_BeginInvoke_m593 (ExporterFunc_t53 * __this, Object_t * ___obj, JsonWriter_t52 * ___writer, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C" void ExporterFunc_EndInvoke_m594 (ExporterFunc_t53 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
