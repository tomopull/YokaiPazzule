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

// GameModel
struct GameModel_t6;
// LitJson.JsonData
struct JsonData_t7;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t8;
// ObjectData
struct ObjectData_t10;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void GameModel::.ctor()
extern "C" void GameModel__ctor_m4 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::.cctor()
extern "C" void GameModel__cctor_m5 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_TotalObjectCount()
extern "C" int32_t GameModel_get_TotalObjectCount_m6 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TotalObjectCount(System.Int32)
extern "C" void GameModel_set_TotalObjectCount_m7 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_GameTime()
extern "C" float GameModel_get_GameTime_m8 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_GameTime(System.Single)
extern "C" void GameModel_set_GameTime_m9 (GameModel_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_TotalPoint()
extern "C" int32_t GameModel_get_TotalPoint_m10 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TotalPoint(System.Int32)
extern "C" void GameModel_set_TotalPoint_m11 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData GameModel::get_OriginalJsonData()
extern "C" JsonData_t7 * GameModel_get_OriginalJsonData_m12 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_OriginalJsonData(LitJson.JsonData)
extern "C" void GameModel_set_OriginalJsonData_m13 (GameModel_t6 * __this, JsonData_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_RowCount()
extern "C" int32_t GameModel_get_RowCount_m14 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_RowCount(System.Int32)
extern "C" void GameModel_set_RowCount_m15 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_ColumnCount()
extern "C" int32_t GameModel_get_ColumnCount_m16 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_ColumnCount(System.Int32)
extern "C" void GameModel_set_ColumnCount_m17 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::get_ObjectDataDict()
extern "C" Dictionary_2_t8 * GameModel_get_ObjectDataDict_m18 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_ObjectDataDict(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameModel_set_ObjectDataDict_m19 (GameModel_t6 * __this, Dictionary_2_t8 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameModel::get_IsInteractive()
extern "C" bool GameModel_get_IsInteractive_m20 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_IsInteractive(System.Boolean)
extern "C" void GameModel_set_IsInteractive_m21 (GameModel_t6 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch GameModel::get_DeviceTouch()
extern "C" Touch_t9  GameModel_get_DeviceTouch_m22 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_DeviceTouch(UnityEngine.Touch)
extern "C" void GameModel_set_DeviceTouch_m23 (GameModel_t6 * __this, Touch_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_SwipeTime()
extern "C" float GameModel_get_SwipeTime_m24 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SwipeTime(System.Single)
extern "C" void GameModel_set_SwipeTime_m25 (GameModel_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_SwipeDistance()
extern "C" float GameModel_get_SwipeDistance_m26 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SwipeDistance(System.Single)
extern "C" void GameModel_set_SwipeDistance_m27 (GameModel_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameModel::get_IsButtonDown()
extern "C" bool GameModel_get_IsButtonDown_m28 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_IsButtonDown(System.Boolean)
extern "C" void GameModel_set_IsButtonDown_m29 (GameModel_t6 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_FirstObjectSelectedCategory()
extern "C" int32_t GameModel_get_FirstObjectSelectedCategory_m30 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_FirstObjectSelectedCategory(System.Int32)
extern "C" void GameModel_set_FirstObjectSelectedCategory_m31 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_TouchDistance()
extern "C" float GameModel_get_TouchDistance_m32 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TouchDistance(System.Single)
extern "C" void GameModel_set_TouchDistance_m33 (GameModel_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_LastButOneObjectSelected()
extern "C" ObjectData_t10 * GameModel_get_LastButOneObjectSelected_m34 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_LastButOneObjectSelected(ObjectData)
extern "C" void GameModel_set_LastButOneObjectSelected_m35 (GameModel_t6 * __this, ObjectData_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_LastObjectSelected()
extern "C" ObjectData_t10 * GameModel_get_LastObjectSelected_m36 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_LastObjectSelected(ObjectData)
extern "C" void GameModel_set_LastObjectSelected_m37 (GameModel_t6 * __this, ObjectData_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_NearestObj()
extern "C" ObjectData_t10 * GameModel_get_NearestObj_m38 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_NearestObj(ObjectData)
extern "C" void GameModel_set_NearestObj_m39 (GameModel_t6 * __this, ObjectData_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_NearestDist()
extern "C" float GameModel_get_NearestDist_m40 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_NearestDist(System.Single)
extern "C" void GameModel_set_NearestDist_m41 (GameModel_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::get_SelectedObjectDataDict()
extern "C" Dictionary_2_t8 * GameModel_get_SelectedObjectDataDict_m42 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SelectedObjectDataDict(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameModel_set_SelectedObjectDataDict_m43 (GameModel_t6 * __this, Dictionary_2_t8 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_MinimumNumberOfObjectData()
extern "C" int32_t GameModel_get_MinimumNumberOfObjectData_m44 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_MinimumNumberOfObjectData(System.Int32)
extern "C" void GameModel_set_MinimumNumberOfObjectData_m45 (GameModel_t6 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GameModel::GetUniqueIndex()
extern "C" uint64_t GameModel_GetUniqueIndex_m46 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameModel::get_Json_Path()
extern "C" String_t* GameModel_get_Json_Path_m47 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameModel GameModel::get_Instance()
extern "C" GameModel_t6 * GameModel_get_Instance_m48 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::Init()
extern "C" void GameModel_Init_m49 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::Awake()
extern "C" void GameModel_Awake_m50 (GameModel_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
