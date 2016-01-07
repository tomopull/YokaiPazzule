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

// JSONObject
struct JSONObject_t20;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t101;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t102;
// JSONObject/AddJSONContents
struct AddJSONContents_t18;
// JSONObject[]
struct JSONObjectU5BU5D_t103;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t23;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t24;
// System.String[]
struct StringU5BU5D_t104;
// System.Collections.IEnumerable
struct IEnumerable_t30;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t106;
// System.Text.StringBuilder
struct StringBuilder_t28;
// UnityEngine.WWWForm
struct WWWForm_t105;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject_Type.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C" void JSONObject__ctor_m133 (JSONObject_t20 * __this, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C" void JSONObject__ctor_m134 (JSONObject_t20 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C" void JSONObject__ctor_m135 (JSONObject_t20 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int32)
extern "C" void JSONObject__ctor_m136 (JSONObject_t20 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int64)
extern "C" void JSONObject__ctor_m137 (JSONObject_t20 * __this, int64_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void JSONObject__ctor_m138 (JSONObject_t20 * __this, Dictionary_2_t101 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C" void JSONObject__ctor_m139 (JSONObject_t20 * __this, Dictionary_2_t102 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
extern "C" void JSONObject__ctor_m140 (JSONObject_t20 * __this, AddJSONContents_t18 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C" void JSONObject__ctor_m141 (JSONObject_t20 * __this, JSONObjectU5BU5D_t103* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C" void JSONObject__ctor_m142 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" void JSONObject__ctor_m143 (JSONObject_t20 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C" void JSONObject__cctor_m144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C" bool JSONObject_get_isContainer_m145 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C" int32_t JSONObject_get_Count_m146 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C" float JSONObject_get_f_m147 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C" JSONObject_t20 * JSONObject_get_nullJO_m148 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C" JSONObject_t20 * JSONObject_get_obj_m149 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C" JSONObject_t20 * JSONObject_get_arr_m150 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C" JSONObject_t20 * JSONObject_StringObject_m151 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C" void JSONObject_Absorb_m152 (JSONObject_t20 * __this, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C" JSONObject_t20 * JSONObject_Create_m153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C" JSONObject_t20 * JSONObject_Create_m154 (Object_t * __this /* static, unused */, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C" JSONObject_t20 * JSONObject_Create_m155 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C" JSONObject_t20 * JSONObject_Create_m156 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C" JSONObject_t20 * JSONObject_Create_m157 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int64)
extern "C" JSONObject_t20 * JSONObject_Create_m158 (Object_t * __this /* static, unused */, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C" JSONObject_t20 * JSONObject_CreateStringObject_m159 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C" JSONObject_t20 * JSONObject_CreateBakedObject_m160 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" JSONObject_t20 * JSONObject_Create_m161 (Object_t * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
extern "C" JSONObject_t20 * JSONObject_Create_m162 (Object_t * __this /* static, unused */, AddJSONContents_t18 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" JSONObject_t20 * JSONObject_Create_m163 (Object_t * __this /* static, unused */, Dictionary_2_t101 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" void JSONObject_Parse_m164 (JSONObject_t20 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C" bool JSONObject_get_IsNumber_m165 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C" bool JSONObject_get_IsNull_m166 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C" bool JSONObject_get_IsString_m167 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C" bool JSONObject_get_IsBool_m168 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C" bool JSONObject_get_IsArray_m169 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C" bool JSONObject_get_IsObject_m170 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C" void JSONObject_Add_m171 (JSONObject_t20 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C" void JSONObject_Add_m172 (JSONObject_t20 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C" void JSONObject_Add_m173 (JSONObject_t20 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C" void JSONObject_Add_m174 (JSONObject_t20 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
extern "C" void JSONObject_Add_m175 (JSONObject_t20 * __this, AddJSONContents_t18 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C" void JSONObject_Add_m176 (JSONObject_t20 * __this, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C" void JSONObject_AddField_m177 (JSONObject_t20 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C" void JSONObject_AddField_m178 (JSONObject_t20 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C" void JSONObject_AddField_m179 (JSONObject_t20 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int64)
extern "C" void JSONObject_AddField_m180 (JSONObject_t20 * __this, String_t* ___name, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
extern "C" void JSONObject_AddField_m181 (JSONObject_t20 * __this, String_t* ___name, AddJSONContents_t18 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C" void JSONObject_AddField_m182 (JSONObject_t20 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C" void JSONObject_AddField_m183 (JSONObject_t20 * __this, String_t* ___name, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.String)
extern "C" void JSONObject_SetField_m184 (JSONObject_t20 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C" void JSONObject_SetField_m185 (JSONObject_t20 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C" void JSONObject_SetField_m186 (JSONObject_t20 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C" void JSONObject_SetField_m187 (JSONObject_t20 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C" void JSONObject_SetField_m188 (JSONObject_t20 * __this, String_t* ___name, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C" void JSONObject_RemoveField_m189 (JSONObject_t20 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
extern "C" bool JSONObject_GetField_m190 (JSONObject_t20 * __this, bool* ___field, String_t* ___name, bool ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m191 (JSONObject_t20 * __this, bool* ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
extern "C" bool JSONObject_GetField_m192 (JSONObject_t20 * __this, float* ___field, String_t* ___name, float ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m193 (JSONObject_t20 * __this, float* ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
extern "C" bool JSONObject_GetField_m194 (JSONObject_t20 * __this, int32_t* ___field, String_t* ___name, int32_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m195 (JSONObject_t20 * __this, int32_t* ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
extern "C" bool JSONObject_GetField_m196 (JSONObject_t20 * __this, int64_t* ___field, String_t* ___name, int64_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m197 (JSONObject_t20 * __this, int64_t* ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
extern "C" bool JSONObject_GetField_m198 (JSONObject_t20 * __this, uint32_t* ___field, String_t* ___name, uint32_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m199 (JSONObject_t20 * __this, uint32_t* ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
extern "C" bool JSONObject_GetField_m200 (JSONObject_t20 * __this, String_t** ___field, String_t* ___name, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m201 (JSONObject_t20 * __this, String_t** ___field, String_t* ___name, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C" void JSONObject_GetField_m202 (JSONObject_t20 * __this, String_t* ___name, GetFieldResponse_t24 * ___response, FieldNotFound_t23 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C" JSONObject_t20 * JSONObject_GetField_m203 (JSONObject_t20 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C" bool JSONObject_HasFields_m204 (JSONObject_t20 * __this, StringU5BU5D_t104* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C" bool JSONObject_HasField_m205 (JSONObject_t20 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C" void JSONObject_Clear_m206 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C" JSONObject_t20 * JSONObject_Copy_m207 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C" void JSONObject_Merge_m208 (JSONObject_t20 * __this, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C" void JSONObject_MergeRecur_m209 (Object_t * __this /* static, unused */, JSONObject_t20 * ___left, JSONObject_t20 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C" void JSONObject_Bake_m210 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C" Object_t * JSONObject_BakeAsync_m211 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C" String_t* JSONObject_Print_m212 (JSONObject_t20 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C" Object_t* JSONObject_PrintAsync_m213 (JSONObject_t20 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C" Object_t * JSONObject_StringifyAsync_m214 (JSONObject_t20 * __this, int32_t ___depth, StringBuilder_t28 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C" void JSONObject_Stringify_m215 (JSONObject_t20 * __this, int32_t ___depth, StringBuilder_t28 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C" JSONObject_t20 * JSONObject_get_Item_m216 (JSONObject_t20 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C" void JSONObject_set_Item_m217 (JSONObject_t20 * __this, int32_t ___index, JSONObject_t20 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C" JSONObject_t20 * JSONObject_get_Item_m218 (JSONObject_t20 * __this, String_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C" void JSONObject_set_Item_m219 (JSONObject_t20 * __this, String_t* ___index, JSONObject_t20 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C" String_t* JSONObject_ToString_m220 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C" String_t* JSONObject_ToString_m221 (JSONObject_t20 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C" Dictionary_2_t101 * JSONObject_ToDictionary_m222 (JSONObject_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C" WWWForm_t105 * JSONObject_op_Implicit_m223 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C" bool JSONObject_op_Implicit_m224 (Object_t * __this /* static, unused */, JSONObject_t20 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
