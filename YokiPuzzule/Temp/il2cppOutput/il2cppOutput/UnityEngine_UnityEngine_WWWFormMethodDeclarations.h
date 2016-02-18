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

// UnityEngine.WWWForm
struct WWWForm_t145;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t789;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m1111 (WWWForm_t145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m1113 (WWWForm_t145 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m3663 (WWWForm_t145 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t789 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
