#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t16;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ObjectData
struct  ObjectData_t10  : public MonoBehaviour_t2
{
	// System.Int32 ObjectData::_point
	int32_t ____point_2;
	// System.Int32 ObjectData::_category
	int32_t ____category_4;
	// UnityEngine.GameObject ObjectData::obj
	GameObject_t16 * ___obj_5;
	// System.String ObjectData::key
	String_t* ___key_6;
};
struct ObjectData_t10_StaticFields{
	// System.Int32 ObjectData::NullCategory
	int32_t ___NullCategory_3;
};
