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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2373;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2372;
// System.Object[]
struct ObjectU5BU5D_t164;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m18158_gshared (InvokableCall_1_t2373 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m18158(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2373 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m18158_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m18159_gshared (InvokableCall_1_t2373 * __this, UnityAction_1_t2372 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m18159(__this, ___action, method) (( void (*) (InvokableCall_1_t2373 *, UnityAction_1_t2372 *, const MethodInfo*))InvokableCall_1__ctor_m18159_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m18160_gshared (InvokableCall_1_t2373 * __this, ObjectU5BU5D_t164* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m18160(__this, ___args, method) (( void (*) (InvokableCall_1_t2373 *, ObjectU5BU5D_t164*, const MethodInfo*))InvokableCall_1_Invoke_m18160_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m18161_gshared (InvokableCall_1_t2373 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m18161(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2373 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m18161_gshared)(__this, ___targetObj, ___method, method)
