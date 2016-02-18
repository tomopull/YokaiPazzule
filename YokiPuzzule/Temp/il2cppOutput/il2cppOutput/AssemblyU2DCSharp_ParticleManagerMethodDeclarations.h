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

// ParticleManager
struct ParticleManager_t7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t16;
// GameModel
struct GameModel_t5;
// UnityEngine.GameObject
struct GameObject_t3;

#include "codegen/il2cpp-codegen.h"

// System.Void ParticleManager::.ctor()
extern "C" void ParticleManager__ctor_m27 (ParticleManager_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::.cctor()
extern "C" void ParticleManager__cctor_m28 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticleManager ParticleManager::get_Instance()
extern "C" ParticleManager_t7 * ParticleManager_get_Instance_m29 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::Awake()
extern "C" void ParticleManager_Awake_m30 (ParticleManager_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::RemoveParticleData()
extern "C" void ParticleManager_RemoveParticleData_m31 (ParticleManager_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::InitParticleList(System.Collections.Generic.List`1<UnityEngine.GameObject>,GameModel)
extern "C" void ParticleManager_InitParticleList_m32 (ParticleManager_t7 * __this, List_1_t16 * ____list, GameModel_t5 * ____model, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticleManager::AddParticleList(UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" void ParticleManager_AddParticleList_m33 (ParticleManager_t7 * __this, GameObject_t3 * ____obj, List_1_t16 * ____object_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
