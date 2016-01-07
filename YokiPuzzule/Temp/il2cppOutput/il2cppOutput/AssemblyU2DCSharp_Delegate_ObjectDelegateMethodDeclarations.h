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

// Delegate/ObjectDelegate
struct ObjectDelegate_t84;
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

// System.Void Delegate/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ObjectDelegate__ctor_m539 (ObjectDelegate_t84 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/ObjectDelegate::Invoke(UnityEngine.GameObject)
extern "C" void ObjectDelegate_Invoke_m540 (ObjectDelegate_t84 * __this, GameObject_t16 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectDelegate_t84(Il2CppObject* delegate, GameObject_t16 * ___value);
// System.IAsyncResult Delegate/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * ObjectDelegate_BeginInvoke_m541 (ObjectDelegate_t84 * __this, GameObject_t16 * ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ObjectDelegate_EndInvoke_m542 (ObjectDelegate_t84 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
