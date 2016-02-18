﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// JSONObject/FieldNotFound
struct FieldNotFound_t35;
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

// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
extern "C" void FieldNotFound__ctor_m165 (FieldNotFound_t35 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
extern "C" void FieldNotFound_Invoke_m166 (FieldNotFound_t35 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FieldNotFound_t35(Il2CppObject* delegate, String_t* ___name);
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * FieldNotFound_BeginInvoke_m167 (FieldNotFound_t35 * __this, String_t* ___name, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
extern "C" void FieldNotFound_EndInvoke_m168 (FieldNotFound_t35 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
