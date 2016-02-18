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
struct JSONObject_t32;
// System.Object
struct Object_t;
// UnityEngine.RectOffset
struct RectOffset_t151;
// UnityEngine.AnimationCurve
struct AnimationCurve_t152;
struct AnimationCurve_t152_marshaled;

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
extern "C" void JSONTemplates__cctor_m289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::TOJSON(System.Object)
extern "C" JSONObject_t32 * JSONTemplates_TOJSON_m290 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 JSONTemplates::ToVector2(JSONObject)
extern "C" Vector2_t10  JSONTemplates_ToVector2_m291 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector2(UnityEngine.Vector2)
extern "C" JSONObject_t32 * JSONTemplates_FromVector2_m292 (Object_t * __this /* static, unused */, Vector2_t10  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector3(UnityEngine.Vector3)
extern "C" JSONObject_t32 * JSONTemplates_FromVector3_m293 (Object_t * __this /* static, unused */, Vector3_t27  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 JSONTemplates::ToVector3(JSONObject)
extern "C" Vector3_t27  JSONTemplates_ToVector3_m294 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector4(UnityEngine.Vector4)
extern "C" JSONObject_t32 * JSONTemplates_FromVector4_m295 (Object_t * __this /* static, unused */, Vector4_t147  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 JSONTemplates::ToVector4(JSONObject)
extern "C" Vector4_t147  JSONTemplates_ToVector4_m296 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
extern "C" JSONObject_t32 * JSONTemplates_FromMatrix4x4_m297 (Object_t * __this /* static, unused */, Matrix4x4_t148  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 JSONTemplates::ToMatrix4x4(JSONObject)
extern "C" Matrix4x4_t148  JSONTemplates_ToMatrix4x4_m298 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
extern "C" JSONObject_t32 * JSONTemplates_FromQuaternion_m299 (Object_t * __this /* static, unused */, Quaternion_t149  ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion JSONTemplates::ToQuaternion(JSONObject)
extern "C" Quaternion_t149  JSONTemplates_ToQuaternion_m300 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromColor(UnityEngine.Color)
extern "C" JSONObject_t32 * JSONTemplates_FromColor_m301 (Object_t * __this /* static, unused */, Color_t115  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color JSONTemplates::ToColor(JSONObject)
extern "C" Color_t115  JSONTemplates_ToColor_m302 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
extern "C" JSONObject_t32 * JSONTemplates_FromLayerMask_m303 (Object_t * __this /* static, unused */, LayerMask_t150  ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask JSONTemplates::ToLayerMask(JSONObject)
extern "C" LayerMask_t150  JSONTemplates_ToLayerMask_m304 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRect(UnityEngine.Rect)
extern "C" JSONObject_t32 * JSONTemplates_FromRect_m305 (Object_t * __this /* static, unused */, Rect_t132  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect JSONTemplates::ToRect(JSONObject)
extern "C" Rect_t132  JSONTemplates_ToRect_m306 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
extern "C" JSONObject_t32 * JSONTemplates_FromRectOffset_m307 (Object_t * __this /* static, unused */, RectOffset_t151 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset JSONTemplates::ToRectOffset(JSONObject)
extern "C" RectOffset_t151 * JSONTemplates_ToRectOffset_m308 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve JSONTemplates::ToAnimationCurve(JSONObject)
extern "C" AnimationCurve_t152 * JSONTemplates_ToAnimationCurve_m309 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromAnimationCurve(UnityEngine.AnimationCurve)
extern "C" JSONObject_t32 * JSONTemplates_FromAnimationCurve_m310 (Object_t * __this /* static, unused */, AnimationCurve_t152 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe JSONTemplates::ToKeyframe(JSONObject)
extern "C" Keyframe_t153  JSONTemplates_ToKeyframe_m311 (Object_t * __this /* static, unused */, JSONObject_t32 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromKeyframe(UnityEngine.Keyframe)
extern "C" JSONObject_t32 * JSONTemplates_FromKeyframe_m312 (Object_t * __this /* static, unused */, Keyframe_t153  ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
