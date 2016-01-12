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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t385;
// UnityEngine.UI.Toggle
struct Toggle_t289;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t457;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C" void ToggleGroup__ctor_m1998 (ToggleGroup_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C" bool ToggleGroup_get_allowSwitchOff_m1999 (ToggleGroup_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C" void ToggleGroup_set_allowSwitchOff_m2000 (ToggleGroup_t385 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_ValidateToggleIsInGroup_m2001 (ToggleGroup_t385 * __this, Toggle_t289 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_NotifyToggleOn_m2002 (ToggleGroup_t385 * __this, Toggle_t289 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_UnregisterToggle_m2003 (ToggleGroup_t385 * __this, Toggle_t289 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_RegisterToggle_m2004 (ToggleGroup_t385 * __this, Toggle_t289 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C" bool ToggleGroup_AnyTogglesOn_m2005 (ToggleGroup_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C" Object_t* ToggleGroup_ActiveToggles_m2006 (ToggleGroup_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C" void ToggleGroup_SetAllTogglesOff_m2007 (ToggleGroup_t385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__6(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CAnyTogglesOnU3Em__6_m2008 (Object_t * __this /* static, unused */, Toggle_t289 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__7(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CActiveTogglesU3Em__7_m2009 (Object_t * __this /* static, unused */, Toggle_t289 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
