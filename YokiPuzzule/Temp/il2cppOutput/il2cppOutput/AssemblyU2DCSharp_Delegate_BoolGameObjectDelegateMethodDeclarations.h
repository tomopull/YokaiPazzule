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

// Delegate/BoolGameObjectDelegate
struct BoolGameObjectDelegate_t99;
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

// System.Void Delegate/BoolGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BoolGameObjectDelegate__ctor_m615 (BoolGameObjectDelegate_t99 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/BoolGameObjectDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C" void BoolGameObjectDelegate_Invoke_m616 (BoolGameObjectDelegate_t99 * __this, GameObject_t3 * ___gameObject, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolGameObjectDelegate_t99(Il2CppObject* delegate, GameObject_t3 * ___gameObject, bool ___value);
// System.IAsyncResult Delegate/BoolGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * BoolGameObjectDelegate_BeginInvoke_m617 (BoolGameObjectDelegate_t99 * __this, GameObject_t3 * ___gameObject, bool ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/BoolGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BoolGameObjectDelegate_EndInvoke_m618 (BoolGameObjectDelegate_t99 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
