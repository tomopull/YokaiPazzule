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

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t824;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.ConstructorInfo::.ctor()
extern "C" void ConstructorInfo__ctor_m9289 (ConstructorInfo_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern "C" void ConstructorInfo__cctor_m9290 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern "C" int32_t ConstructorInfo_get_MemberType_m9291 (ConstructorInfo_t824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C" Object_t * ConstructorInfo_Invoke_m4571 (ConstructorInfo_t824 * __this, ObjectU5BU5D_t164* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
