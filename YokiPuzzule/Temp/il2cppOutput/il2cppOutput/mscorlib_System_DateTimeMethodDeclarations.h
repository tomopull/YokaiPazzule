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

// System.IFormatProvider
struct IFormatProvider_t68;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t159;
// System.String[]
struct StringU5BU5D_t144;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t219;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTimeKind.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_DateTime_Which.h"
#include "mscorlib_System_DayOfWeek.h"
#include "mscorlib_System_Globalization_DateTimeStyles.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C" void DateTime__ctor_m11258 (DateTime_t11 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m11259 (DateTime_t11 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m4549 (DateTime_t11 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C" void DateTime__ctor_m11260 (DateTime_t11 * __this, bool ___check, TimeSpan_t180  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C" void DateTime__ctor_m11261 (DateTime_t11 * __this, int64_t ___ticks, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C" void DateTime__cctor_m11262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DateTime_System_IConvertible_ToBoolean_m11263 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DateTime_System_IConvertible_ToByte_m11264 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToChar_m11265 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t11  DateTime_System_IConvertible_ToDateTime_m11266 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t160  DateTime_System_IConvertible_ToDecimal_m11267 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DateTime_System_IConvertible_ToDouble_m11268 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DateTime_System_IConvertible_ToInt16_m11269 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DateTime_System_IConvertible_ToInt32_m11270 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DateTime_System_IConvertible_ToInt64_m11271 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DateTime_System_IConvertible_ToSByte_m11272 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DateTime_System_IConvertible_ToSingle_m11273 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DateTime_System_IConvertible_ToType_m11274 (DateTime_t11 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToUInt16_m11275 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DateTime_System_IConvertible_ToUInt32_m11276 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DateTime_System_IConvertible_ToUInt64_m11277 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C" int32_t DateTime_AbsoluteDays_m11278 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C" int32_t DateTime_FromTicks_m11279 (DateTime_t11 * __this, int32_t ___what, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C" int32_t DateTime_get_Month_m11280 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C" int32_t DateTime_get_Day_m11281 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C" int32_t DateTime_get_DayOfWeek_m11282 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C" int32_t DateTime_get_Hour_m11283 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C" int32_t DateTime_get_Minute_m11284 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C" int32_t DateTime_get_Second_m11285 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C" int64_t DateTime_GetTimeMonotonic_m11286 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C" int64_t DateTime_GetNow_m11287 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C" DateTime_t11  DateTime_get_Now_m1028 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C" int64_t DateTime_get_Ticks_m6630 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C" DateTime_t11  DateTime_get_Today_m11288 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C" DateTime_t11  DateTime_get_UtcNow_m6604 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C" int32_t DateTime_get_Year_m11289 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C" int32_t DateTime_get_Kind_m11290 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C" DateTime_t11  DateTime_Add_m11291 (DateTime_t11 * __this, TimeSpan_t180  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C" DateTime_t11  DateTime_AddTicks_m11292 (DateTime_t11 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C" DateTime_t11  DateTime_AddMilliseconds_m5547 (DateTime_t11 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" DateTime_t11  DateTime_AddSeconds_m4550 (DateTime_t11 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C" int32_t DateTime_Compare_m11293 (Object_t * __this /* static, unused */, DateTime_t11  ___t1, DateTime_t11  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C" int32_t DateTime_CompareTo_m11294 (DateTime_t11 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C" int32_t DateTime_CompareTo_m11295 (DateTime_t11 * __this, DateTime_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C" bool DateTime_Equals_m11296 (DateTime_t11 * __this, DateTime_t11  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C" DateTime_t11  DateTime_FromBinary_m11297 (Object_t * __this /* static, unused */, int64_t ___dateData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C" DateTime_t11  DateTime_SpecifyKind_m11298 (Object_t * __this /* static, unused */, DateTime_t11  ___value, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C" int32_t DateTime_DaysInMonth_m11299 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C" bool DateTime_Equals_m11300 (DateTime_t11 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C" void DateTime_CheckDateTimeKind_m11301 (DateTime_t11 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C" int32_t DateTime_GetHashCode_m11302 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C" bool DateTime_IsLeapYear_m11303 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C" DateTime_t11  DateTime_Parse_m11304 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t11  DateTime_Parse_m11305 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C" bool DateTime_CoreParse_m11306 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t11 * ___result, DateTimeOffset_t1769 * ___dto, bool ___setExceptionOnError, Exception_t159 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C" StringU5BU5D_t144* DateTime_YearMonthDayFormats_m11307 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t219 * ___dfi, bool ___setExceptionOnError, Exception_t159 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseNumber_m11308 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseEnum_m11309 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t144* ___values, StringU5BU5D_t144* ___invValues, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C" bool DateTime__ParseString_m11310 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C" bool DateTime__ParseAmPm_m11311 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t219 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseTimeSeparator_m11312 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t219 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseDateSeparator_m11313 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t219 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C" bool DateTime_IsLetter_m11314 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C" bool DateTime__DoParse_m11315 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t11 * ___result, DateTimeOffset_t1769 * ___dto, DateTimeFormatInfo_t219 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t11  DateTime_ParseExact_m6580 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t11  DateTime_ParseExact_m11316 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t144* ___formats, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C" void DateTime_CheckStyle_m11317 (Object_t * __this /* static, unused */, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C" bool DateTime_ParseExact_m11318 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t144* ___formats, DateTimeFormatInfo_t219 * ___dfi, int32_t ___style, DateTime_t11 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t159 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C" DateTime_t11  DateTime_Subtract_m11319 (DateTime_t11 * __this, TimeSpan_t180  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C" String_t* DateTime_ToString_m11320 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m11321 (DateTime_t11 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m11322 (DateTime_t11 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C" DateTime_t11  DateTime_ToLocalTime_m5588 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" DateTime_t11  DateTime_ToUniversalTime_m11323 (DateTime_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C" DateTime_t11  DateTime_op_Addition_m11324 (Object_t * __this /* static, unused */, DateTime_t11  ___d, TimeSpan_t180  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Equality_m11325 (Object_t * __this /* static, unused */, DateTime_t11  ___d1, DateTime_t11  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThan_m5614 (Object_t * __this /* static, unused */, DateTime_t11  ___t1, DateTime_t11  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThanOrEqual_m5548 (Object_t * __this /* static, unused */, DateTime_t11  ___t1, DateTime_t11  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Inequality_m11326 (Object_t * __this /* static, unused */, DateTime_t11  ___d1, DateTime_t11  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThan_m5613 (Object_t * __this /* static, unused */, DateTime_t11  ___t1, DateTime_t11  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThanOrEqual_m5612 (Object_t * __this /* static, unused */, DateTime_t11  ___t1, DateTime_t11  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C" TimeSpan_t180  DateTime_op_Subtraction_m1029 (Object_t * __this /* static, unused */, DateTime_t11  ___d1, DateTime_t11  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C" DateTime_t11  DateTime_op_Subtraction_m11327 (Object_t * __this /* static, unused */, DateTime_t11  ___d, TimeSpan_t180  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
