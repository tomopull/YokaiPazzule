#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TopSceneModel
struct TopSceneModel_t17;
// GameModel
struct GameModel_t5;
// UIManager
struct UIManager_t18;
// UnityEngine.UI.Text
struct Text_t21;
// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.UI.Button
struct Button_t22;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CanvasTopScene
struct  CanvasTopScene_t20  : public MonoBehaviour_t2
{
	// TopSceneModel CanvasTopScene::_top_scene_model
	TopSceneModel_t17 * ____top_scene_model_2;
	// GameModel CanvasTopScene::_game_model
	GameModel_t5 * ____game_model_3;
	// UIManager CanvasTopScene::_ui_manager
	UIManager_t18 * ____ui_manager_4;
	// UnityEngine.UI.Text CanvasTopScene::_title_text
	Text_t21 * ____title_text_5;
	// UnityEngine.UI.Text CanvasTopScene::_rule_text
	Text_t21 * ____rule_text_6;
	// UnityEngine.UI.Text CanvasTopScene::_more_text
	Text_t21 * ____more_text_7;
	// UnityEngine.GameObject CanvasTopScene::_menu
	GameObject_t3 * ____menu_8;
	// UnityEngine.UI.Button CanvasTopScene::_start_button
	Button_t22 * ____start_button_9;
	// UnityEngine.UI.Button CanvasTopScene::_rule_button
	Button_t22 * ____rule_button_10;
	// UnityEngine.UI.Button CanvasTopScene::_more_button
	Button_t22 * ____more_button_11;
};
