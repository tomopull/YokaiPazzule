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

// Delegate/VectorDelegate
struct VectorDelegate_t94;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Delegate/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void VectorDelegate__ctor_m595 (VectorDelegate_t94 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VectorDelegate::Invoke(UnityEngine.Vector2)
extern "C" void VectorDelegate_Invoke_m596 (VectorDelegate_t94 * __this, Vector2_t10  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VectorDelegate_t94(Il2CppObject* delegate, Vector2_t10  ___value);
// System.IAsyncResult Delegate/VectorDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C" Object_t * VectorDelegate_BeginInvoke_m597 (VectorDelegate_t94 * __this, Vector2_t10  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C" void VectorDelegate_EndInvoke_m598 (VectorDelegate_t94 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
