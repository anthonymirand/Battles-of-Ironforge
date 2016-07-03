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

// System.Diagnostics.TraceSourceInfo
struct TraceSourceInfo_t3_242;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t3_236;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_SourceLevels.h"

// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels)
extern "C" void TraceSourceInfo__ctor_m3_1943 (TraceSourceInfo_t3_242 * __this, String_t* ___name, int32_t ___levels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSourceInfo::.ctor(System.String,System.Diagnostics.SourceLevels,System.Diagnostics.TraceImplSettings)
extern "C" void TraceSourceInfo__ctor_m3_1944 (TraceSourceInfo_t3_242 * __this, String_t* ___name, int32_t ___levels, TraceImplSettings_t3_236 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSourceInfo::get_Name()
extern "C" String_t* TraceSourceInfo_get_Name_m3_1945 (TraceSourceInfo_t3_242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::get_Levels()
extern "C" int32_t TraceSourceInfo_get_Levels_m3_1946 (TraceSourceInfo_t3_242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::get_Listeners()
extern "C" TraceListenerCollection_t3_237 * TraceSourceInfo_get_Listeners_m3_1947 (TraceSourceInfo_t3_242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
