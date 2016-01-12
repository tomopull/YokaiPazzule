#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_TouchPhase.h"

// GameModel/SimpleTouch
struct  SimpleTouch_t3 
{
	// UnityEngine.Vector2 GameModel/SimpleTouch::StartTouchLocation
	Vector2_t4  ___StartTouchLocation_0;
	// UnityEngine.Vector2 GameModel/SimpleTouch::CurrentTouchLocation
	Vector2_t4  ___CurrentTouchLocation_1;
	// System.DateTime GameModel/SimpleTouch::StartTime
	DateTime_t5  ___StartTime_2;
	// UnityEngine.TouchPhase GameModel/SimpleTouch::Phase
	int32_t ___Phase_3;
};
