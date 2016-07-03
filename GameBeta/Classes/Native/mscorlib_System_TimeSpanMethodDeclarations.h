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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" void TimeSpan__ctor_m1_5830 (TimeSpan_t1_218 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m1_5831 (TimeSpan_t1_218 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void TimeSpan__ctor_m1_5832 (TimeSpan_t1_218 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C" void TimeSpan__cctor_m1_5833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int64_t TimeSpan_CalculateTicks_m1_5834 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C" int32_t TimeSpan_get_Days_m1_5835 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C" int32_t TimeSpan_get_Hours_m1_5836 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C" int32_t TimeSpan_get_Milliseconds_m1_5837 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C" int32_t TimeSpan_get_Minutes_m1_5838 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C" int32_t TimeSpan_get_Seconds_m1_5839 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" int64_t TimeSpan_get_Ticks_m1_5840 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C" double TimeSpan_get_TotalDays_m1_5841 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C" double TimeSpan_get_TotalHours_m1_5842 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C" double TimeSpan_get_TotalMilliseconds_m1_5843 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C" double TimeSpan_get_TotalMinutes_m1_5844 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" double TimeSpan_get_TotalSeconds_m1_5845 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C" TimeSpan_t1_218  TimeSpan_Add_m1_5846 (TimeSpan_t1_218 * __this, TimeSpan_t1_218  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C" int32_t TimeSpan_Compare_m1_5847 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C" int32_t TimeSpan_CompareTo_m1_5848 (TimeSpan_t1_218 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C" int32_t TimeSpan_CompareTo_m1_5849 (TimeSpan_t1_218 * __this, TimeSpan_t1_218  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C" bool TimeSpan_Equals_m1_5850 (TimeSpan_t1_218 * __this, TimeSpan_t1_218  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C" TimeSpan_t1_218  TimeSpan_Duration_m1_5851 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C" bool TimeSpan_Equals_m1_5852 (TimeSpan_t1_218 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C" TimeSpan_t1_218  TimeSpan_FromDays_m1_5853 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C" TimeSpan_t1_218  TimeSpan_FromHours_m1_5854 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C" TimeSpan_t1_218  TimeSpan_FromMinutes_m1_5855 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C" TimeSpan_t1_218  TimeSpan_FromSeconds_m1_5856 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C" TimeSpan_t1_218  TimeSpan_FromMilliseconds_m1_5857 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C" TimeSpan_t1_218  TimeSpan_From_m1_5858 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern "C" TimeSpan_t1_218  TimeSpan_FromTicks_m1_5859 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" int32_t TimeSpan_GetHashCode_m1_5860 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C" TimeSpan_t1_218  TimeSpan_Negate_m1_5861 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Parse(System.String)
extern "C" TimeSpan_t1_218  TimeSpan_Parse_m1_5862 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C" TimeSpan_t1_218  TimeSpan_Subtract_m1_5863 (TimeSpan_t1_218 * __this, TimeSpan_t1_218  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C" String_t* TimeSpan_ToString_m1_5864 (TimeSpan_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t1_218  TimeSpan_op_Addition_m1_5865 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Equality_m1_5866 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThan_m1_5867 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_GreaterThanOrEqual_m1_5868 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_Inequality_m1_5869 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThan_m1_5870 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C" bool TimeSpan_op_LessThanOrEqual_m1_5871 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" TimeSpan_t1_218  TimeSpan_op_Subtraction_m1_5872 (Object_t * __this /* static, unused */, TimeSpan_t1_218  ___t1, TimeSpan_t1_218  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
