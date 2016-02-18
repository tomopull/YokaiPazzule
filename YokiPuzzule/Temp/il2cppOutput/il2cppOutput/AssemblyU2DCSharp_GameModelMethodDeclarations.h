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
struct GameModel_t5;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t12;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t13;
// ObjectData
struct ObjectData_t1;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct List_1_t15;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t16;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void GameModel::.ctor()
extern "C" void GameModel__ctor_m34 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::.cctor()
extern "C" void GameModel__cctor_m35 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameModel::get_PrefabResourcePath()
extern "C" String_t* GameModel_get_PrefabResourcePath_m36 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_PrefabResourcePath(System.String)
extern "C" void GameModel_set_PrefabResourcePath_m37 (GameModel_t5 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameModel::get_NowState()
extern "C" String_t* GameModel_get_NowState_m38 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_NowState(System.String)
extern "C" void GameModel_set_NowState_m39 (GameModel_t5 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_TotalObjectCount()
extern "C" int32_t GameModel_get_TotalObjectCount_m40 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TotalObjectCount(System.Int32)
extern "C" void GameModel_set_TotalObjectCount_m41 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_GameTime()
extern "C" float GameModel_get_GameTime_m42 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_GameTime(System.Single)
extern "C" void GameModel_set_GameTime_m43 (GameModel_t5 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_LineNum()
extern "C" int32_t GameModel_get_LineNum_m44 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_LineNum(System.Int32)
extern "C" void GameModel_set_LineNum_m45 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_TotalPoint()
extern "C" int32_t GameModel_get_TotalPoint_m46 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TotalPoint(System.Int32)
extern "C" void GameModel_set_TotalPoint_m47 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_highestTotalPoint()
extern "C" int32_t GameModel_get_highestTotalPoint_m48 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_highestTotalPoint(System.Int32)
extern "C" void GameModel_set_highestTotalPoint_m49 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData GameModel::get_OriginalJsonData()
extern "C" JsonData_t12 * GameModel_get_OriginalJsonData_m50 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_OriginalJsonData(LitJson.JsonData)
extern "C" void GameModel_set_OriginalJsonData_m51 (GameModel_t5 * __this, JsonData_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_RowCount()
extern "C" int32_t GameModel_get_RowCount_m52 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_RowCount(System.Int32)
extern "C" void GameModel_set_RowCount_m53 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_ColumnCount()
extern "C" int32_t GameModel_get_ColumnCount_m54 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_ColumnCount(System.Int32)
extern "C" void GameModel_set_ColumnCount_m55 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::get_ObjectDataDict()
extern "C" Dictionary_2_t13 * GameModel_get_ObjectDataDict_m56 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_ObjectDataDict(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameModel_set_ObjectDataDict_m57 (GameModel_t5 * __this, Dictionary_2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameModel::get_IsInteractive()
extern "C" bool GameModel_get_IsInteractive_m58 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_IsInteractive(System.Boolean)
extern "C" void GameModel_set_IsInteractive_m59 (GameModel_t5 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch GameModel::get_DeviceTouch()
extern "C" Touch_t14  GameModel_get_DeviceTouch_m60 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_DeviceTouch(UnityEngine.Touch)
extern "C" void GameModel_set_DeviceTouch_m61 (GameModel_t5 * __this, Touch_t14  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_SwipeTime()
extern "C" float GameModel_get_SwipeTime_m62 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SwipeTime(System.Single)
extern "C" void GameModel_set_SwipeTime_m63 (GameModel_t5 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_SwipeDistance()
extern "C" float GameModel_get_SwipeDistance_m64 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SwipeDistance(System.Single)
extern "C" void GameModel_set_SwipeDistance_m65 (GameModel_t5 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameModel::get_IsButtonDown()
extern "C" bool GameModel_get_IsButtonDown_m66 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_IsButtonDown(System.Boolean)
extern "C" void GameModel_set_IsButtonDown_m67 (GameModel_t5 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_FirstObjectSelectedCategory()
extern "C" int32_t GameModel_get_FirstObjectSelectedCategory_m68 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_FirstObjectSelectedCategory(System.Int32)
extern "C" void GameModel_set_FirstObjectSelectedCategory_m69 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_TouchDistance()
extern "C" float GameModel_get_TouchDistance_m70 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_TouchDistance(System.Single)
extern "C" void GameModel_set_TouchDistance_m71 (GameModel_t5 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_LastButOneObjectSelected()
extern "C" ObjectData_t1 * GameModel_get_LastButOneObjectSelected_m72 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_LastButOneObjectSelected(ObjectData)
extern "C" void GameModel_set_LastButOneObjectSelected_m73 (GameModel_t5 * __this, ObjectData_t1 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_LastObjectSelected()
extern "C" ObjectData_t1 * GameModel_get_LastObjectSelected_m74 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_LastObjectSelected(ObjectData)
extern "C" void GameModel_set_LastObjectSelected_m75 (GameModel_t5 * __this, ObjectData_t1 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectData GameModel::get_NearestObj()
extern "C" ObjectData_t1 * GameModel_get_NearestObj_m76 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_NearestObj(ObjectData)
extern "C" void GameModel_set_NearestObj_m77 (GameModel_t5 * __this, ObjectData_t1 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameModel::get_NearestDist()
extern "C" float GameModel_get_NearestDist_m78 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_NearestDist(System.Single)
extern "C" void GameModel_set_NearestDist_m79 (GameModel_t5 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::get_SelectedObjectDataDict()
extern "C" Dictionary_2_t13 * GameModel_get_SelectedObjectDataDict_m80 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_SelectedObjectDataDict(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameModel_set_SelectedObjectDataDict_m81 (GameModel_t5 * __this, Dictionary_2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameModel::get_MinimumNumberOfObjectData()
extern "C" int32_t GameModel_get_MinimumNumberOfObjectData_m82 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_MinimumNumberOfObjectData(System.Int32)
extern "C" void GameModel_set_MinimumNumberOfObjectData_m83 (GameModel_t5 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>> GameModel::get_ParticleDataList()
extern "C" List_1_t15 * GameModel_get_ParticleDataList_m84 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_ParticleDataList(System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>)
extern "C" void GameModel_set_ParticleDataList_m85 (GameModel_t5 * __this, List_1_t15 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> GameModel::get_VanishParticleList()
extern "C" List_1_t16 * GameModel_get_VanishParticleList_m86 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_VanishParticleList(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" void GameModel_set_VanishParticleList_m87 (GameModel_t5 * __this, List_1_t16 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> GameModel::get_GetPointParticleList()
extern "C" List_1_t16 * GameModel_get_GetPointParticleList_m88 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::set_GetPointParticleList(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" void GameModel_set_GetPointParticleList_m89 (GameModel_t5 * __this, List_1_t16 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GameModel::GetUniqueIndex()
extern "C" uint64_t GameModel_GetUniqueIndex_m90 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameModel::get_Json_Path()
extern "C" String_t* GameModel_get_Json_Path_m91 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameModel GameModel::get_Instance()
extern "C" GameModel_t5 * GameModel_get_Instance_m92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::Init()
extern "C" void GameModel_Init_m93 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameModel::Awake()
extern "C" void GameModel_Awake_m94 (GameModel_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
