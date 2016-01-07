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

// Delegate/VoidDelegate
struct VoidDelegate_t79;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VoidDelegate__ctor_m519 (VoidDelegate_t79 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidDelegate::Invoke()
extern "C" void VoidDelegate_Invoke_m520 (VoidDelegate_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidDelegate_t79(Il2CppObject* delegate);
// System.IAsyncResult Delegate/VoidDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VoidDelegate_BeginInvoke_m521 (VoidDelegate_t79 * __this, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VoidDelegate_EndInvoke_m522 (VoidDelegate_t79 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
