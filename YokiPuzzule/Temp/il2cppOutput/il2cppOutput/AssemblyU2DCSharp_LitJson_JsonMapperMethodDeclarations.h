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

// LitJson.JsonMapper
struct JsonMapper_t51;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// LitJson.JsonReader
struct JsonReader_t64;
// LitJson.IJsonWrapper
struct IJsonWrapper_t95;
// LitJson.WrapperFactory
struct WrapperFactory_t55;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t58;
// LitJson.ImporterFunc
struct ImporterFunc_t54;
// LitJson.JsonWriter
struct JsonWriter_t52;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t7;
// System.IO.TextReader
struct TextReader_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void LitJson.JsonMapper::.ctor()
extern "C" void JsonMapper__ctor_m368 (JsonMapper_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.cctor()
extern "C" void JsonMapper__cctor_m369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C" void JsonMapper_AddArrayMetadata_m370 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C" void JsonMapper_AddObjectMetadata_m371 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C" void JsonMapper_AddTypeProperties_m372 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C" MethodInfo_t * JsonMapper_GetConvOp_m373 (Object_t * __this /* static, unused */, Type_t * ___t1, Type_t * ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m374 (Object_t * __this /* static, unused */, Type_t * ___inst_type, JsonReader_t64 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m375 (Object_t * __this /* static, unused */, WrapperFactory_t55 * ___factory, JsonReader_t64 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" void JsonMapper_RegisterBaseExporters_m376 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" void JsonMapper_RegisterBaseImporters_m377 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" void JsonMapper_RegisterImporter_m378 (Object_t * __this /* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t54 * ___importer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C" void JsonMapper_WriteValue_m379 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, bool ___writer_is_private, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C" String_t* JsonMapper_ToJson_m380 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_ToJson_m381 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
extern "C" JsonData_t7 * JsonMapper_ToObject_m382 (Object_t * __this /* static, unused */, JsonReader_t64 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
extern "C" JsonData_t7 * JsonMapper_ToObject_m383 (Object_t * __this /* static, unused */, TextReader_t67 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C" JsonData_t7 * JsonMapper_ToObject_m384 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ToWrapper_m385 (Object_t * __this /* static, unused */, WrapperFactory_t55 * ___factory, JsonReader_t64 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" Object_t * JsonMapper_ToWrapper_m386 (Object_t * __this /* static, unused */, WrapperFactory_t55 * ___factory, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
extern "C" void JsonMapper_UnregisterExporters_m387 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
extern "C" void JsonMapper_UnregisterImporters_m388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__0_m389 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__1_m390 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__2_m391 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__3_m392 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__4_m393 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__5_m394 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__6_m395 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__7_m396 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__8_m397 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__9_m398 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m399 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m400 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m401 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m402 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m403 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m404 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m405 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m406 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m407 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m408 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m409 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m410 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__16(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__16_m411 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__17_m412 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__18_m413 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__19()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__19_m414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
