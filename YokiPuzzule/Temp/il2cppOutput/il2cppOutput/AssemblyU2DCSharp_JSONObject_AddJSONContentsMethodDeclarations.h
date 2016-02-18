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
struct AddJSONContents_t30;
// System.Object
struct Object_t;
// JSONObject
struct JSONObject_t32;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void JSONObject/AddJSONContents::.ctor(System.Object,System.IntPtr)
extern "C" void AddJSONContents__ctor_m161 (AddJSONContents_t30 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/AddJSONContents::Invoke(JSONObject)
extern "C" void AddJSONContents_Invoke_m162 (AddJSONContents_t30 * __this, JSONObject_t32 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AddJSONContents_t30(Il2CppObject* delegate, JSONObject_t32 * ___self);
// System.IAsyncResult JSONObject/AddJSONContents::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
extern "C" Object_t * AddJSONContents_BeginInvoke_m163 (AddJSONContents_t30 * __this, JSONObject_t32 * ___self, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/AddJSONContents::EndInvoke(System.IAsyncResult)
extern "C" void AddJSONContents_EndInvoke_m164 (AddJSONContents_t30 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
