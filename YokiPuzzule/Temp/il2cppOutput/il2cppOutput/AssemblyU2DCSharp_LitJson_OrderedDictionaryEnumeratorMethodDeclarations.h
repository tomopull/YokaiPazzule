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

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t55;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t56;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C" void OrderedDictionaryEnumerator__ctor_m406 (OrderedDictionaryEnumerator_t55 * __this, Object_t* ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Current_m407 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t158  OrderedDictionaryEnumerator_get_Entry_m408 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Key_m409 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Value_m410 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C" bool OrderedDictionaryEnumerator_MoveNext_m411 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C" void OrderedDictionaryEnumerator_Reset_m412 (OrderedDictionaryEnumerator_t55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
