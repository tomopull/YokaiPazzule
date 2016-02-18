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
struct JsonData_t12;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t154;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t155;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// LitJson.JsonWriter
struct JsonWriter_t64;
// System.Collections.IDictionary
struct IDictionary_t156;
// System.Collections.IList
struct IList_t157;
// LitJson.IJsonWrapper
struct IJsonWrapper_t136;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_JsonType.h"

// System.Void LitJson.JsonData::.ctor()
extern "C" void JsonData__ctor_m313 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
extern "C" void JsonData__ctor_m314 (JsonData_t12 * __this, bool ___boolean, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
extern "C" void JsonData__ctor_m315 (JsonData_t12 * __this, double ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
extern "C" void JsonData__ctor_m316 (JsonData_t12 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
extern "C" void JsonData__ctor_m317 (JsonData_t12 * __this, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
extern "C" void JsonData__ctor_m318 (JsonData_t12 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
extern "C" void JsonData__ctor_m319 (JsonData_t12 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
extern "C" int32_t JsonData_System_Collections_ICollection_get_Count_m320 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool JsonData_System_Collections_ICollection_get_IsSynchronized_m321 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m322 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m323 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m324 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Keys_m325 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Values_m326 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsArray_m327 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m328 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m329 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsInt_m330 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsLong_m331 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsObject_m332 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
extern "C" bool JsonData_LitJson_IJsonWrapper_get_IsString_m333 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
extern "C" bool JsonData_System_Collections_IList_get_IsFixedSize_m334 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
extern "C" bool JsonData_System_Collections_IList_get_IsReadOnly_m335 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * JsonData_System_Collections_IDictionary_get_Item_m336 (JsonData_t12 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_set_Item_m337 (JsonData_t12 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m338 (JsonData_t12 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m339 (JsonData_t12 * __this, int32_t ___idx, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * JsonData_System_Collections_IList_get_Item_m340 (JsonData_t12 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_set_Item_m341 (JsonData_t12 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void JsonData_System_Collections_ICollection_CopyTo_m342 (JsonData_t12 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Add_m343 (JsonData_t12 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
extern "C" void JsonData_System_Collections_IDictionary_Clear_m344 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IDictionary_Contains_m345 (JsonData_t12 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m346 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
extern "C" void JsonData_System_Collections_IDictionary_Remove_m347 (JsonData_t12 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m348 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
extern "C" bool JsonData_LitJson_IJsonWrapper_GetBoolean_m349 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
extern "C" double JsonData_LitJson_IJsonWrapper_GetDouble_m350 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
extern "C" int32_t JsonData_LitJson_IJsonWrapper_GetInt_m351 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
extern "C" int64_t JsonData_LitJson_IJsonWrapper_GetLong_m352 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_GetString_m353 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
extern "C" void JsonData_LitJson_IJsonWrapper_SetBoolean_m354 (JsonData_t12 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
extern "C" void JsonData_LitJson_IJsonWrapper_SetDouble_m355 (JsonData_t12 * __this, double ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
extern "C" void JsonData_LitJson_IJsonWrapper_SetInt_m356 (JsonData_t12 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
extern "C" void JsonData_LitJson_IJsonWrapper_SetLong_m357 (JsonData_t12 * __this, int64_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
extern "C" void JsonData_LitJson_IJsonWrapper_SetString_m358 (JsonData_t12 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
extern "C" String_t* JsonData_LitJson_IJsonWrapper_ToJson_m359 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
extern "C" void JsonData_LitJson_IJsonWrapper_ToJson_m360 (JsonData_t12 * __this, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_Add_m361 (JsonData_t12 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
extern "C" void JsonData_System_Collections_IList_Clear_m362 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
extern "C" bool JsonData_System_Collections_IList_Contains_m363 (JsonData_t12 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t JsonData_System_Collections_IList_IndexOf_m364 (JsonData_t12 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void JsonData_System_Collections_IList_Insert_m365 (JsonData_t12 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
extern "C" void JsonData_System_Collections_IList_Remove_m366 (JsonData_t12 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void JsonData_System_Collections_IList_RemoveAt_m367 (JsonData_t12 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
extern "C" Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m368 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m369 (JsonData_t12 * __this, int32_t ___idx, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
extern "C" void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m370 (JsonData_t12 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
extern "C" int32_t JsonData_get_Count_m371 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
extern "C" bool JsonData_get_IsArray_m372 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
extern "C" bool JsonData_get_IsBoolean_m373 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
extern "C" bool JsonData_get_IsDouble_m374 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
extern "C" bool JsonData_get_IsInt_m375 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
extern "C" bool JsonData_get_IsLong_m376 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
extern "C" bool JsonData_get_IsObject_m377 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
extern "C" bool JsonData_get_IsString_m378 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
extern "C" JsonData_t12 * JsonData_get_Item_m379 (JsonData_t12 * __this, String_t* ___prop_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
extern "C" void JsonData_set_Item_m380 (JsonData_t12 * __this, String_t* ___prop_name, JsonData_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
extern "C" JsonData_t12 * JsonData_get_Item_m381 (JsonData_t12 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
extern "C" void JsonData_set_Item_m382 (JsonData_t12 * __this, int32_t ___index, JsonData_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
extern "C" Object_t * JsonData_EnsureCollection_m383 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
extern "C" Object_t * JsonData_EnsureDictionary_m384 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
extern "C" Object_t * JsonData_EnsureList_m385 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
extern "C" JsonData_t12 * JsonData_ToJsonData_m386 (JsonData_t12 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
extern "C" void JsonData_WriteJson_m387 (Object_t * __this /* static, unused */, Object_t * ___obj, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
extern "C" int32_t JsonData_Add_m388 (JsonData_t12 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
extern "C" void JsonData_Clear_m389 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
extern "C" bool JsonData_Equals_m390 (JsonData_t12 * __this, JsonData_t12 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
extern "C" int32_t JsonData_GetJsonType_m391 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
extern "C" void JsonData_SetJsonType_m392 (JsonData_t12 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
extern "C" String_t* JsonData_ToJson_m393 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
extern "C" void JsonData_ToJson_m394 (JsonData_t12 * __this, JsonWriter_t64 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
extern "C" String_t* JsonData_ToString_m395 (JsonData_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
extern "C" JsonData_t12 * JsonData_op_Implicit_m396 (Object_t * __this /* static, unused */, bool ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
extern "C" JsonData_t12 * JsonData_op_Implicit_m397 (Object_t * __this /* static, unused */, double ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
extern "C" JsonData_t12 * JsonData_op_Implicit_m398 (Object_t * __this /* static, unused */, int32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
extern "C" JsonData_t12 * JsonData_op_Implicit_m399 (Object_t * __this /* static, unused */, int64_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
extern "C" JsonData_t12 * JsonData_op_Implicit_m400 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" bool JsonData_op_Explicit_m401 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" double JsonData_op_Explicit_m402 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" int32_t JsonData_op_Explicit_m403 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" int64_t JsonData_op_Explicit_m404 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
extern "C" String_t* JsonData_op_Explicit_m405 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
