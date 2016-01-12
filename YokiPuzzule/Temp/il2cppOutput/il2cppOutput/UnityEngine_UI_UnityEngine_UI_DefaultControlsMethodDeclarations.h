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

// UnityEngine.GameObject
struct GameObject_t16;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t126;
// UnityEngine.UI.Selectable
struct Selectable_t276;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m1230 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t16 * DefaultControls_CreateUIElementRoot_m1231 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t4  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t16 * DefaultControls_CreateUIObject_m1232 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t16 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m1233 (Object_t * __this /* static, unused */, Text_t126 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m1234 (Object_t * __this /* static, unused */, Selectable_t276 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m1235 (Object_t * __this /* static, unused */, GameObject_t16 * ___child, GameObject_t16 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m1236 (Object_t * __this /* static, unused */, GameObject_t16 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreatePanel_m1237 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateButton_m1238 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateText_m1239 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateImage_m1240 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateRawImage_m1241 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateSlider_m1242 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateScrollbar_m1243 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateToggle_m1244 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateInputField_m1245 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateDropdown_m1246 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t16 * DefaultControls_CreateScrollView_m1247 (Object_t * __this /* static, unused */, Resources_t283  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
