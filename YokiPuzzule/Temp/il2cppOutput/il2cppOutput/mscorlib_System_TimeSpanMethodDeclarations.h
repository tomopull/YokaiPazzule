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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m10937 (TimeSpan_t125 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10938 (TimeSpan_t125 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m10939 (TimeSpan_t125 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C" void TimeSpan__cctor_m10940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int64_t TimeSpan_CalculateTicks_m10941 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m10942 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m10943 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C" int32_t TimeSpan_get_Milliseconds_m10944 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m10945 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m10946 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m10947 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C" double TimeSpan_get_TotalDays_m10948 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C" double TimeSpan_get_TotalHours_m10949 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" double TimeSpan_get_TotalMilliseconds_m10950 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C" double TimeSpan_get_TotalMinutes_m10951 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" double TimeSpan_get_TotalSeconds_m617 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C" TimeSpan_t125  TimeSpan_Add_m10952 (TimeSpan_t125 * __this, TimeSpan_t125  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m10953 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C" int32_t TimeSpan_CompareTo_m10954 (TimeSpan_t125 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C" int32_t TimeSpan_CompareTo_m10955 (TimeSpan_t125 * __this, TimeSpan_t125  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C" bool TimeSpan_Equals_m10956 (TimeSpan_t125 * __this, TimeSpan_t125  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C" TimeSpan_t125  TimeSpan_Duration_m10957 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" bool TimeSpan_Equals_m10958 (TimeSpan_t125 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C" TimeSpan_t125  TimeSpan_FromDays_m10959 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C" TimeSpan_t125  TimeSpan_FromHours_m10960 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C" TimeSpan_t125  TimeSpan_FromMinutes_m10961 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C" TimeSpan_t125  TimeSpan_FromSeconds_m10962 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C" TimeSpan_t125  TimeSpan_FromMilliseconds_m10963 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C" TimeSpan_t125  TimeSpan_From_m10964 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern "C" TimeSpan_t125  TimeSpan_FromTicks_m4780 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" int32_t TimeSpan_GetHashCode_m10965 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C" TimeSpan_t125  TimeSpan_Negate_m10966 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C" TimeSpan_t125  TimeSpan_Subtract_m10967 (TimeSpan_t125 * __this, TimeSpan_t125  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C" String_t* TimeSpan_ToString_m10968 (TimeSpan_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t125  TimeSpan_op_Addition_m10969 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Equality_m10970 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThan_m10971 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m10972 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Inequality_m10973 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThan_m10974 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThanOrEqual_m10975 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t125  TimeSpan_op_Subtraction_m10976 (Object_t * __this /* static, unused */, TimeSpan_t125  ___t1, TimeSpan_t125  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
