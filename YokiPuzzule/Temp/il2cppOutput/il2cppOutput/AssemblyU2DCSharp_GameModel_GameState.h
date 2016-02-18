#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"

// GameModel/GameState
struct  GameState_t8 
{
	// System.String GameModel/GameState::GAME_START_STATE
	String_t* ___GAME_START_STATE_0;
	// System.String GameModel/GameState::GAME_PLAY_STATE
	String_t* ___GAME_PLAY_STATE_1;
	// System.String GameModel/GameState::GAME_END_STATE
	String_t* ___GAME_END_STATE_2;
	// System.String GameModel/GameState::GAME_IDLE_STATE
	String_t* ___GAME_IDLE_STATE_3;
};
// Native definition for marshalling of: GameModel/GameState
struct GameState_t8_marshaled
{
	char* ___GAME_START_STATE_0;
	char* ___GAME_PLAY_STATE_1;
	char* ___GAME_END_STATE_2;
	char* ___GAME_IDLE_STATE_3;
};
