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

// JSONObject/AddJSONContents
struct AddJSONContents_t18;
// System.Object
struct Object_t;
// JSONObject
struct JSONObject_t20;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void JSONObject/AddJSONContents::.ctor(System.Object,System.IntPtr)
extern "C" void AddJSONContents__ctor_m97 (AddJSONContents_t18 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
extern "C" void AddJSONContents_Invoke_m98 (AddJSONContents_t18 * __this, JSONObject_t20 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddJSONContents_t18(Il2CppObject* delegate, JSONObject_t20 * ___self);
// System.IAsyncResult JSONObject/AddJSONContents::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
extern "C" Object_t * AddJSONContents_BeginInvoke_m99 (AddJSONContents_t18 * __this, JSONObject_t20 * ___self, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/AddJSONContents::EndInvoke(System.IAsyncResult)
extern "C" void AddJSONContents_EndInvoke_m100 (AddJSONContents_t18 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
