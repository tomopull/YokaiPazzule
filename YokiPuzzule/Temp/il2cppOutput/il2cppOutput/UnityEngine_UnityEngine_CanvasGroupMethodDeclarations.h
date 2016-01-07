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

// UnityEngine.CanvasGroup
struct CanvasGroup_t476;
// UnityEngine.Camera
struct Camera_t136;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Single UnityEngine.CanvasGroup::get_alpha()
extern "C" float CanvasGroup_get_alpha_m2473 (CanvasGroup_t476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" void CanvasGroup_set_alpha_m2477 (CanvasGroup_t476 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m2715 (CanvasGroup_t476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m3522 (CanvasGroup_t476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2504 (CanvasGroup_t476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m3523 (CanvasGroup_t476 * __this, Vector2_t4  ___sp, Camera_t136 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
