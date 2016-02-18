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
struct AnimationCurve_t152;
struct AnimationCurve_t152_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t199;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"
#include "UnityEngine_UnityEngine_WrapMode.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3905 (AnimationCurve_t152 * __this, KeyframeU5BU5D_t199* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m1142 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3906 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3907 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t199* AnimationCurve_get_keys_m1148 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
extern "C" int32_t AnimationCurve_AddKey_m1143 (AnimationCurve_t152 * __this, Keyframe_t153  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey_Internal(UnityEngine.Keyframe)
extern "C" int32_t AnimationCurve_AddKey_Internal_m3908 (AnimationCurve_t152 * __this, Keyframe_t153  ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::INTERNAL_CALL_AddKey_Internal(UnityEngine.AnimationCurve,UnityEngine.Keyframe&)
extern "C" int32_t AnimationCurve_INTERNAL_CALL_AddKey_Internal_m3909 (Object_t * __this /* static, unused */, AnimationCurve_t152 * ___self, Keyframe_t153 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t199* AnimationCurve_GetKeys_m3910 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
extern "C" int32_t AnimationCurve_get_preWrapMode_m1146 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
extern "C" void AnimationCurve_set_preWrapMode_m1144 (AnimationCurve_t152 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
extern "C" int32_t AnimationCurve_get_postWrapMode_m1147 (AnimationCurve_t152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
extern "C" void AnimationCurve_set_postWrapMode_m1145 (AnimationCurve_t152 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3911 (AnimationCurve_t152 * __this, KeyframeU5BU5D_t199* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t152_marshal(const AnimationCurve_t152& unmarshaled, AnimationCurve_t152_marshaled& marshaled);
extern "C" void AnimationCurve_t152_marshal_back(const AnimationCurve_t152_marshaled& marshaled, AnimationCurve_t152& unmarshaled);
extern "C" void AnimationCurve_t152_marshal_cleanup(AnimationCurve_t152_marshaled& marshaled);
