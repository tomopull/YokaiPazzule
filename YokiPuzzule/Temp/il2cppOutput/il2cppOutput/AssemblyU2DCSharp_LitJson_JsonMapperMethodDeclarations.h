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
struct JsonMapper_t63;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// LitJson.JsonReader
struct JsonReader_t76;
// LitJson.IJsonWrapper
struct IJsonWrapper_t136;
// LitJson.WrapperFactory
struct WrapperFactory_t67;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t70;
// LitJson.ImporterFunc
struct ImporterFunc_t66;
// LitJson.JsonWriter
struct JsonWriter_t64;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t12;
// System.IO.TextReader
struct TextReader_t79;

#include "codegen/il2cpp-codegen.h"

// System.Void LitJson.JsonMapper::.ctor()
extern "C" void JsonMapper__ctor_m432 (JsonMapper_t63 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::.cctor()
extern "C" void JsonMapper__cctor_m433 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C" void JsonMapper_AddArrayMetadata_m434 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C" void JsonMapper_AddObjectMetadata_m435 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C" void JsonMapper_AddTypeProperties_m436 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C" MethodInfo_t * JsonMapper_GetConvOp_m437 (Object_t * __this /* static, unused */, Type_t * ___t1, Type_t * ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m438 (Object_t * __this /* static, unused */, Type_t * ___inst_type, JsonReader_t76 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ReadValue_m439 (Object_t * __this /* static, unused */, WrapperFactory_t67 * ___factory, JsonReader_t76 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C" void JsonMapper_RegisterBaseExporters_m440 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C" void JsonMapper_RegisterBaseImporters_m441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C" void JsonMapper_RegisterImporter_m442 (Object_t * __this /* static, unused */, Object_t* ___table, Type_t * ___json_type, Type_t * ___value_type, ImporterFunc_t66 * ___importer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C" void JsonMapper_WriteValue_m443 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, bool ___writer_is_private, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C" String_t* JsonMapper_ToJson_m444 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_ToJson_m445 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
extern "C" JsonData_t12 * JsonMapper_ToObject_m446 (Object_t * __this /* static, unused */, JsonReader_t76 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
extern "C" JsonData_t12 * JsonMapper_ToObject_m447 (Object_t * __this /* static, unused */, TextReader_t79 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C" JsonData_t12 * JsonMapper_ToObject_m448 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C" Object_t * JsonMapper_ToWrapper_m449 (Object_t * __this /* static, unused */, WrapperFactory_t67 * ___factory, JsonReader_t76 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C" Object_t * JsonMapper_ToWrapper_m450 (Object_t * __this /* static, unused */, WrapperFactory_t67 * ___factory, String_t* ___json, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterExporters()
extern "C" void JsonMapper_UnregisterExporters_m451 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::UnregisterImporters()
extern "C" void JsonMapper_UnregisterImporters_m452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__0_m453 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__1_m454 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__2_m455 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__3_m456 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__4_m457 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__5_m458 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__6_m459 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__7_m460 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__8_m461 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C" void JsonMapper_U3CRegisterBaseExportersU3Em__9_m462 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__A_m463 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__B_m464 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__C_m465 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__D_m466 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__E_m467 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__F_m468 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__10_m469 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__11_m470 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__12_m471 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__13_m472 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__14_m473 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__15_m474 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__16(System.Object)
extern "C" Object_t * JsonMapper_U3CRegisterBaseImportersU3Em__16_m475 (Object_t * __this /* static, unused */, Object_t * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__17_m476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__18_m477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__19()
extern "C" Object_t * JsonMapper_U3CToObjectU3Em__19_m478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
