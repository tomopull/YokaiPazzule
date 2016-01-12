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

// UnityEngine.UI.Button
struct Button_t275;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t272;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t249;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t212;
// System.Collections.IEnumerator
struct IEnumerator_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1192 (Button_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t272 * Button_get_onClick_m1193 (Button_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1194 (Button_t275 * __this, ButtonClickedEvent_t272 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1195 (Button_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1196 (Button_t275 * __this, PointerEventData_t249 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1197 (Button_t275 * __this, BaseEventData_t212 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1198 (Button_t275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
