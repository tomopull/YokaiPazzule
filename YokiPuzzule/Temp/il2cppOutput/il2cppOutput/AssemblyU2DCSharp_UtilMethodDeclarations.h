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

// Util
struct Util_t94;
// System.Int32[]
struct Int32U5BU5D_t76;
// LitJson.JsonData
struct JsonData_t7;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Util::.ctor()
extern "C" void Util__ctor_m587 (Util_t94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::Shuffle(System.Int32[])
extern "C" void Util_Shuffle_m588 (Util_t94 * __this, Int32U5BU5D_t76* ___deck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::Shuffle(LitJson.JsonData)
extern "C" void Util_Shuffle_m589 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::GetBaseURL()
extern "C" String_t* Util_GetBaseURL_m590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
