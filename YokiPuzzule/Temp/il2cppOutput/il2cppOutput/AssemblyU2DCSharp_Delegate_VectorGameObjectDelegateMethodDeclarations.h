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

// Delegate/VectorGameObjectDelegate
struct VectorGameObjectDelegate_t89;
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
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Delegate/VectorGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VectorGameObjectDelegate__ctor_m559 (VectorGameObjectDelegate_t89 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VectorGameObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C" void VectorGameObjectDelegate_Invoke_m560 (VectorGameObjectDelegate_t89 * __this, GameObject_t16 * ___gameObject, Vector2_t4  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VectorGameObjectDelegate_t89(Il2CppObject* delegate, GameObject_t16 * ___gameObject, Vector2_t4  ___value);
// System.IAsyncResult Delegate/VectorGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C" Object_t * VectorGameObjectDelegate_BeginInvoke_m561 (VectorGameObjectDelegate_t89 * __this, GameObject_t16 * ___gameObject, Vector2_t4  ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VectorGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VectorGameObjectDelegate_EndInvoke_m562 (VectorGameObjectDelegate_t89 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
