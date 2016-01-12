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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1316;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t741;
// System.Reflection.Binder
struct Binder_t731;
// System.Type[]
struct TypeU5BU5D_t185;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t732;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1782;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t152;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1378;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t153;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.Globalization.CultureInfo
struct CultureInfo_t733;
// System.String[]
struct StringU5BU5D_t104;
// System.Reflection.Assembly
struct Assembly_t936;
// System.Reflection.Module
struct Module_t1324;
// System.Exception
struct Exception_t121;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m8268 (GenericTypeParameterBuilder_t1316 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m8269 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t741 * GenericTypeParameterBuilder_GetConstructorImpl_m8270 (GenericTypeParameterBuilder_t1316 * __this, int32_t ___bindingAttr, Binder_t731 * ___binder, int32_t ___callConvention, TypeU5BU5D_t185* ___types, ParameterModifierU5BU5D_t732* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1782* GenericTypeParameterBuilder_GetConstructors_m8271 (GenericTypeParameterBuilder_t1316 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m8272 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m8273 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t152* GenericTypeParameterBuilder_GetFields_m8274 (GenericTypeParameterBuilder_t1316 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetInterface(System.String,System.Boolean)
extern "C" Type_t * GenericTypeParameterBuilder_GetInterface_m8275 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t185* GenericTypeParameterBuilder_GetInterfaces_m8276 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1378* GenericTypeParameterBuilder_GetMethods_m8277 (GenericTypeParameterBuilder_t1316 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m8278 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t731 * ___binder, int32_t ___callConvention, TypeU5BU5D_t185* ___types, ParameterModifierU5BU5D_t732* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t153* GenericTypeParameterBuilder_GetProperties_m8279 (GenericTypeParameterBuilder_t1316 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m8280 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t731 * ___binder, Type_t * ___returnType, TypeU5BU5D_t185* ___types, ParameterModifierU5BU5D_t732* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m8281 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m8282 (GenericTypeParameterBuilder_t1316 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m8283 (GenericTypeParameterBuilder_t1316 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m8284 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m8285 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m8286 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m8287 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m8288 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m8289 (GenericTypeParameterBuilder_t1316 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t731 * ___binder, Object_t * ___target, ObjectU5BU5D_t129* ___args, ParameterModifierU5BU5D_t732* ___modifiers, CultureInfo_t733 * ___culture, StringU5BU5D_t104* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m8290 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m8291 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t936 * GenericTypeParameterBuilder_get_Assembly_m8292 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m8293 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m8294 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m8295 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m8296 (GenericTypeParameterBuilder_t1316 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t129* GenericTypeParameterBuilder_GetCustomAttributes_m8297 (GenericTypeParameterBuilder_t1316 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t129* GenericTypeParameterBuilder_GetCustomAttributes_m8298 (GenericTypeParameterBuilder_t1316 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m8299 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m8300 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t1324 * GenericTypeParameterBuilder_get_Module_m8301 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m8302 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m8303 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1126  GenericTypeParameterBuilder_get_TypeHandle_m8304 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t185* GenericTypeParameterBuilder_GetGenericArguments_m8305 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m8306 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m8307 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m8308 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m8309 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m8310 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t121 * GenericTypeParameterBuilder_not_supported_m8311 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m8312 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m8313 (GenericTypeParameterBuilder_t1316 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m8314 (GenericTypeParameterBuilder_t1316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m8315 (GenericTypeParameterBuilder_t1316 * __this, TypeU5BU5D_t185* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
