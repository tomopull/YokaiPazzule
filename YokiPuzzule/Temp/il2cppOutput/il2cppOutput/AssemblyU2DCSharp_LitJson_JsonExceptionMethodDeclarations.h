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

// LitJson.JsonException
struct JsonException_t45;
// System.Exception
struct Exception_t121;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_ParserToken.h"

// System.Void LitJson.JsonException::.ctor()
extern "C" void JsonException__ctor_m349 (JsonException_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
extern "C" void JsonException__ctor_m350 (JsonException_t45 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C" void JsonException__ctor_m351 (JsonException_t45 * __this, int32_t ___token, Exception_t121 * ___inner_exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C" void JsonException__ctor_m352 (JsonException_t45 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
extern "C" void JsonException__ctor_m353 (JsonException_t45 * __this, int32_t ___c, Exception_t121 * ___inner_exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" void JsonException__ctor_m354 (JsonException_t45 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
extern "C" void JsonException__ctor_m355 (JsonException_t45 * __this, String_t* ___message, Exception_t121 * ___inner_exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
