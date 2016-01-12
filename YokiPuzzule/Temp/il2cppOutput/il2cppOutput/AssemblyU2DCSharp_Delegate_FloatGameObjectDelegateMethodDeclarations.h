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

// Delegate/FloatGameObjectDelegate
struct FloatGameObjectDelegate_t88;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t16;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/FloatGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void FloatGameObjectDelegate__ctor_m555 (FloatGameObjectDelegate_t88 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/FloatGameObjectDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C" void FloatGameObjectDelegate_Invoke_m556 (FloatGameObjectDelegate_t88 * __this, GameObject_t16 * ___gameObject, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FloatGameObjectDelegate_t88(Il2CppObject* delegate, GameObject_t16 * ___gameObject, float ___value);
// System.IAsyncResult Delegate/FloatGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * FloatGameObjectDelegate_BeginInvoke_m557 (FloatGameObjectDelegate_t88 * __this, GameObject_t16 * ___gameObject, float ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/FloatGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void FloatGameObjectDelegate_EndInvoke_m558 (FloatGameObjectDelegate_t88 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
