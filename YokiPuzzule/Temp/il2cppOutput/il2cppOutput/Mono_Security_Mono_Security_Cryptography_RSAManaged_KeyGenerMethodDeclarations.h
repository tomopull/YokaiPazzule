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

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1007;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1008;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m5146 (KeyGeneratedEventHandler_t1007 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m5147 (KeyGeneratedEventHandler_t1007 * __this, Object_t * ___sender, EventArgs_t1008 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t1007(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1008 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m5148 (KeyGeneratedEventHandler_t1007 * __this, Object_t * ___sender, EventArgs_t1008 * ___e, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m5149 (KeyGeneratedEventHandler_t1007 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
