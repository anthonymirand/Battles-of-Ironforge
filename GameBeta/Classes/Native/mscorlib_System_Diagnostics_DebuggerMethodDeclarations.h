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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.Debugger::.cctor()
extern "C" void Debugger__cctor_m1_1967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Debugger::IsLogging()
extern "C" bool Debugger_IsLogging_m1_1968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debugger::Log(System.Int32,System.String,System.String)
extern "C" void Debugger_Log_m1_1969 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___category, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
