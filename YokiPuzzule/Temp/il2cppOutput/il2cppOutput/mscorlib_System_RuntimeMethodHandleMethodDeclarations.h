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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t797;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C" void RuntimeMethodHandle__ctor_m11659 (RuntimeMethodHandle_t1812 * __this, IntPtr_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle__ctor_m11660 (RuntimeMethodHandle_t1812 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t RuntimeMethodHandle_get_Value_m11661 (RuntimeMethodHandle_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle_GetObjectData_m11662 (RuntimeMethodHandle_t1812 * __this, SerializationInfo_t797 * ___info, StreamingContext_t798  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C" bool RuntimeMethodHandle_Equals_m11663 (RuntimeMethodHandle_t1812 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m11664 (RuntimeMethodHandle_t1812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
