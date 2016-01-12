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

// System.NotSupportedException
struct NotSupportedException_t124;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotSupportedException::.ctor()
extern "C" void NotSupportedException__ctor_m611 (NotSupportedException_t124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" void NotSupportedException__ctor_m4777 (NotSupportedException_t124 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotSupportedException__ctor_m10795 (NotSupportedException_t124 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
