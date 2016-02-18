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

// Delegate/StringGameObjectDelegate
struct StringGameObjectDelegate_t102;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t3;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Delegate/StringGameObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void StringGameObjectDelegate__ctor_m627 (StringGameObjectDelegate_t102 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/StringGameObjectDelegate::Invoke(UnityEngine.GameObject,System.String)
extern "C" void StringGameObjectDelegate_Invoke_m628 (StringGameObjectDelegate_t102 * __this, GameObject_t3 * ___gameObject, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StringGameObjectDelegate_t102(Il2CppObject* delegate, GameObject_t3 * ___gameObject, String_t* ___value);
// System.IAsyncResult Delegate/StringGameObjectDelegate::BeginInvoke(UnityEngine.GameObject,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * StringGameObjectDelegate_BeginInvoke_m629 (StringGameObjectDelegate_t102 * __this, GameObject_t3 * ___gameObject, String_t* ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/StringGameObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void StringGameObjectDelegate_EndInvoke_m630 (StringGameObjectDelegate_t102 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
