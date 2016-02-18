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

// Delegate/VoidGameObjectDelegate
struct VoidGameObjectDelegate_t98;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t3;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Delegate/VoidGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VoidGameObjectDelegate__ctor_m611 (VoidGameObjectDelegate_t98 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidGameObjectDelegate::Invoke(UnityEngine.GameObject)
extern "C" void VoidGameObjectDelegate_Invoke_m612 (VoidGameObjectDelegate_t98 * __this, GameObject_t3 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidGameObjectDelegate_t98(Il2CppObject* delegate, GameObject_t3 * ___gameObject);
// System.IAsyncResult Delegate/VoidGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * VoidGameObjectDelegate_BeginInvoke_m613 (VoidGameObjectDelegate_t98 * __this, GameObject_t3 * ___gameObject, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VoidGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VoidGameObjectDelegate_EndInvoke_m614 (VoidGameObjectDelegate_t98 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
