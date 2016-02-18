#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Delegate/VoidDelegate
struct VoidDelegate_t91;

#include "mscorlib_System_Object.h"

// Timer
struct  Timer_t28  : public Object_t
{
	// System.Boolean Timer::isEnable
	bool ___isEnable_0;
	// System.Single Timer::<CurrentTime>k__BackingField
	float ___U3CCurrentTimeU3Ek__BackingField_1;
	// System.Single Timer::<LimitTime>k__BackingField
	float ___U3CLimitTimeU3Ek__BackingField_2;
	// Delegate/VoidDelegate Timer::<FireDelegate>k__BackingField
	VoidDelegate_t91 * ___U3CFireDelegateU3Ek__BackingField_3;
};
