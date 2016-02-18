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

// GameObjectManager
struct GameObjectManager_t6;
// UnityEngine.GameObject
struct GameObject_t3;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t13;

#include "codegen/il2cpp-codegen.h"

// System.Void GameObjectManager::.ctor()
extern "C" void GameObjectManager__ctor_m18 (GameObjectManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::.cctor()
extern "C" void GameObjectManager__cctor_m19 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameObjectManager GameObjectManager::get_Instance()
extern "C" GameObjectManager_t6 * GameObjectManager_get_Instance_m20 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::SetColor(System.Int32,UnityEngine.GameObject)
extern "C" void GameObjectManager_SetColor_m21 (GameObjectManager_t6 * __this, int32_t ____category_id, GameObject_t3 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::ResetLineObjectData()
extern "C" void GameObjectManager_ResetLineObjectData_m22 (GameObjectManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::HighLightSelectedData(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameObjectManager_HighLightSelectedData_m23 (GameObjectManager_t6 * __this, Dictionary_2_t13 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::ResetHighLightSelectedData(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameObjectManager_ResetHighLightSelectedData_m24 (GameObjectManager_t6 * __this, Dictionary_2_t13 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::DrawLine(System.Collections.Generic.Dictionary`2<System.String,ObjectData>)
extern "C" void GameObjectManager_DrawLine_m25 (GameObjectManager_t6 * __this, Dictionary_2_t13 * ____selected_dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectManager::Awake()
extern "C" void GameObjectManager_Awake_m26 (GameObjectManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
