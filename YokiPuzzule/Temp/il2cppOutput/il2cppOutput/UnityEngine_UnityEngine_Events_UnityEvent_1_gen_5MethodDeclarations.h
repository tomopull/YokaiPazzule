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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t367;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2279;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t690;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m2683_gshared (UnityEvent_1_t367 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2683(__this, method) (( void (*) (UnityEvent_1_t367 *, const MethodInfo*))UnityEvent_1__ctor_m2683_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m17173_gshared (UnityEvent_1_t367 * __this, UnityAction_1_t2279 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m17173(__this, ___call, method) (( void (*) (UnityEvent_1_t367 *, UnityAction_1_t2279 *, const MethodInfo*))UnityEvent_1_AddListener_m17173_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17174_gshared (UnityEvent_1_t367 * __this, UnityAction_1_t2279 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17174(__this, ___call, method) (( void (*) (UnityEvent_1_t367 *, UnityAction_1_t2279 *, const MethodInfo*))UnityEvent_1_RemoveListener_m17174_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17175_gshared (UnityEvent_1_t367 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17175(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t367 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17175_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t690 * UnityEvent_1_GetDelegate_m17176_gshared (UnityEvent_1_t367 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17176(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t690 * (*) (UnityEvent_1_t367 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17176_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t690 * UnityEvent_1_GetDelegate_m17177_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2279 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17177(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t690 * (*) (Object_t * /* static, unused */, UnityAction_1_t2279 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17177_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2690_gshared (UnityEvent_1_t367 * __this, Vector2_t4  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2690(__this, ___arg0, method) (( void (*) (UnityEvent_1_t367 *, Vector2_t4 , const MethodInfo*))UnityEvent_1_Invoke_m2690_gshared)(__this, ___arg0, method)
