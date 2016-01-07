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

// Delegate/KeyCodeGameObjectDelegate
struct KeyCodeGameObjectDelegate_t92;
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
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void Delegate/KeyCodeGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeGameObjectDelegate__ctor_m571 (KeyCodeGameObjectDelegate_t92 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/KeyCodeGameObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C" void KeyCodeGameObjectDelegate_Invoke_m572 (KeyCodeGameObjectDelegate_t92 * __this, GameObject_t16 * ___gameObject, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeGameObjectDelegate_t92(Il2CppObject* delegate, GameObject_t16 * ___gameObject, int32_t ___value);
// System.IAsyncResult Delegate/KeyCodeGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeGameObjectDelegate_BeginInvoke_m573 (KeyCodeGameObjectDelegate_t92 * __this, GameObject_t16 * ___gameObject, int32_t ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/KeyCodeGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeGameObjectDelegate_EndInvoke_m574 (KeyCodeGameObjectDelegate_t92 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
