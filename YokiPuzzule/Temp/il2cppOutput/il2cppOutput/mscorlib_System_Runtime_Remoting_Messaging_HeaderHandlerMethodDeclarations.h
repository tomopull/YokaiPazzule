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

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1750;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1751;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m11056 (HeaderHandler_t1750 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m11057 (HeaderHandler_t1750 * __this, HeaderU5BU5D_t1751* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t1750(Il2CppObject* delegate, HeaderU5BU5D_t1751* ___headers);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m11058 (HeaderHandler_t1750 * __this, HeaderU5BU5D_t1751* ___headers, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m11059 (HeaderHandler_t1750 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
