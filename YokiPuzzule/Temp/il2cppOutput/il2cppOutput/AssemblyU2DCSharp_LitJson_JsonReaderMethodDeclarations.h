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

// LitJson.JsonReader
struct JsonReader_t76;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t79;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t88;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JsonToken.h"
#include "AssemblyU2DCSharp_LitJson_ParserToken.h"

// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" void JsonReader__ctor_m479 (JsonReader_t76 * __this, String_t* ___json_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C" void JsonReader__ctor_m480 (JsonReader_t76 * __this, TextReader_t79 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" void JsonReader__ctor_m481 (JsonReader_t76 * __this, TextReader_t79 * ___reader, bool ___owned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C" void JsonReader__cctor_m482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
extern "C" bool JsonReader_get_AllowComments_m483 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
extern "C" void JsonReader_set_AllowComments_m484 (JsonReader_t76 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
extern "C" bool JsonReader_get_AllowSingleQuotedStrings_m485 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
extern "C" void JsonReader_set_AllowSingleQuotedStrings_m486 (JsonReader_t76 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
extern "C" bool JsonReader_get_EndOfInput_m487 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
extern "C" bool JsonReader_get_EndOfJson_m488 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" int32_t JsonReader_get_Token_m489 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C" Object_t * JsonReader_get_Value_m490 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" void JsonReader_PopulateParseTable_m491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" void JsonReader_TableAddCol_m492 (Object_t * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t88* ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" void JsonReader_TableAddRow_m493 (Object_t * __this /* static, unused */, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" void JsonReader_ProcessNumber_m494 (JsonReader_t76 * __this, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" void JsonReader_ProcessSymbol_m495 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" bool JsonReader_ReadToken_m496 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C" void JsonReader_Close_m497 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C" bool JsonReader_Read_m498 (JsonReader_t76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
