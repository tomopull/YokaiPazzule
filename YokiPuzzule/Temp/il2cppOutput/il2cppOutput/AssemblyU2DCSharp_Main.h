#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameModel
struct GameModel_t6;
// ObjectManager
struct ObjectManager_t14;
// Timer
struct Timer_t15;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_GameModel_SimpleTouch.h"

// Main
struct  Main_t13  : public MonoBehaviour_t2
{
	// GameModel Main::_game_model
	GameModel_t6 * ____game_model_2;
	// ObjectManager Main::_object_manager
	ObjectManager_t14 * ____object_manager_3;
	// GameModel/SimpleTouch Main::ActiveTouch
	SimpleTouch_t3  ___ActiveTouch_4;
	// Timer Main::_timer
	Timer_t15 * ____timer_5;
	// System.Boolean Main::time_up
	bool ___time_up_6;
};
