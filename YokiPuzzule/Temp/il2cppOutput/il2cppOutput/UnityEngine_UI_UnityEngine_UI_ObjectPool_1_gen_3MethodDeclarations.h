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
#define ObjectPool_1__ctor_m17194(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2304 *, UnityAction_1_t2305 *, UnityAction_1_t2305 *, const MethodInfo*))ObjectPool_1__ctor_m15865_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m17195(__this, method) (( int32_t (*) (ObjectPool_1_t2304 *, const MethodInfo*))ObjectPool_1_get_countAll_m15867_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17196(__this, ___value, method) (( void (*) (ObjectPool_1_t2304 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15869_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m17197(__this, method) (( int32_t (*) (ObjectPool_1_t2304 *, const MethodInfo*))ObjectPool_1_get_countActive_m15871_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17198(__this, method) (( int32_t (*) (ObjectPool_1_t2304 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15873_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m17199(__this, method) (( List_1_t527 * (*) (ObjectPool_1_t2304 *, const MethodInfo*))ObjectPool_1_Get_m15875_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m17200(__this, ___element, method) (( void (*) (ObjectPool_1_t2304 *, List_1_t527 *, const MethodInfo*))ObjectPool_1_Release_m15877_gshared)(__this, ___element, method)
