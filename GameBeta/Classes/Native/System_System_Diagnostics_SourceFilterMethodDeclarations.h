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

// System.Diagnostics.SourceFilter
struct SourceFilter_t3_223;
// System.String
struct String_t;
// System.Diagnostics.TraceEventCache
struct TraceEventCache_t3_234;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_TraceEventType.h"

// System.Void System.Diagnostics.SourceFilter::.ctor(System.String)
extern "C" void SourceFilter__ctor_m3_1712 (SourceFilter_t3_223 * __this, String_t* ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.SourceFilter::get_Source()
extern "C" String_t* SourceFilter_get_Source_m3_1713 (SourceFilter_t3_223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.SourceFilter::set_Source(System.String)
extern "C" void SourceFilter_set_Source_m3_1714 (SourceFilter_t3_223 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.SourceFilter::ShouldTrace(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[],System.Object,System.Object[])
extern "C" bool SourceFilter_ShouldTrace_m3_1715 (SourceFilter_t3_223 * __this, TraceEventCache_t3_234 * ___cache, String_t* ___source, int32_t ___eventType, int32_t ___id, String_t* ___formatOrMessage, ObjectU5BU5D_t1_158* ___args, Object_t * ___data1, ObjectU5BU5D_t1_158* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
