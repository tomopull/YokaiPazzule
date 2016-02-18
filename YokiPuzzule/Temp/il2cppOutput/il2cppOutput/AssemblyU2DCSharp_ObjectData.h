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
// UnityEngine.GameObject
struct GameObject_t3;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ObjectData
struct  ObjectData_t1  : public MonoBehaviour_t2
{
	// System.Int32 ObjectData::_point
	int32_t ____point_2;
	// System.Int32 ObjectData::_category
	int32_t ____category_6;
	// UnityEngine.GameObject ObjectData::obj
	GameObject_t3 * ___obj_7;
	// System.String ObjectData::_data_state
	String_t* ____data_state_8;
	// System.String ObjectData::key
	String_t* ___key_9;
};
struct ObjectData_t1_StaticFields{
	// System.Int32 ObjectData::NullCategory
	int32_t ___NullCategory_3;
	// System.String ObjectData::Idle
	String_t* ___Idle_4;
	// System.String ObjectData::SELECTED
	String_t* ___SELECTED_5;
};
