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

// Delegate/BoolDelegate
struct BoolDelegate_t80;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BoolDelegate__ctor_m523 (BoolDelegate_t80 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/BoolDelegate::Invoke(System.Boolean)
extern "C" void BoolDelegate_Invoke_m524 (BoolDelegate_t80 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolDelegate_t80(Il2CppObject* delegate, bool ___value);
// System.IAsyncResult Delegate/BoolDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * BoolDelegate_BeginInvoke_m525 (BoolDelegate_t80 * __this, bool ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BoolDelegate_EndInvoke_m526 (BoolDelegate_t80 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
