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

// Delegate/FloatDelegate
struct FloatDelegate_t93;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FloatDelegate__ctor_m591 (FloatDelegate_t93 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/FloatDelegate::Invoke(System.Single)
extern "C" void FloatDelegate_Invoke_m592 (FloatDelegate_t93 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FloatDelegate_t93(Il2CppObject* delegate, float ___value);
// System.IAsyncResult Delegate/FloatDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * FloatDelegate_BeginInvoke_m593 (FloatDelegate_t93 * __this, float ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FloatDelegate_EndInvoke_m594 (FloatDelegate_t93 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
