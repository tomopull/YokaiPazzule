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

extern "C" void GameState_t8_marshal(const GameState_t8& unmarshaled, GameState_t8_marshaled& marshaled);
extern "C" void GameState_t8_marshal_back(const GameState_t8_marshaled& marshaled, GameState_t8& unmarshaled);
extern "C" void GameState_t8_marshal_cleanup(GameState_t8_marshaled& marshaled);
