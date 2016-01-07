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
struct Timer_t15;
// Delegate/VoidDelegate
struct VoidDelegate_t79;

#include "codegen/il2cpp-codegen.h"

// System.Void Timer::.ctor()
extern "C" void Timer__ctor_m575 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_CurrentTime()
extern "C" float Timer_get_CurrentTime_m576 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_CurrentTime(System.Single)
extern "C" void Timer_set_CurrentTime_m577 (Timer_t15 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_RemainingTime()
extern "C" float Timer_get_RemainingTime_m578 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_RemainingTime(System.Single)
extern "C" void Timer_set_RemainingTime_m579 (Timer_t15 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Timer::get_LimitTime()
extern "C" float Timer_get_LimitTime_m580 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_LimitTime(System.Single)
extern "C" void Timer_set_LimitTime_m581 (Timer_t15 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Delegate/VoidDelegate Timer::get_FireDelegate()
extern "C" VoidDelegate_t79 * Timer_get_FireDelegate_m582 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_FireDelegate(Delegate/VoidDelegate)
extern "C" void Timer_set_FireDelegate_m583 (Timer_t15 * __this, VoidDelegate_t79 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::get_IsEnable()
extern "C" bool Timer_get_IsEnable_m584 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::set_IsEnable(System.Boolean)
extern "C" void Timer_set_IsEnable_m585 (Timer_t15 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::Update()
extern "C" bool Timer_Update_m586 (Timer_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
