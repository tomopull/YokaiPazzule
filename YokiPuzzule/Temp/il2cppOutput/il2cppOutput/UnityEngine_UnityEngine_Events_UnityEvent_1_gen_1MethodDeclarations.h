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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t328;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t499;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t766;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2872_gshared (UnityEvent_1_t328 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2872(__this, method) (( void (*) (UnityEvent_1_t328 *, const MethodInfo*))UnityEvent_1__ctor_m2872_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2874_gshared (UnityEvent_1_t328 * __this, UnityAction_1_t499 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2874(__this, ___call, method) (( void (*) (UnityEvent_1_t328 *, UnityAction_1_t499 *, const MethodInfo*))UnityEvent_1_AddListener_m2874_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m3160_gshared (UnityEvent_1_t328 * __this, UnityAction_1_t499 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3160(__this, ___call, method) (( void (*) (UnityEvent_1_t328 *, UnityAction_1_t499 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3160_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m16742_gshared (UnityEvent_1_t328 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m16742(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t328 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m16742_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t766 * UnityEvent_1_GetDelegate_m16743_gshared (UnityEvent_1_t328 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16743(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t766 * (*) (UnityEvent_1_t328 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m16743_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t766 * UnityEvent_1_GetDelegate_m16744_gshared (Object_t * __this /* static, unused */, UnityAction_1_t499 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m16744(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t766 * (*) (Object_t * /* static, unused */, UnityAction_1_t499 *, const MethodInfo*))UnityEvent_1_GetDelegate_m16744_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2873_gshared (UnityEvent_1_t328 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2873(__this, ___arg0, method) (( void (*) (UnityEvent_1_t328 *, float, const MethodInfo*))UnityEvent_1_Invoke_m2873_gshared)(__this, ___arg0, method)
