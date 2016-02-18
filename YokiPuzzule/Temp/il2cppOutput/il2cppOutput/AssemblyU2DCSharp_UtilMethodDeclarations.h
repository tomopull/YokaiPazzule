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

// System.Int32[]
struct Int32U5BU5D_t88;
// LitJson.JsonData
struct JsonData_t12;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3;
// GameModel
struct GameModel_t5;
// UnityEngine.UI.Text
struct Text_t21;
// UnityEngine.UI.Button
struct Button_t22;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Util::Shuffle(System.Int32[])
extern "C" void Util_Shuffle_m659 (Object_t * __this /* static, unused */, Int32U5BU5D_t88* ___deck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::Shuffle(LitJson.JsonData)
extern "C" void Util_Shuffle_m660 (Object_t * __this /* static, unused */, JsonData_t12 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::GetBaseURL()
extern "C" String_t* Util_GetBaseURL_m661 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::InstantiateUtil(GameModel,System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" GameObject_t3 * Util_InstantiateUtil_m662 (Object_t * __this /* static, unused */, GameModel_t5 * ____game_model, String_t* ___resource_path, Vector3_t27  ___default_position, Quaternion_t149  ___default_quaernion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text Util::FindTextComponentUtil(System.String)
extern "C" Text_t21 * Util_FindTextComponentUtil_m663 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text Util::SetTextToTextComponentUtil(System.String,UnityEngine.UI.Text)
extern "C" Text_t21 * Util_SetTextToTextComponentUtil_m664 (Object_t * __this /* static, unused */, String_t* ____str, Text_t21 * ____new_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Util::UpdateTextStringUtil(UnityEngine.UI.Text,System.String)
extern "C" String_t* Util_UpdateTextStringUtil_m665 (Object_t * __this /* static, unused */, Text_t21 * ____text, String_t* ____string, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Util::FindGameObjectUtil(System.String)
extern "C" GameObject_t3 * Util_FindGameObjectUtil_m666 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button Util::FindButtonComponentUtil(System.String)
extern "C" Button_t22 * Util_FindButtonComponentUtil_m667 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
