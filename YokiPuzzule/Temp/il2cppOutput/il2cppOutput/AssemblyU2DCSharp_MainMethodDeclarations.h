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

// Main
struct Main_t13;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t7;
// UnityEngine.GameObject
struct GameObject_t16;
// ObjectData
struct ObjectData_t10;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t8;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameModel_SimpleTouch.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Main::.ctor()
extern "C" void Main__ctor_m57 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Start()
extern "C" void Main_Start_m58 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::CaluculateTouchInput(GameModel/SimpleTouch)
extern "C" void Main_CaluculateTouchInput_m59 (Main_t13 * __this, SimpleTouch_t3  ___CurrentTouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::InitManager()
extern "C" void Main_InitManager_m60 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Init()
extern "C" void Main_Init_m61 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::LoadFile()
extern "C" void Main_LoadFile_m62 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Main::LoadFileCorutine(System.String)
extern "C" Object_t * Main_LoadFileCorutine_m63 (Main_t13 * __this, String_t* ____file_path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::InitPlatformTextDebug()
extern "C" void Main_InitPlatformTextDebug_m64 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::InitTimer()
extern "C" void Main_InitTimer_m65 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::TimerTcick()
extern "C" void Main_TimerTcick_m66 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::InitObjects(LitJson.JsonData)
extern "C" void Main_InitObjects_m67 (Main_t13 * __this, JsonData_t7 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::AddObjectsData(LitJson.JsonData,System.Int32,System.Int32,UnityEngine.Vector3)
extern "C" void Main_AddObjectsData_m68 (Main_t13 * __this, JsonData_t7 * ___data, int32_t ___row_count, int32_t ___column_count, Vector3_t99  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Main::CheckObjectsDataCount()
extern "C" bool Main_CheckObjectsDataCount_m69 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::AddRandomObjectData()
extern "C" void Main_AddRandomObjectData_m70 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::SetColor(System.Int32,UnityEngine.GameObject)
extern "C" void Main_SetColor_m71 (Main_t13 * __this, int32_t ____category_id, GameObject_t16 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::SetLineObjetsData()
extern "C" void Main_SetLineObjetsData_m72 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::SetLineObjectDataReverse()
extern "C" void Main_SetLineObjectDataReverse_m73 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Update()
extern "C" void Main_Update_m74 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Main::CheckLineObjectData()
extern "C" bool Main_CheckLineObjectData_m75 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::RemoveSelectedLineObjectData()
extern "C" void Main_RemoveSelectedLineObjectData_m76 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::AddRemovedObjectsPoint()
extern "C" void Main_AddRemovedObjectsPoint_m77 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::AddRemovedObjectsCount()
extern "C" void Main_AddRemovedObjectsCount_m78 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Main::checkAlreadySetObjectsData(ObjectData)
extern "C" bool Main_checkAlreadySetObjectsData_m79 (Main_t13 * __this, ObjectData_t10 * ___check_obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::ResetLineObjectData()
extern "C" void Main_ResetLineObjectData_m80 (Main_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::HighLightSelectedData(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void Main_HighLightSelectedData_m81 (Main_t13 * __this, Dictionary_2_t8 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::ResetHighLightSelectedData(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void Main_ResetHighLightSelectedData_m82 (Main_t13 * __this, Dictionary_2_t8 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::DrawLine(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void Main_DrawLine_m83 (Main_t13 * __this, Dictionary_2_t8 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
