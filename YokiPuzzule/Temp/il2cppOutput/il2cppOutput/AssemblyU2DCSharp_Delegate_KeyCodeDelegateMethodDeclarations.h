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

// Delegate/KeyCodeDelegate
struct KeyCodeDelegate_t85;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_KeyCode.h"

// System.Void Delegate/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void KeyCodeDelegate__ctor_m543 (KeyCodeDelegate_t85 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/KeyCodeDelegate::Invoke(UnityEngine.KeyCode)
extern "C" void KeyCodeDelegate_Invoke_m544 (KeyCodeDelegate_t85 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t85(Il2CppObject* delegate, int32_t ___value);
// System.IAsyncResult Delegate/KeyCodeDelegate::BeginInvoke(UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyCodeDelegate_BeginInvoke_m545 (KeyCodeDelegate_t85 * __this, int32_t ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void KeyCodeDelegate_EndInvoke_m546 (KeyCodeDelegate_t85 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
