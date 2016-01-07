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

// LitJson.JsonData
struct JsonData_t7;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t116;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// LitJson.JsonWriter
struct JsonWriter_t52;
// System.Collections.IDictionary
struct IDictionary_t118;
// System.Collections.IList
struct IList_t119;
// LitJson.IJsonWrapper
struct IJsonWrapper_t95;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JsonType.h"

// System.Void LitJson.JsonData::.ctor()
extern "C" void JsonData__ctor_m249 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
extern "C" void JsonData__ctor_m250 (JsonData_t7 * __this, bool ___boolean, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
extern "C" void JsonData__ctor_m251 (JsonData_t7 * __this, double ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
extern "C" void JsonData__ctor_m252 (JsonData_t7 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
extern "C" void JsonData__ctor_m253 (JsonData_t7 * __this, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C" void JsonData__ctor_m254 (JsonData_t7 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
extern "C" void JsonData__ctor_m255 (JsonData_t7 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C" int32_t JsonData_System_Collections_ICollection_get_Count_m256 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool JsonData_System_Collections_ICollection_get_IsSynchronized_m257 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m258 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m259 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m260 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Keys_m261 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Values_m262 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsArray_m263 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m264 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m265 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsInt_m266 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsLong_m267 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsObject_m268 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsString_m269 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C" bool JsonData_System_Collections_IList_get_IsFixedSize_m270 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C" bool JsonData_System_Collections_IList_get_IsReadOnly_m271 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Item_m272 (JsonData_t7 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_set_Item_m273 (JsonData_t7 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m274 (JsonData_t7 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m275 (JsonData_t7 * __this, int32_t ___idx, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * JsonData_System_Collections_IList_get_Item_m276 (JsonData_t7 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_set_Item_m277 (JsonData_t7 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void JsonData_System_Collections_ICollection_CopyTo_m278 (JsonData_t7 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Add_m279 (JsonData_t7 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
extern "C" void JsonData_System_Collections_IDictionary_Clear_m280 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IDictionary_Contains_m281 (JsonData_t7 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m282 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Remove_m283 (JsonData_t7 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m284 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_GetBoolean_m285 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
extern "C" double JsonData_LitJson_IJsonWrapper_GetDouble_m286 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
extern "C" int32_t JsonData_LitJson_IJsonWrapper_GetInt_m287 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
extern "C" int64_t JsonData_LitJson_IJsonWrapper_GetLong_m288 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_GetString_m289 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C" void JsonData_LitJson_IJsonWrapper_SetBoolean_m290 (JsonData_t7 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C" void JsonData_LitJson_IJsonWrapper_SetDouble_m291 (JsonData_t7 * __this, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C" void JsonData_LitJson_IJsonWrapper_SetInt_m292 (JsonData_t7 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C" void JsonData_LitJson_IJsonWrapper_SetLong_m293 (JsonData_t7 * __this, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C" void JsonData_LitJson_IJsonWrapper_SetString_m294 (JsonData_t7 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_ToJson_m295 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
extern "C" void JsonData_LitJson_IJsonWrapper_ToJson_m296 (JsonData_t7 * __this, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_Add_m297 (JsonData_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C" void JsonData_System_Collections_IList_Clear_m298 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IList_Contains_m299 (JsonData_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_IndexOf_m300 (JsonData_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_Insert_m301 (JsonData_t7 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C" void JsonData_System_Collections_IList_Remove_m302 (JsonData_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void JsonData_System_Collections_IList_RemoveAt_m303 (JsonData_t7 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m304 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m305 (JsonData_t7 * __this, int32_t ___idx, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m306 (JsonData_t7 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C" int32_t JsonData_get_Count_m307 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
extern "C" bool JsonData_get_IsArray_m308 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
extern "C" bool JsonData_get_IsBoolean_m309 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
extern "C" bool JsonData_get_IsDouble_m310 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
extern "C" bool JsonData_get_IsInt_m311 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
extern "C" bool JsonData_get_IsLong_m312 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
extern "C" bool JsonData_get_IsObject_m313 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
extern "C" bool JsonData_get_IsString_m314 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C" JsonData_t7 * JsonData_get_Item_m315 (JsonData_t7 * __this, String_t* ___prop_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C" void JsonData_set_Item_m316 (JsonData_t7 * __this, String_t* ___prop_name, JsonData_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C" JsonData_t7 * JsonData_get_Item_m317 (JsonData_t7 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C" void JsonData_set_Item_m318 (JsonData_t7 * __this, int32_t ___index, JsonData_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C" Object_t * JsonData_EnsureCollection_m319 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C" Object_t * JsonData_EnsureDictionary_m320 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C" Object_t * JsonData_EnsureList_m321 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C" JsonData_t7 * JsonData_ToJsonData_m322 (JsonData_t7 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
extern "C" void JsonData_WriteJson_m323 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C" int32_t JsonData_Add_m324 (JsonData_t7 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
extern "C" void JsonData_Clear_m325 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C" bool JsonData_Equals_m326 (JsonData_t7 * __this, JsonData_t7 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
extern "C" int32_t JsonData_GetJsonType_m327 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C" void JsonData_SetJsonType_m328 (JsonData_t7 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
extern "C" String_t* JsonData_ToJson_m329 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
extern "C" void JsonData_ToJson_m330 (JsonData_t7 * __this, JsonWriter_t52 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C" String_t* JsonData_ToString_m331 (JsonData_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
extern "C" JsonData_t7 * JsonData_op_Implicit_m332 (Object_t * __this /* static, unused */, bool ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
extern "C" JsonData_t7 * JsonData_op_Implicit_m333 (Object_t * __this /* static, unused */, double ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
extern "C" JsonData_t7 * JsonData_op_Implicit_m334 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
extern "C" JsonData_t7 * JsonData_op_Implicit_m335 (Object_t * __this /* static, unused */, int64_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
extern "C" JsonData_t7 * JsonData_op_Implicit_m336 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" bool JsonData_op_Explicit_m337 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" double JsonData_op_Explicit_m338 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" int32_t JsonData_op_Explicit_m339 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" int64_t JsonData_op_Explicit_m340 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" String_t* JsonData_op_Explicit_m341 (Object_t * __this /* static, unused */, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
