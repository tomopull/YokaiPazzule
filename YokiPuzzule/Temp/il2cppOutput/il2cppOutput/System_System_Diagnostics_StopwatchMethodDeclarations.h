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

// System.Diagnostics.Stopwatch
struct Stopwatch_t35;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" void Stopwatch__ctor_m703 (Stopwatch_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C" void Stopwatch__cctor_m3942 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C" int64_t Stopwatch_GetTimestamp_m3943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C" TimeSpan_t125  Stopwatch_get_Elapsed_m680 (Stopwatch_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C" int64_t Stopwatch_get_ElapsedTicks_m3944 (Stopwatch_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C" void Stopwatch_Reset_m676 (Stopwatch_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" void Stopwatch_Start_m677 (Stopwatch_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
