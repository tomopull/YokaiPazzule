﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.StringBuilder
struct StringBuilder_t28;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t718;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t34;
// System.Object[]
struct ObjectU5BU5D_t129;
// System.IFormatProvider
struct IFormatProvider_t56;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m10028 (StringBuilder_t28 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m10029 (StringBuilder_t28 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C" void StringBuilder__ctor_m675 (StringBuilder_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" void StringBuilder__ctor_m860 (StringBuilder_t28 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" void StringBuilder__ctor_m2310 (StringBuilder_t28 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" void StringBuilder__ctor_m4778 (StringBuilder_t28 * __this, String_t* ___value, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder__ctor_m10030 (StringBuilder_t28 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m10031 (StringBuilder_t28 * __this, SerializationInfo_t718 * ___info, StreamingContext_t719  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C" int32_t StringBuilder_get_Capacity_m10032 (StringBuilder_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C" void StringBuilder_set_Capacity_m10033 (StringBuilder_t28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" int32_t StringBuilder_get_Length_m687 (StringBuilder_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" void StringBuilder_set_Length_m688 (StringBuilder_t28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C" uint16_t StringBuilder_get_Chars_m10034 (StringBuilder_t28 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C" void StringBuilder_set_Chars_m10035 (StringBuilder_t28 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C" String_t* StringBuilder_ToString_m678 (StringBuilder_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" String_t* StringBuilder_ToString_m10036 (StringBuilder_t28 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Remove_m852 (StringBuilder_t28 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C" StringBuilder_t28 * StringBuilder_Replace_m10037 (StringBuilder_t28 * __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Replace_m10038 (StringBuilder_t28 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" StringBuilder_t28 * StringBuilder_Append_m681 (StringBuilder_t28 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Append_m4832 (StringBuilder_t28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" StringBuilder_t28 * StringBuilder_Append_m4793 (StringBuilder_t28 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" StringBuilder_t28 * StringBuilder_Append_m4779 (StringBuilder_t28 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" StringBuilder_t28 * StringBuilder_Append_m862 (StringBuilder_t28 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Append_m10039 (StringBuilder_t28 * __this, uint16_t ___value, int32_t ___repeatCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Append_m10040 (StringBuilder_t28 * __this, CharU5BU5D_t34* ___value, int32_t ___startIndex, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Append_m4895 (StringBuilder_t28 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C" StringBuilder_t28 * StringBuilder_AppendLine_m2255 (StringBuilder_t28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" StringBuilder_t28 * StringBuilder_AppendLine_m2254 (StringBuilder_t28 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" StringBuilder_t28 * StringBuilder_AppendFormat_m5827 (StringBuilder_t28 * __this, String_t* ___format, ObjectU5BU5D_t129* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t28 * StringBuilder_AppendFormat_m10041 (StringBuilder_t28 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t129* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" StringBuilder_t28 * StringBuilder_AppendFormat_m682 (StringBuilder_t28 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" StringBuilder_t28 * StringBuilder_AppendFormat_m4852 (StringBuilder_t28 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" StringBuilder_t28 * StringBuilder_AppendFormat_m4855 (StringBuilder_t28 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C" StringBuilder_t28 * StringBuilder_Insert_m10042 (StringBuilder_t28 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" StringBuilder_t28 * StringBuilder_Insert_m10043 (StringBuilder_t28 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C" StringBuilder_t28 * StringBuilder_Insert_m10044 (StringBuilder_t28 * __this, int32_t ___index, String_t* ___value, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C" void StringBuilder_InternalEnsureCapacity_m10045 (StringBuilder_t28 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
