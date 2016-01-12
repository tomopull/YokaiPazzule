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

// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t1335;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1378;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t178;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t731;
// System.Globalization.CultureInfo
struct CultureInfo_t733;
// System.Reflection.Module
struct Module_t1324;
// System.Exception
struct Exception_t121;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C" int32_t PropertyBuilder_get_Attributes_m8380 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C" bool PropertyBuilder_get_CanRead_m8381 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C" bool PropertyBuilder_get_CanWrite_m8382 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m8383 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C" String_t* PropertyBuilder_get_Name_m8384 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C" Type_t * PropertyBuilder_get_PropertyType_m8385 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m8386 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1378* PropertyBuilder_GetAccessors_m8387 (PropertyBuilder_t1335 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t129* PropertyBuilder_GetCustomAttributes_m8388 (PropertyBuilder_t1335 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t129* PropertyBuilder_GetCustomAttributes_m8389 (PropertyBuilder_t1335 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m8390 (PropertyBuilder_t1335 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t178* PropertyBuilder_GetIndexParameters_m8391 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m8392 (PropertyBuilder_t1335 * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyBuilder_GetValue_m8393 (PropertyBuilder_t1335 * __this, Object_t * ___obj, ObjectU5BU5D_t129* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * PropertyBuilder_GetValue_m8394 (PropertyBuilder_t1335 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t731 * ___binder, ObjectU5BU5D_t129* ___index, CultureInfo_t733 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool PropertyBuilder_IsDefined_m8395 (PropertyBuilder_t1335 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyBuilder_SetValue_m8396 (PropertyBuilder_t1335 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t129* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void PropertyBuilder_SetValue_m8397 (PropertyBuilder_t1335 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t731 * ___binder, ObjectU5BU5D_t129* ___index, CultureInfo_t733 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C" Module_t1324 * PropertyBuilder_get_Module_m8398 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern "C" Exception_t121 * PropertyBuilder_not_supported_m8399 (PropertyBuilder_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
