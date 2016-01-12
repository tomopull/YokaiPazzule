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

// UnityEngine.AnimationCurve
struct AnimationCurve_t114;
struct AnimationCurve_t114_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t155;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"
#include "UnityEngine_UnityEngine_WrapMode.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3398 (AnimationCurve_t114 * __this, KeyframeU5BU5D_t155* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m752 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3399 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3400 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t155* AnimationCurve_get_keys_m758 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
extern "C" int32_t AnimationCurve_AddKey_m753 (AnimationCurve_t114 * __this, Keyframe_t115  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey_Internal(UnityEngine.Keyframe)
extern "C" int32_t AnimationCurve_AddKey_Internal_m3401 (AnimationCurve_t114 * __this, Keyframe_t115  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::INTERNAL_CALL_AddKey_Internal(UnityEngine.AnimationCurve,UnityEngine.Keyframe&)
extern "C" int32_t AnimationCurve_INTERNAL_CALL_AddKey_Internal_m3402 (Object_t * __this /* static, unused */, AnimationCurve_t114 * ___self, Keyframe_t115 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t155* AnimationCurve_GetKeys_m3403 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
extern "C" int32_t AnimationCurve_get_preWrapMode_m756 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
extern "C" void AnimationCurve_set_preWrapMode_m754 (AnimationCurve_t114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
extern "C" int32_t AnimationCurve_get_postWrapMode_m757 (AnimationCurve_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
extern "C" void AnimationCurve_set_postWrapMode_m755 (AnimationCurve_t114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3404 (AnimationCurve_t114 * __this, KeyframeU5BU5D_t155* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t114_marshal(const AnimationCurve_t114& unmarshaled, AnimationCurve_t114_marshaled& marshaled);
extern "C" void AnimationCurve_t114_marshal_back(const AnimationCurve_t114_marshaled& marshaled, AnimationCurve_t114& unmarshaled);
extern "C" void AnimationCurve_t114_marshal_cleanup(AnimationCurve_t114_marshaled& marshaled);
