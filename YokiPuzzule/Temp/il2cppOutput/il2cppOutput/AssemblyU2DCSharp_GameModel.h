#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.JsonData
struct JsonData_t7;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t8;
// ObjectData
struct ObjectData_t10;
// System.String
struct String_t;
// GameModel
struct GameModel_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Touch.h"

// GameModel
struct  GameModel_t6  : public MonoBehaviour_t2
{
	// System.Int32 GameModel::total_object_count
	int32_t ___total_object_count_3;
	// System.Single GameModel::game_time
	float ___game_time_4;
	// System.Int32 GameModel::total_point
	int32_t ___total_point_5;
	// LitJson.JsonData GameModel::original_json_data
	JsonData_t7 * ___original_json_data_6;
	// System.Int32 GameModel::rowCount
	int32_t ___rowCount_7;
	// System.Int32 GameModel::columnCount
	int32_t ___columnCount_8;
	// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::object_data_dict
	Dictionary_2_t8 * ___object_data_dict_9;
	// System.Boolean GameModel::isInteractive
	bool ___isInteractive_10;
	// UnityEngine.Touch GameModel::deviceTouch
	Touch_t9  ___deviceTouch_11;
	// System.Single GameModel::swipeTime
	float ___swipeTime_12;
	// System.Single GameModel::swipeDistance
	float ___swipeDistance_13;
	// System.Boolean GameModel::isButtonDown
	bool ___isButtonDown_14;
	// System.Int32 GameModel::first_object_selected_category
	int32_t ___first_object_selected_category_15;
	// System.Single GameModel::touch_distance
	float ___touch_distance_16;
	// ObjectData GameModel::last_but_one_object_selected
	ObjectData_t10 * ___last_but_one_object_selected_17;
	// ObjectData GameModel::last_object_selected
	ObjectData_t10 * ___last_object_selected_18;
	// ObjectData GameModel::nearest_obj
	ObjectData_t10 * ___nearest_obj_19;
	// System.Single GameModel::nearest_dist
	float ___nearest_dist_20;
	// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::selected_object_data_dict
	Dictionary_2_t8 * ___selected_object_data_dict_21;
	// System.Int32 GameModel::minimum_number_of_object_data
	int32_t ___minimum_number_of_object_data_22;
	// System.String GameModel::json_path
	String_t* ___json_path_23;
};
struct GameModel_t6_StaticFields{
	// System.UInt64 GameModel::_uniqe_index
	uint64_t ____uniqe_index_2;
	// GameModel GameModel::instance
	GameModel_t6 * ___instance_24;
};
