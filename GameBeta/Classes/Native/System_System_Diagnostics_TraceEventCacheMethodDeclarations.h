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

// System.Diagnostics.TraceEventCache
struct TraceEventCache_t3_234;
// System.String
struct String_t;
// System.Collections.Stack
struct Stack_t1_143;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Diagnostics.TraceEventCache::.ctor()
extern "C" void TraceEventCache__ctor_m3_1807 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceEventCache::get_Callstack()
extern "C" String_t* TraceEventCache_get_Callstack_m3_1808 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Diagnostics.TraceEventCache::get_DateTime()
extern "C" DateTime_t1_128  TraceEventCache_get_DateTime_m3_1809 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack System.Diagnostics.TraceEventCache::get_LogicalOperationStack()
extern "C" Stack_t1_143 * TraceEventCache_get_LogicalOperationStack_m3_1810 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceEventCache::get_ProcessId()
extern "C" int32_t TraceEventCache_get_ProcessId_m3_1811 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceEventCache::get_ThreadId()
extern "C" String_t* TraceEventCache_get_ThreadId_m3_1812 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.TraceEventCache::get_Timestamp()
extern "C" int64_t TraceEventCache_get_Timestamp_m3_1813 (TraceEventCache_t3_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
