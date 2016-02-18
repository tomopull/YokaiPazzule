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

// Delegate/StringDelegate
struct StringDelegate_t95;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Delegate/StringDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void StringDelegate__ctor_m599 (StringDelegate_t95 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/StringDelegate::Invoke(System.String)
extern "C" void StringDelegate_Invoke_m600 (StringDelegate_t95 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StringDelegate_t95(Il2CppObject* delegate, String_t* ___value);
// System.IAsyncResult Delegate/StringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * StringDelegate_BeginInvoke_m601 (StringDelegate_t95 * __this, String_t* ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Delegate/StringDelegate::EndInvoke(System.IAsyncResult)
extern "C" void StringDelegate_EndInvoke_m602 (StringDelegate_t95 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
