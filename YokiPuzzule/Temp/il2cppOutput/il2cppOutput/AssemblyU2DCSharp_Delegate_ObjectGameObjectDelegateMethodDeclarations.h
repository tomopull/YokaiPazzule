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

// Delegate/ObjectGameObjectDelegate
struct ObjectGameObjectDelegate_t103;
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

// System.Void Delegate/ObjectGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ObjectGameObjectDelegate__ctor_m631 (ObjectGameObjectDelegate_t103 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/ObjectGameObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void ObjectGameObjectDelegate_Invoke_m632 (ObjectGameObjectDelegate_t103 * __this, GameObject_t3 * ___gameObject, GameObject_t3 * ___gameObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectGameObjectDelegate_t103(Il2CppObject* delegate, GameObject_t3 * ___gameObject, GameObject_t3 * ___gameObject2);
// System.IAsyncResult Delegate/ObjectGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C" Object_t * ObjectGameObjectDelegate_BeginInvoke_m633 (ObjectGameObjectDelegate_t103 * __this, GameObject_t3 * ___gameObject, GameObject_t3 * ___gameObject2, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/ObjectGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void ObjectGameObjectDelegate_EndInvoke_m634 (ObjectGameObjectDelegate_t103 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
