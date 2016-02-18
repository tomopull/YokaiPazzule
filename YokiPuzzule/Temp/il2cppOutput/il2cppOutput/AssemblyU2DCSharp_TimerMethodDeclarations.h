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

// Timer
struct Timer_t28;
// Delegate/VoidDelegate
struct VoidDelegate_t91;

#include "codegen/il2cpp-codegen.h"

// System.Void Timer::.ctor()
extern "C" void Timer__ctor_m639 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_CurrentTime()
extern "C" float Timer_get_CurrentTime_m640 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_CurrentTime(System.Single)
extern "C" void Timer_set_CurrentTime_m641 (Timer_t28 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_RemainingTime()
extern "C" float Timer_get_RemainingTime_m642 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_RemainingTime(System.Single)
extern "C" void Timer_set_RemainingTime_m643 (Timer_t28 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_LimitTime()
extern "C" float Timer_get_LimitTime_m644 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_LimitTime(System.Single)
extern "C" void Timer_set_LimitTime_m645 (Timer_t28 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Delegate/VoidDelegate Timer::get_FireDelegate()
extern "C" VoidDelegate_t91 * Timer_get_FireDelegate_m646 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_FireDelegate(Delegate/VoidDelegate)
extern "C" void Timer_set_FireDelegate_m647 (Timer_t28 * __this, VoidDelegate_t91 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::get_IsEnable()
extern "C" bool Timer_get_IsEnable_m648 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_IsEnable(System.Boolean)
extern "C" void Timer_set_IsEnable_m649 (Timer_t28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::Update()
extern "C" bool Timer_Update_m650 (Timer_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
