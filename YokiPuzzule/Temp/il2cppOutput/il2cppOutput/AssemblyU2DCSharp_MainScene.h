#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameModel
struct GameModel_t5;
// GameObjectManager
struct GameObjectManager_t6;
// CanvasObjectManager
struct CanvasObjectManager_t4;
// ParticleManager
struct ParticleManager_t7;
// UnityEngine.UI.Text
struct Text_t21;
// UnityEngine.UI.Button
struct Button_t22;
// Timer
struct Timer_t28;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_GameModel_SimpleTouch.h"
#include "AssemblyU2DCSharp_GameModel_GameState.h"

// MainScene
struct  MainScene_t25  : public MonoBehaviour_t2
{
	// GameModel MainScene::_game_model
	GameModel_t5 * ____game_model_2;
	// GameObjectManager MainScene::_game_object_manager
	GameObjectManager_t6 * ____game_object_manager_3;
	// CanvasObjectManager MainScene::_canvas_object_manager
	CanvasObjectManager_t4 * ____canvas_object_manager_4;
	// ParticleManager MainScene::_particle_manager
	ParticleManager_t7 * ____particle_manager_5;
	// GameModel/SimpleTouch MainScene::ActiveTouch
	SimpleTouch_t9  ___ActiveTouch_6;
	// GameModel/GameState MainScene::_game_state
	GameState_t8  ____game_state_7;
	// UnityEngine.UI.Text MainScene::_base_url_text
	Text_t21 * ____base_url_text_8;
	// UnityEngine.UI.Text MainScene::_url_text
	Text_t21 * ____url_text_9;
	// UnityEngine.UI.Text MainScene::_point_text
	Text_t21 * ____point_text_10;
	// UnityEngine.UI.Text MainScene::_obj_count_text
	Text_t21 * ____obj_count_text_11;
	// UnityEngine.UI.Text MainScene::_total_point_text
	Text_t21 * ____total_point_text_12;
	// UnityEngine.UI.Text MainScene::_highest_total_point_text
	Text_t21 * ____highest_total_point_text_13;
	// UnityEngine.UI.Button MainScene::_retry_button
	Button_t22 * ____retry_button_14;
	// UnityEngine.UI.Button MainScene::_back_to_top_button
	Button_t22 * ____back_to_top_button_15;
	// UnityEngine.UI.Button MainScene::_reset_button
	Button_t22 * ____reset_button_16;
	// Timer MainScene::_timer
	Timer_t28 * ____timer_17;
	// System.Boolean MainScene::time_up
	bool ___time_up_18;
	// System.Single MainScene::_wait_time
	float ____wait_time_19;
	// System.Single MainScene::_wait_time_add
	float ____wait_time_add_20;
	// System.Single MainScene::_wait_time_default
	float ____wait_time_default_21;
	// System.Single MainScene::_delay_time_tween
	float ____delay_time_tween_22;
	// System.Boolean MainScene::_first_flag
	bool ____first_flag_23;
};
