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

// LitJson.ImporterFunc
struct ImporterFunc_t54;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ImporterFunc__ctor_m595 (ImporterFunc_t54 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C" Object_t * ImporterFunc_Invoke_m596 (ImporterFunc_t54 * __this, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_ImporterFunc_t54(Il2CppObject* delegate, Object_t * ___input);
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ImporterFunc_BeginInvoke_m597 (ImporterFunc_t54 * __this, Object_t * ___input, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ImporterFunc_EndInvoke_m598 (ImporterFunc_t54 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
