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
struct VoidDelegate_t91;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VoidDelegate__ctor_m583 (VoidDelegate_t91 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidDelegate::Invoke()
extern "C" void VoidDelegate_Invoke_m584 (VoidDelegate_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidDelegate_t91(Il2CppObject* delegate);
// System.IAsyncResult Delegate/VoidDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * VoidDelegate_BeginInvoke_m585 (VoidDelegate_t91 * __this, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VoidDelegate_EndInvoke_m586 (VoidDelegate_t91 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
