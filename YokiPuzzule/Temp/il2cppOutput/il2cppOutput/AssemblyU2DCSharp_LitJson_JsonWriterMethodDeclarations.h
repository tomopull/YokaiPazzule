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

// LitJson.JsonWriter
struct JsonWriter_t64;
// System.Text.StringBuilder
struct StringBuilder_t40;
// System.IO.TextWriter
struct TextWriter_t84;
// System.Char[]
struct CharU5BU5D_t46;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_Condition.h"
#include "mscorlib_System_Decimal.h"

// System.Void LitJson.JsonWriter::.ctor()
extern "C" void JsonWriter__ctor_m500 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C" void JsonWriter__ctor_m501 (JsonWriter_t64 * __this, StringBuilder_t40 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C" void JsonWriter__ctor_m502 (JsonWriter_t64 * __this, TextWriter_t84 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.cctor()
extern "C" void JsonWriter__cctor_m503 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonWriter::get_IndentValue()
extern "C" int32_t JsonWriter_get_IndentValue_m504 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
extern "C" void JsonWriter_set_IndentValue_m505 (JsonWriter_t64 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
extern "C" bool JsonWriter_get_PrettyPrint_m506 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
extern "C" void JsonWriter_set_PrettyPrint_m507 (JsonWriter_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C" TextWriter_t84 * JsonWriter_get_TextWriter_m508 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonWriter::get_Validate()
extern "C" bool JsonWriter_get_Validate_m509 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
extern "C" void JsonWriter_set_Validate_m510 (JsonWriter_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" void JsonWriter_DoValidation_m511 (JsonWriter_t64 * __this, int32_t ___cond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C" void JsonWriter_Init_m512 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" void JsonWriter_IntToHex_m513 (Object_t * __this /* static, unused */, int32_t ___n, CharU5BU5D_t46* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
extern "C" void JsonWriter_Indent_m514 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" void JsonWriter_Put_m515 (JsonWriter_t64 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" void JsonWriter_PutNewline_m516 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" void JsonWriter_PutNewline_m517 (JsonWriter_t64 * __this, bool ___add_comma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" void JsonWriter_PutString_m518 (JsonWriter_t64 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Unindent()
extern "C" void JsonWriter_Unindent_m519 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C" String_t* JsonWriter_ToString_m520 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
extern "C" void JsonWriter_Reset_m521 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C" void JsonWriter_Write_m522 (JsonWriter_t64 * __this, bool ___boolean, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" void JsonWriter_Write_m523 (JsonWriter_t64 * __this, Decimal_t160  ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C" void JsonWriter_Write_m524 (JsonWriter_t64 * __this, double ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" void JsonWriter_Write_m525 (JsonWriter_t64 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C" void JsonWriter_Write_m526 (JsonWriter_t64 * __this, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" void JsonWriter_Write_m527 (JsonWriter_t64 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" void JsonWriter_Write_m528 (JsonWriter_t64 * __this, uint64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C" void JsonWriter_WriteArrayEnd_m529 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C" void JsonWriter_WriteArrayStart_m530 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C" void JsonWriter_WriteObjectEnd_m531 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C" void JsonWriter_WriteObjectStart_m532 (JsonWriter_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C" void JsonWriter_WritePropertyName_m533 (JsonWriter_t64 * __this, String_t* ___property_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
