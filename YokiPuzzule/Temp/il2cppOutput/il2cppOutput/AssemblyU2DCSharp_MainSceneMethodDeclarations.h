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

// MainScene
struct MainScene_t25;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t12;
// UnityEngine.GameObject
struct GameObject_t3;
// ObjectData
struct ObjectData_t1;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameModel_SimpleTouch.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MainScene::.ctor()
extern "C" void MainScene__ctor_m132 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::Start()
extern "C" void MainScene_Start_m133 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::CaluculateTouchInput(GameModel/SimpleTouch)
extern "C" void MainScene_CaluculateTouchInput_m134 (MainScene_t25 * __this, SimpleTouch_t9  ___CurrentTouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::InitManager()
extern "C" void MainScene_InitManager_m135 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::Init()
extern "C" void MainScene_Init_m136 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::LoadFile()
extern "C" void MainScene_LoadFile_m137 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScene::LoadFileCorutine(System.String)
extern "C" Object_t * MainScene_LoadFileCorutine_m138 (MainScene_t25 * __this, String_t* ____file_path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::InitCanvasInfo()
extern "C" void MainScene_InitCanvasInfo_m139 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::ResetPlayerPref()
extern "C" void MainScene_ResetPlayerPref_m140 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::SetGameState(System.String)
extern "C" void MainScene_SetGameState_m141 (MainScene_t25 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::GotoMainPage()
extern "C" void MainScene_GotoMainPage_m142 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::GotoResultPage()
extern "C" void MainScene_GotoResultPage_m143 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::GotoReTryPage()
extern "C" void MainScene_GotoReTryPage_m144 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::GotoBackToTopPage()
extern "C" void MainScene_GotoBackToTopPage_m145 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::InitTimer()
extern "C" void MainScene_InitTimer_m146 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::TimerTcick()
extern "C" void MainScene_TimerTcick_m147 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::InitObjects(LitJson.JsonData)
extern "C" void MainScene_InitObjects_m148 (MainScene_t25 * __this, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::AddObjectsData(LitJson.JsonData,System.Int32,System.Int32,UnityEngine.Vector3)
extern "C" void MainScene_AddObjectsData_m149 (MainScene_t25 * __this, JsonData_t12 * ___data, int32_t ___row_count, int32_t ___column_count, Vector3_t27  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MainScene::CheckObjectsDataCount()
extern "C" bool MainScene_CheckObjectsDataCount_m150 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::AddRandomObjectData()
extern "C" void MainScene_AddRandomObjectData_m151 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::SetColor(System.Int32,UnityEngine.GameObject)
extern "C" void MainScene_SetColor_m152 (MainScene_t25 * __this, int32_t ____category_id, GameObject_t3 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::Update()
extern "C" void MainScene_Update_m153 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::SetLineObjetsData()
extern "C" void MainScene_SetLineObjetsData_m154 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::SetLineObjectDataReverse()
extern "C" void MainScene_SetLineObjectDataReverse_m155 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MainScene::CheckLineObjectData()
extern "C" bool MainScene_CheckLineObjectData_m156 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::StartRemoveingSelectedLineObjectsData()
extern "C" void MainScene_StartRemoveingSelectedLineObjectsData_m157 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MainScene::RemoveingSelectedLineObjectsData(System.String,ObjectData,System.Single)
extern "C" Object_t * MainScene_RemoveingSelectedLineObjectsData_m158 (MainScene_t25 * __this, String_t* ____key, ObjectData_t1 * ____data, float ____wait_time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MainScene::PointGetComplete()
extern "C" void MainScene_PointGetComplete_m159 (MainScene_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MainScene::checkAlreadySetObjectsData(ObjectData)
extern "C" bool MainScene_checkAlreadySetObjectsData_m160 (MainScene_t25 * __this, ObjectData_t1 * ___check_obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
