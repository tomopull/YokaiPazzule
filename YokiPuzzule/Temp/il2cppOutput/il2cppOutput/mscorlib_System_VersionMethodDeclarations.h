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

// System.Version
struct Version_t783;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m11012 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m11013 (Version_t783 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m4786 (Version_t783 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m11014 (Version_t783 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m11015 (Version_t783 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m11016 (Version_t783 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m11017 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m11018 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m11019 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m11020 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C" Object_t * Version_Clone_m11021 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m11022 (Version_t783 * __this, Object_t * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m11023 (Version_t783 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m11024 (Version_t783 * __this, Version_t783 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m11025 (Version_t783 * __this, Version_t783 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m11026 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m11027 (Version_t783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t783 * Version_CreateFromString_m11028 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m11029 (Object_t * __this /* static, unused */, Version_t783 * ___v1, Version_t783 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m11030 (Object_t * __this /* static, unused */, Version_t783 * ___v1, Version_t783 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
