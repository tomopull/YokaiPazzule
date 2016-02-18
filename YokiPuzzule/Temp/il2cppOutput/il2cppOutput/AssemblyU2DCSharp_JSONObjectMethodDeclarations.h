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
struct JSONObject_t32;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t141;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t142;
// JSONObject/AddJSONContents
struct AddJSONContents_t30;
// JSONObject[]
struct JSONObjectU5BU5D_t143;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t35;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t36;
// System.String[]
struct StringU5BU5D_t144;
// System.Collections.IEnumerable
struct IEnumerable_t42;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t146;
// System.Text.StringBuilder
struct StringBuilder_t40;
// UnityEngine.WWWForm
struct WWWForm_t145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject_Type.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C" void JSONObject__ctor_m197 (JSONObject_t32 * __this, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C" void JSONObject__ctor_m198 (JSONObject_t32 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C" void JSONObject__ctor_m199 (JSONObject_t32 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int32)
extern "C" void JSONObject__ctor_m200 (JSONObject_t32 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int64)
extern "C" void JSONObject__ctor_m201 (JSONObject_t32 * __this, int64_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void JSONObject__ctor_m202 (JSONObject_t32 * __this, Dictionary_2_t141 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C" void JSONObject__ctor_m203 (JSONObject_t32 * __this, Dictionary_2_t142 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
extern "C" void JSONObject__ctor_m204 (JSONObject_t32 * __this, AddJSONContents_t30 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C" void JSONObject__ctor_m205 (JSONObject_t32 * __this, JSONObjectU5BU5D_t143* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C" void JSONObject__ctor_m206 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" void JSONObject__ctor_m207 (JSONObject_t32 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C" void JSONObject__cctor_m208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C" bool JSONObject_get_isContainer_m209 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C" int32_t JSONObject_get_Count_m210 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C" float JSONObject_get_f_m211 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C" JSONObject_t32 * JSONObject_get_nullJO_m212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C" JSONObject_t32 * JSONObject_get_obj_m213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C" JSONObject_t32 * JSONObject_get_arr_m214 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C" JSONObject_t32 * JSONObject_StringObject_m215 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C" void JSONObject_Absorb_m216 (JSONObject_t32 * __this, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C" JSONObject_t32 * JSONObject_Create_m217 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C" JSONObject_t32 * JSONObject_Create_m218 (Object_t * __this /* static, unused */, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C" JSONObject_t32 * JSONObject_Create_m219 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C" JSONObject_t32 * JSONObject_Create_m220 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C" JSONObject_t32 * JSONObject_Create_m221 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int64)
extern "C" JSONObject_t32 * JSONObject_Create_m222 (Object_t * __this /* static, unused */, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C" JSONObject_t32 * JSONObject_CreateStringObject_m223 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C" JSONObject_t32 * JSONObject_CreateBakedObject_m224 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" JSONObject_t32 * JSONObject_Create_m225 (Object_t * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
extern "C" JSONObject_t32 * JSONObject_Create_m226 (Object_t * __this /* static, unused */, AddJSONContents_t30 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" JSONObject_t32 * JSONObject_Create_m227 (Object_t * __this /* static, unused */, Dictionary_2_t141 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" void JSONObject_Parse_m228 (JSONObject_t32 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C" bool JSONObject_get_IsNumber_m229 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C" bool JSONObject_get_IsNull_m230 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C" bool JSONObject_get_IsString_m231 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C" bool JSONObject_get_IsBool_m232 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C" bool JSONObject_get_IsArray_m233 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C" bool JSONObject_get_IsObject_m234 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C" void JSONObject_Add_m235 (JSONObject_t32 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C" void JSONObject_Add_m236 (JSONObject_t32 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C" void JSONObject_Add_m237 (JSONObject_t32 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C" void JSONObject_Add_m238 (JSONObject_t32 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
extern "C" void JSONObject_Add_m239 (JSONObject_t32 * __this, AddJSONContents_t30 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C" void JSONObject_Add_m240 (JSONObject_t32 * __this, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C" void JSONObject_AddField_m241 (JSONObject_t32 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C" void JSONObject_AddField_m242 (JSONObject_t32 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C" void JSONObject_AddField_m243 (JSONObject_t32 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int64)
extern "C" void JSONObject_AddField_m244 (JSONObject_t32 * __this, String_t* ___name, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
extern "C" void JSONObject_AddField_m245 (JSONObject_t32 * __this, String_t* ___name, AddJSONContents_t30 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C" void JSONObject_AddField_m246 (JSONObject_t32 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C" void JSONObject_AddField_m247 (JSONObject_t32 * __this, String_t* ___name, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.String)
extern "C" void JSONObject_SetField_m248 (JSONObject_t32 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C" void JSONObject_SetField_m249 (JSONObject_t32 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C" void JSONObject_SetField_m250 (JSONObject_t32 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C" void JSONObject_SetField_m251 (JSONObject_t32 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C" void JSONObject_SetField_m252 (JSONObject_t32 * __this, String_t* ___name, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C" void JSONObject_RemoveField_m253 (JSONObject_t32 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
extern "C" bool JSONObject_GetField_m254 (JSONObject_t32 * __this, bool* ___field, String_t* ___name, bool ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m255 (JSONObject_t32 * __this, bool* ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
extern "C" bool JSONObject_GetField_m256 (JSONObject_t32 * __this, float* ___field, String_t* ___name, float ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m257 (JSONObject_t32 * __this, float* ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
extern "C" bool JSONObject_GetField_m258 (JSONObject_t32 * __this, int32_t* ___field, String_t* ___name, int32_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m259 (JSONObject_t32 * __this, int32_t* ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
extern "C" bool JSONObject_GetField_m260 (JSONObject_t32 * __this, int64_t* ___field, String_t* ___name, int64_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m261 (JSONObject_t32 * __this, int64_t* ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
extern "C" bool JSONObject_GetField_m262 (JSONObject_t32 * __this, uint32_t* ___field, String_t* ___name, uint32_t ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m263 (JSONObject_t32 * __this, uint32_t* ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
extern "C" bool JSONObject_GetField_m264 (JSONObject_t32 * __this, String_t** ___field, String_t* ___name, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C" bool JSONObject_GetField_m265 (JSONObject_t32 * __this, String_t** ___field, String_t* ___name, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C" void JSONObject_GetField_m266 (JSONObject_t32 * __this, String_t* ___name, GetFieldResponse_t36 * ___response, FieldNotFound_t35 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C" JSONObject_t32 * JSONObject_GetField_m267 (JSONObject_t32 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C" bool JSONObject_HasFields_m268 (JSONObject_t32 * __this, StringU5BU5D_t144* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C" bool JSONObject_HasField_m269 (JSONObject_t32 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C" void JSONObject_Clear_m270 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C" JSONObject_t32 * JSONObject_Copy_m271 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C" void JSONObject_Merge_m272 (JSONObject_t32 * __this, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C" void JSONObject_MergeRecur_m273 (Object_t * __this /* static, unused */, JSONObject_t32 * ___left, JSONObject_t32 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C" void JSONObject_Bake_m274 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C" Object_t * JSONObject_BakeAsync_m275 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C" String_t* JSONObject_Print_m276 (JSONObject_t32 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C" Object_t* JSONObject_PrintAsync_m277 (JSONObject_t32 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C" Object_t * JSONObject_StringifyAsync_m278 (JSONObject_t32 * __this, int32_t ___depth, StringBuilder_t40 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C" void JSONObject_Stringify_m279 (JSONObject_t32 * __this, int32_t ___depth, StringBuilder_t40 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C" JSONObject_t32 * JSONObject_get_Item_m280 (JSONObject_t32 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C" void JSONObject_set_Item_m281 (JSONObject_t32 * __this, int32_t ___index, JSONObject_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C" JSONObject_t32 * JSONObject_get_Item_m282 (JSONObject_t32 * __this, String_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C" void JSONObject_set_Item_m283 (JSONObject_t32 * __this, String_t* ___index, JSONObject_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C" String_t* JSONObject_ToString_m284 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C" String_t* JSONObject_ToString_m285 (JSONObject_t32 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C" Dictionary_2_t141 * JSONObject_ToDictionary_m286 (JSONObject_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C" WWWForm_t145 * JSONObject_op_Implicit_m287 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C" bool JSONObject_op_Implicit_m288 (Object_t * __this /* static, unused */, JSONObject_t32 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
