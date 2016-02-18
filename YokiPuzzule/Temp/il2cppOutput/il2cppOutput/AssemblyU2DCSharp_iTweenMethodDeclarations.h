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

// iTween
struct iTween_t121;
// System.Collections.Hashtable
struct Hashtable_t124;
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.AudioClip
struct AudioClip_t161;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// UnityEngine.Transform[]
struct TransformU5BU5D_t162;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t117;
// UnityEngine.Texture2D
struct Texture2D_t163;
// UnityEngine.Transform
struct Transform_t130;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t164;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void iTween::.ctor(System.Collections.Hashtable)
extern "C" void iTween__ctor_m697 (iTween_t121 * __this, Hashtable_t124 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
extern "C" void iTween__cctor_m698 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
extern "C" void iTween_Init_m699 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
extern "C" void iTween_CameraFadeFrom_m700 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeFrom_m701 (Object_t * __this /* static, unused */, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
extern "C" void iTween_CameraFadeTo_m702 (Object_t * __this /* static, unused */, float ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
extern "C" void iTween_CameraFadeTo_m703 (Object_t * __this /* static, unused */, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ValueTo_m704 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeFrom_m705 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeFrom_m706 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeTo_m707 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeTo_m708 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorFrom_m709 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Color_t115  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorFrom_m710 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorTo_m711 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Color_t115  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorTo_m712 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioFrom_m713 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioFrom_m714 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioTo_m715 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioTo_m716 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
extern "C" void iTween_Stab_m717 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, AudioClip_t161 * ___audioclip, float ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Stab_m718 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookFrom_m719 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookFrom_m720 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookTo_m721 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookTo_m722 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveTo_m723 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveTo_m724 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveFrom_m725 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveFrom_m726 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveAdd_m727 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveAdd_m728 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveBy_m729 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveBy_m730 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleTo_m731 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleTo_m732 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleFrom_m733 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleFrom_m734 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleAdd_m735 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleAdd_m736 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleBy_m737 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleBy_m738 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateTo_m739 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateTo_m740 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateFrom_m741 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateFrom_m742 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateAdd_m743 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateAdd_m744 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateBy_m745 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateBy_m746 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakePosition_m747 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakePosition_m748 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeScale_m749 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeScale_m750 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ShakeRotation_m751 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ShakeRotation_m752 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchPosition_m753 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchPosition_m754 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchRotation_m755 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchRotation_m756 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_PunchScale_m757 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___amount, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_PunchScale_m758 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
extern "C" void iTween_GenerateTargets_m759 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
extern "C" void iTween_GenerateRectTargets_m760 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
extern "C" void iTween_GenerateColorTargets_m761 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
extern "C" void iTween_GenerateVector3Targets_m762 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
extern "C" void iTween_GenerateVector2Targets_m763 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
extern "C" void iTween_GenerateFloatTargets_m764 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
extern "C" void iTween_GenerateColorToTargets_m765 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
extern "C" void iTween_GenerateAudioToTargets_m766 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
extern "C" void iTween_GenerateStabTargets_m767 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
extern "C" void iTween_GenerateLookToTargets_m768 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
extern "C" void iTween_GenerateMoveToPathTargets_m769 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
extern "C" void iTween_GenerateMoveToTargets_m770 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
extern "C" void iTween_GenerateMoveByTargets_m771 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
extern "C" void iTween_GenerateScaleToTargets_m772 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
extern "C" void iTween_GenerateScaleByTargets_m773 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
extern "C" void iTween_GenerateScaleAddTargets_m774 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
extern "C" void iTween_GenerateRotateToTargets_m775 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
extern "C" void iTween_GenerateRotateAddTargets_m776 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
extern "C" void iTween_GenerateRotateByTargets_m777 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
extern "C" void iTween_GenerateShakePositionTargets_m778 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
extern "C" void iTween_GenerateShakeScaleTargets_m779 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
extern "C" void iTween_GenerateShakeRotationTargets_m780 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
extern "C" void iTween_GeneratePunchPositionTargets_m781 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
extern "C" void iTween_GeneratePunchRotationTargets_m782 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
extern "C" void iTween_GeneratePunchScaleTargets_m783 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
extern "C" void iTween_ApplyRectTargets_m784 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
extern "C" void iTween_ApplyColorTargets_m785 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
extern "C" void iTween_ApplyVector3Targets_m786 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
extern "C" void iTween_ApplyVector2Targets_m787 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
extern "C" void iTween_ApplyFloatTargets_m788 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
extern "C" void iTween_ApplyColorToTargets_m789 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
extern "C" void iTween_ApplyAudioToTargets_m790 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
extern "C" void iTween_ApplyStabTargets_m791 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
extern "C" void iTween_ApplyMoveToPathTargets_m792 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
extern "C" void iTween_ApplyMoveToTargets_m793 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
extern "C" void iTween_ApplyMoveByTargets_m794 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
extern "C" void iTween_ApplyScaleToTargets_m795 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
extern "C" void iTween_ApplyLookToTargets_m796 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
extern "C" void iTween_ApplyRotateToTargets_m797 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
extern "C" void iTween_ApplyRotateAddTargets_m798 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
extern "C" void iTween_ApplyShakePositionTargets_m799 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
extern "C" void iTween_ApplyShakeScaleTargets_m800 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
extern "C" void iTween_ApplyShakeRotationTargets_m801 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
extern "C" void iTween_ApplyPunchPositionTargets_m802 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
extern "C" void iTween_ApplyPunchRotationTargets_m803 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
extern "C" void iTween_ApplyPunchScaleTargets_m804 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
extern "C" Object_t * iTween_TweenDelay_m805 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
extern "C" void iTween_TweenStart_m806 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
extern "C" Object_t * iTween_TweenRestart_m807 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
extern "C" void iTween_TweenUpdate_m808 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
extern "C" void iTween_TweenComplete_m809 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
extern "C" void iTween_TweenLoop_m810 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
extern "C" Rect_t132  iTween_RectUpdate_m811 (Object_t * __this /* static, unused */, Rect_t132  ___currentValue, Rect_t132  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t27  iTween_Vector3Update_m812 (Object_t * __this /* static, unused */, Vector3_t27  ___currentValue, Vector3_t27  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t10  iTween_Vector2Update_m813 (Object_t * __this /* static, unused */, Vector2_t10  ___currentValue, Vector2_t10  ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
extern "C" float iTween_FloatUpdate_m814 (Object_t * __this /* static, unused */, float ___currentValue, float ___targetValue, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_FadeUpdate_m815 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
extern "C" void iTween_FadeUpdate_m816 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___alpha, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ColorUpdate_m817 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
extern "C" void iTween_ColorUpdate_m818 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Color_t115  ___color, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_AudioUpdate_m819 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
extern "C" void iTween_AudioUpdate_m820 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, float ___volume, float ___pitch, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_RotateUpdate_m821 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_RotateUpdate_m822 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___rotation, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_ScaleUpdate_m823 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_ScaleUpdate_m824 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___scale, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_MoveUpdate_m825 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_MoveUpdate_m826 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___position, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_LookUpdate_m827 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" void iTween_LookUpdate_m828 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3_t27  ___looktarget, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
extern "C" float iTween_PathLength_m829 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
extern "C" float iTween_PathLength_m830 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
extern "C" Texture2D_t163 * iTween_CameraTexture_m831 (Object_t * __this /* static, unused */, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m832 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Vector3U5BU5D_t117* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
extern "C" void iTween_PutOnPath_m833 (Object_t * __this /* static, unused */, Transform_t130 * ___target, Vector3U5BU5D_t117* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m834 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, TransformU5BU5D_t162* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
extern "C" void iTween_PutOnPath_m835 (Object_t * __this /* static, unused */, Transform_t130 * ___target, TransformU5BU5D_t162* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
extern "C" Vector3_t27  iTween_PointOnPath_m836 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
extern "C" void iTween_DrawLine_m837 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m838 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
extern "C" void iTween_DrawLine_m839 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLine_m840 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineGizmos_m841 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m842 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawLineGizmos_m843 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineGizmos_m844 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawLineHandles_m845 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m846 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawLineHandles_m847 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawLineHandles_m848 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___line, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t27  iTween_PointOnPath_m849 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
extern "C" void iTween_DrawPath_m850 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m851 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
extern "C" void iTween_DrawPath_m852 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPath_m853 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathGizmos_m854 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m855 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
extern "C" void iTween_DrawPathGizmos_m856 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathGizmos_m857 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
extern "C" void iTween_DrawPathHandles_m858 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m859 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
extern "C" void iTween_DrawPathHandles_m860 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
extern "C" void iTween_DrawPathHandles_m861 (Object_t * __this /* static, unused */, TransformU5BU5D_t162* ___path, Color_t115  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
extern "C" void iTween_CameraFadeDepth_m862 (Object_t * __this /* static, unused */, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
extern "C" void iTween_CameraFadeDestroy_m863 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
extern "C" void iTween_CameraFadeSwap_m864 (Object_t * __this /* static, unused */, Texture2D_t163 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
extern "C" GameObject_t3 * iTween_CameraFadeAdd_m865 (Object_t * __this /* static, unused */, Texture2D_t163 * ___texture, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
extern "C" GameObject_t3 * iTween_CameraFadeAdd_m866 (Object_t * __this /* static, unused */, Texture2D_t163 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
extern "C" GameObject_t3 * iTween_CameraFadeAdd_m867 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
extern "C" void iTween_Resume_m868 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Resume_m869 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
extern "C" void iTween_Resume_m870 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Resume_m871 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
extern "C" void iTween_Resume_m872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
extern "C" void iTween_Resume_m873 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
extern "C" void iTween_Pause_m874 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Pause_m875 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
extern "C" void iTween_Pause_m876 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Pause_m877 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
extern "C" void iTween_Pause_m878 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
extern "C" void iTween_Pause_m879 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
extern "C" int32_t iTween_Count_m880 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
extern "C" int32_t iTween_Count_m881 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
extern "C" int32_t iTween_Count_m882 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
extern "C" int32_t iTween_Count_m883 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
extern "C" void iTween_Stop_m884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
extern "C" void iTween_Stop_m885 (Object_t * __this /* static, unused */, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
extern "C" void iTween_StopByName_m886 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
extern "C" void iTween_Stop_m887 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
extern "C" void iTween_Stop_m888 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
extern "C" void iTween_Stop_m889 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
extern "C" void iTween_StopByName_m890 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_Stop_m891 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___type, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" void iTween_StopByName_m892 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, String_t* ___name, bool ___includechildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
extern "C" Hashtable_t124 * iTween_Hash_m893 (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
extern "C" void iTween_Awake_m894 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
extern "C" Object_t * iTween_Start_m895 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
extern "C" void iTween_Update_m896 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
extern "C" void iTween_FixedUpdate_m897 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
extern "C" void iTween_LateUpdate_m898 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
extern "C" void iTween_OnEnable_m899 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
extern "C" void iTween_OnDisable_m900 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawLineHelper_m901 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___line, Color_t115  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
extern "C" void iTween_DrawPathHelper_m902 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, Color_t115  ___color, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
extern "C" Vector3U5BU5D_t117* iTween_PathControlPointGenerator_m903 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
extern "C" Vector3_t27  iTween_Interp_m904 (Object_t * __this /* static, unused */, Vector3U5BU5D_t117* ___pts, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
extern "C" void iTween_Launch_m905 (Object_t * __this /* static, unused */, GameObject_t3 * ___target, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
extern "C" Hashtable_t124 * iTween_CleanArgs_m906 (Object_t * __this /* static, unused */, Hashtable_t124 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
extern "C" String_t* iTween_GenerateID_m907 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
extern "C" void iTween_RetrieveArgs_m908 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GetEasingFunction()
extern "C" void iTween_GetEasingFunction_m909 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
extern "C" void iTween_UpdatePercentage_m910 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
extern "C" void iTween_CallBack_m911 (iTween_t121 * __this, String_t* ___callbackType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
extern "C" void iTween_Dispose_m912 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
extern "C" void iTween_ConflictCheck_m913 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
extern "C" void iTween_EnableKinematic_m914 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
extern "C" void iTween_DisableKinematic_m915 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
extern "C" void iTween_ResumeDelay_m916 (iTween_t121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
extern "C" float iTween_linear_m917 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
extern "C" float iTween_clerp_m918 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
extern "C" float iTween_spring_m919 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuad_m920 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuad_m921 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuad_m922 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCubic_m923 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCubic_m924 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCubic_m925 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuart_m926 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuart_m927 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuart_m928 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInQuint_m929 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutQuint_m930 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutQuint_m931 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInSine_m932 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutSine_m933 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutSine_m934 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInExpo_m935 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutExpo_m936 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutExpo_m937 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInCirc_m938 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutCirc_m939 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutCirc_m940 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBounce_m941 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBounce_m942 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBounce_m943 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInBack_m944 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutBack_m945 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutBack_m946 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
extern "C" float iTween_punch_m947 (iTween_t121 * __this, float ___amplitude, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInElastic_m948 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeOutElastic_m949 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
extern "C" float iTween_easeInOutElastic_m950 (iTween_t121 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
