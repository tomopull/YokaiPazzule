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

// LitJson.WrapperFactory
struct WrapperFactory_t55;
// System.Object
struct Object_t;
// LitJson.IJsonWrapper
struct IJsonWrapper_t95;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C" void WrapperFactory__ctor_m599 (WrapperFactory_t55 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C" Object_t * WrapperFactory_Invoke_m600 (WrapperFactory_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_WrapperFactory_t55(Il2CppObject* delegate);
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WrapperFactory_BeginInvoke_m601 (WrapperFactory_t55 * __this, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C" Object_t * WrapperFactory_EndInvoke_m602 (WrapperFactory_t55 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
