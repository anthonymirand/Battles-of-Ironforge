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

// System.TimeZone
struct TimeZone_t1_815;
// System.Globalization.DaylightTime
struct DaylightTime_t1_217;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m1_5873 (TimeZone_t1_815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m1_5874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1_815 * TimeZone_get_CurrentTimeZone_m1_5875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m1_5876 (TimeZone_t1_815 * __this, DateTime_t1_128  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m1_5877 (Object_t * __this /* static, unused */, DateTime_t1_128  ___time, DaylightTime_t1_217 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t1_128  TimeZone_ToLocalTime_m1_5878 (TimeZone_t1_815 * __this, DateTime_t1_128  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t1_128  TimeZone_ToUniversalTime_m1_5879 (TimeZone_t1_815 * __this, DateTime_t1_128  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t1_218  TimeZone_GetLocalTimeDiff_m1_5880 (TimeZone_t1_815 * __this, DateTime_t1_128  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t1_218  TimeZone_GetLocalTimeDiff_m1_5881 (TimeZone_t1_815 * __this, DateTime_t1_128  ___time, TimeSpan_t1_218  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
