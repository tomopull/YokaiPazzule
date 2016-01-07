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

// UnityEngine.UI.Mask
struct Mask_t345;
// UnityEngine.RectTransform
struct RectTransform_t288;
// UnityEngine.UI.Graphic
struct Graphic_t304;
// UnityEngine.Camera
struct Camera_t136;
// UnityEngine.Material
struct Material_t133;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C" void Mask__ctor_m1609 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C" RectTransform_t288 * Mask_get_rectTransform_m1610 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C" bool Mask_get_showMaskGraphic_m1611 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C" void Mask_set_showMaskGraphic_m1612 (Mask_t345 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C" Graphic_t304 * Mask_get_graphic_m1613 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C" bool Mask_MaskEnabled_m1614 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C" void Mask_OnSiblingGraphicEnabledDisabled_m1615 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C" void Mask_OnEnable_m1616 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C" void Mask_OnDisable_m1617 (Mask_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Mask_IsRaycastLocationValid_m1618 (Mask_t345 * __this, Vector2_t4  ___sp, Camera_t136 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C" Material_t133 * Mask_GetModifiedMaterial_m1619 (Mask_t345 * __this, Material_t133 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
