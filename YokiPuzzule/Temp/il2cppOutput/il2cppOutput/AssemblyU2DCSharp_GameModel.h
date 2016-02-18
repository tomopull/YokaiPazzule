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
// LitJson.JsonData
struct JsonData_t12;
// System.Collections.Generic.Dictionary`2<System.String,ObjectData>
struct Dictionary_2_t13;
// ObjectData
struct ObjectData_t1;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct List_1_t15;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t16;
// GameModel
struct GameModel_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Touch.h"

// GameModel
struct  GameModel_t5  : public MonoBehaviour_t2
{
	// System.String GameModel::prefab_resource_path
	String_t* ___prefab_resource_path_4;
	// System.String GameModel::now_state
	String_t* ___now_state_5;
	// System.Int32 GameModel::total_object_count
	int32_t ___total_object_count_7;
	// System.Single GameModel::game_time
	float ___game_time_8;
	// System.Int32 GameModel::line_num
	int32_t ___line_num_9;
	// System.Int32 GameModel::total_point
	int32_t ___total_point_10;
	// System.Int32 GameModel::highest_total_point
	int32_t ___highest_total_point_11;
	// LitJson.JsonData GameModel::original_json_data
	JsonData_t12 * ___original_json_data_12;
	// System.Int32 GameModel::rowCount
	int32_t ___rowCount_13;
	// System.Int32 GameModel::columnCount
	int32_t ___columnCount_14;
	// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::object_data_dict
	Dictionary_2_t13 * ___object_data_dict_15;
	// System.Boolean GameModel::isInteractive
	bool ___isInteractive_16;
	// UnityEngine.Touch GameModel::deviceTouch
	Touch_t14  ___deviceTouch_17;
	// System.Single GameModel::swipeTime
	float ___swipeTime_18;
	// System.Single GameModel::swipeDistance
	float ___swipeDistance_19;
	// System.Boolean GameModel::isButtonDown
	bool ___isButtonDown_20;
	// System.Int32 GameModel::first_object_selected_category
	int32_t ___first_object_selected_category_21;
	// System.Single GameModel::touch_distance
	float ___touch_distance_22;
	// ObjectData GameModel::last_but_one_object_selected
	ObjectData_t1 * ___last_but_one_object_selected_23;
	// ObjectData GameModel::last_object_selected
	ObjectData_t1 * ___last_object_selected_24;
	// ObjectData GameModel::nearest_obj
	ObjectData_t1 * ___nearest_obj_25;
	// System.Single GameModel::nearest_dist
	float ___nearest_dist_26;
	// System.Collections.Generic.Dictionary`2<System.String,ObjectData> GameModel::selected_object_data_dict
	Dictionary_2_t13 * ___selected_object_data_dict_27;
	// System.Int32 GameModel::minimum_number_of_object_data
	int32_t ___minimum_number_of_object_data_28;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.GameObject>> GameModel::_particle_data_list
	List_1_t15 * ____particle_data_list_29;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameModel::vanish_particle_list
	List_1_t16 * ___vanish_particle_list_30;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameModel::get_point_particle_list
	List_1_t16 * ___get_point_particle_list_31;
	// System.String GameModel::json_path
	String_t* ___json_path_32;
};
struct GameModel_t5_StaticFields{
	// System.UInt64 GameModel::_uniqe_index
	uint64_t ____uniqe_index_6;
	// GameModel GameModel::instance
	GameModel_t5 * ___instance_33;
};
