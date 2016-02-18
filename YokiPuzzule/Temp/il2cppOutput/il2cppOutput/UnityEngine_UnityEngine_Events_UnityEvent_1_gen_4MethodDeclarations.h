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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t399;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t529;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t766;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m3136_gshared (UnityEvent_1_t399 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3136(__this, method) (( void (*) (UnityEvent_1_t399 *, const MethodInfo*))UnityEvent_1__ctor_m3136_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2946_gshared (UnityEvent_1_t399 * __this, UnityAction_1_t529 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2946(__this, ___call, method) (( void (*) (UnityEvent_1_t399 *, UnityAction_1_t529 *, const MethodInfo*))UnityEvent_1_AddListener_m2946_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17208_gshared (UnityEvent_1_t399 * __this, UnityAction_1_t529 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17208(__this, ___call, method) (( void (*) (UnityEvent_1_t399 *, UnityAction_1_t529 *, const MethodInfo*))UnityEvent_1_RemoveListener_m17208_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17209_gshared (UnityEvent_1_t399 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17209(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t399 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17209_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t766 * UnityEvent_1_GetDelegate_m17210_gshared (UnityEvent_1_t399 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17210(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t766 * (*) (UnityEvent_1_t399 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17210_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t766 * UnityEvent_1_GetDelegate_m17211_gshared (Object_t * __this /* static, unused */, UnityAction_1_t529 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17211(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t766 * (*) (Object_t * /* static, unused */, UnityAction_1_t529 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17211_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3141_gshared (UnityEvent_1_t399 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3141(__this, ___arg0, method) (( void (*) (UnityEvent_1_t399 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m3141_gshared)(__this, ___arg0, method)
