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
struct JsonReader_t64;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t67;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t76;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JsonToken.h"
#include "AssemblyU2DCSharp_LitJson_ParserToken.h"

// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" void JsonReader__ctor_m415 (JsonReader_t64 * __this, String_t* ___json_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C" void JsonReader__ctor_m416 (JsonReader_t64 * __this, TextReader_t67 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" void JsonReader__ctor_m417 (JsonReader_t64 * __this, TextReader_t67 * ___reader, bool ___owned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C" void JsonReader__cctor_m418 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowComments()
extern "C" bool JsonReader_get_AllowComments_m419 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
extern "C" void JsonReader_set_AllowComments_m420 (JsonReader_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
extern "C" bool JsonReader_get_AllowSingleQuotedStrings_m421 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
extern "C" void JsonReader_set_AllowSingleQuotedStrings_m422 (JsonReader_t64 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfInput()
extern "C" bool JsonReader_get_EndOfInput_m423 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::get_EndOfJson()
extern "C" bool JsonReader_get_EndOfJson_m424 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" int32_t JsonReader_get_Token_m425 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C" Object_t * JsonReader_get_Value_m426 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" void JsonReader_PopulateParseTable_m427 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" void JsonReader_TableAddCol_m428 (Object_t * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t76* ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" void JsonReader_TableAddRow_m429 (Object_t * __this /* static, unused */, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" void JsonReader_ProcessNumber_m430 (JsonReader_t64 * __this, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" void JsonReader_ProcessSymbol_m431 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" bool JsonReader_ReadToken_m432 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C" void JsonReader_Close_m433 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C" bool JsonReader_Read_m434 (JsonReader_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
