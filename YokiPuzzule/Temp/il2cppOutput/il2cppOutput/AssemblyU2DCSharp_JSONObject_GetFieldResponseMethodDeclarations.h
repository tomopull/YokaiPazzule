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

// JSONObject/GetFieldResponse
struct GetFieldResponse_t36;
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

// System.Void JSONObject/GetFieldResponse::.ctor(System.Object,System.IntPtr)
extern "C" void GetFieldResponse__ctor_m169 (GetFieldResponse_t36 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/GetFieldResponse::Invoke(JSONObject)
extern "C" void GetFieldResponse_Invoke_m170 (GetFieldResponse_t36 * __this, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GetFieldResponse_t36(Il2CppObject* delegate, JSONObject_t32 * ___obj);
// System.IAsyncResult JSONObject/GetFieldResponse::BeginInvoke(JSONObject,System.AsyncCallback,System.Object)
extern "C" Object_t * GetFieldResponse_BeginInvoke_m171 (GetFieldResponse_t36 * __this, JSONObject_t32 * ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/GetFieldResponse::EndInvoke(System.IAsyncResult)
extern "C" void GetFieldResponse_EndInvoke_m172 (GetFieldResponse_t36 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
