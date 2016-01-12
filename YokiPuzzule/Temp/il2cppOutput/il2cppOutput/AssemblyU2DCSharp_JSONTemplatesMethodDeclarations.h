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

// JSONObject
struct JSONObject_t20;
// System.Object
struct Object_t;
// UnityEngine.RectOffset
struct RectOffset_t113;
// UnityEngine.AnimationCurve
struct AnimationCurve_t114;
struct AnimationCurve_t114_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void JSONTemplates::.cctor()
extern "C" void JSONTemplates__cctor_m225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::TOJSON(System.Object)
extern "C" JSONObject_t20 * JSONTemplates_TOJSON_m226 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 JSONTemplates::ToVector2(JSONObject)
extern "C" Vector2_t4  JSONTemplates_ToVector2_m227 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector2(UnityEngine.Vector2)
extern "C" JSONObject_t20 * JSONTemplates_FromVector2_m228 (Object_t * __this /* static, unused */, Vector2_t4  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector3(UnityEngine.Vector3)
extern "C" JSONObject_t20 * JSONTemplates_FromVector3_m229 (Object_t * __this /* static, unused */, Vector3_t99  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 JSONTemplates::ToVector3(JSONObject)
extern "C" Vector3_t99  JSONTemplates_ToVector3_m230 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector4(UnityEngine.Vector4)
extern "C" JSONObject_t20 * JSONTemplates_FromVector4_m231 (Object_t * __this /* static, unused */, Vector4_t107  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 JSONTemplates::ToVector4(JSONObject)
extern "C" Vector4_t107  JSONTemplates_ToVector4_m232 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
extern "C" JSONObject_t20 * JSONTemplates_FromMatrix4x4_m233 (Object_t * __this /* static, unused */, Matrix4x4_t108  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 JSONTemplates::ToMatrix4x4(JSONObject)
extern "C" Matrix4x4_t108  JSONTemplates_ToMatrix4x4_m234 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
extern "C" JSONObject_t20 * JSONTemplates_FromQuaternion_m235 (Object_t * __this /* static, unused */, Quaternion_t109  ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion JSONTemplates::ToQuaternion(JSONObject)
extern "C" Quaternion_t109  JSONTemplates_ToQuaternion_m236 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromColor(UnityEngine.Color)
extern "C" JSONObject_t20 * JSONTemplates_FromColor_m237 (Object_t * __this /* static, unused */, Color_t110  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color JSONTemplates::ToColor(JSONObject)
extern "C" Color_t110  JSONTemplates_ToColor_m238 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
extern "C" JSONObject_t20 * JSONTemplates_FromLayerMask_m239 (Object_t * __this /* static, unused */, LayerMask_t111  ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask JSONTemplates::ToLayerMask(JSONObject)
extern "C" LayerMask_t111  JSONTemplates_ToLayerMask_m240 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRect(UnityEngine.Rect)
extern "C" JSONObject_t20 * JSONTemplates_FromRect_m241 (Object_t * __this /* static, unused */, Rect_t112  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect JSONTemplates::ToRect(JSONObject)
extern "C" Rect_t112  JSONTemplates_ToRect_m242 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
extern "C" JSONObject_t20 * JSONTemplates_FromRectOffset_m243 (Object_t * __this /* static, unused */, RectOffset_t113 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset JSONTemplates::ToRectOffset(JSONObject)
extern "C" RectOffset_t113 * JSONTemplates_ToRectOffset_m244 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve JSONTemplates::ToAnimationCurve(JSONObject)
extern "C" AnimationCurve_t114 * JSONTemplates_ToAnimationCurve_m245 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromAnimationCurve(UnityEngine.AnimationCurve)
extern "C" JSONObject_t20 * JSONTemplates_FromAnimationCurve_m246 (Object_t * __this /* static, unused */, AnimationCurve_t114 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe JSONTemplates::ToKeyframe(JSONObject)
extern "C" Keyframe_t115  JSONTemplates_ToKeyframe_m247 (Object_t * __this /* static, unused */, JSONObject_t20 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromKeyframe(UnityEngine.Keyframe)
extern "C" JSONObject_t20 * JSONTemplates_FromKeyframe_m248 (Object_t * __this /* static, unused */, Keyframe_t115  ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
