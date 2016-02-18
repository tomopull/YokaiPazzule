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

// UIManager
struct UIManager_t18;
// System.EventHandler
struct EventHandler_t19;

#include "codegen/il2cpp-codegen.h"

// System.Void UIManager::.ctor()
extern "C" void UIManager__ctor_m101 (UIManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::.cctor()
extern "C" void UIManager__cctor_m102 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::add_OnClick(System.EventHandler)
extern "C" void UIManager_add_OnClick_m103 (UIManager_t18 * __this, EventHandler_t19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::remove_OnClick(System.EventHandler)
extern "C" void UIManager_remove_OnClick_m104 (UIManager_t18 * __this, EventHandler_t19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGUI()
extern "C" void UIManager_OnGUI_m105 (UIManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIManager UIManager::get_Instance()
extern "C" UIManager_t18 * UIManager_get_Instance_m106 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::Awake()
extern "C" void UIManager_Awake_m107 (UIManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
