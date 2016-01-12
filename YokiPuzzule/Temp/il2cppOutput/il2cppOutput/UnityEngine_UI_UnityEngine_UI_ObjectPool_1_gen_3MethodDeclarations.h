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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m16212(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2210 *, UnityAction_1_t2211 *, UnityAction_1_t2211 *, const MethodInfo*))ObjectPool_1__ctor_m14783_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m16213(__this, method) (( int32_t (*) (ObjectPool_1_t2210 *, const MethodInfo*))ObjectPool_1_get_countAll_m14785_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16214(__this, ___value, method) (( void (*) (ObjectPool_1_t2210 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m14787_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m16215(__this, method) (( int32_t (*) (ObjectPool_1_t2210 *, const MethodInfo*))ObjectPool_1_get_countActive_m14789_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16216(__this, method) (( int32_t (*) (ObjectPool_1_t2210 *, const MethodInfo*))ObjectPool_1_get_countInactive_m14791_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m16217(__this, method) (( List_1_t477 * (*) (ObjectPool_1_t2210 *, const MethodInfo*))ObjectPool_1_Get_m14793_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m16218(__this, ___element, method) (( void (*) (ObjectPool_1_t2210 *, List_1_t477 *, const MethodInfo*))ObjectPool_1_Release_m14795_gshared)(__this, ___element, method)
