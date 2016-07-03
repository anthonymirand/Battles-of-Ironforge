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

// System.Net.MonoHttpDate
struct MonoHttpDate_t3_602;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.MonoHttpDate::.ctor()
extern "C" void MonoHttpDate__ctor_m3_4733 (MonoHttpDate_t3_602 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.MonoHttpDate::.cctor()
extern "C" void MonoHttpDate__cctor_m3_4734 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.MonoHttpDate::Parse(System.String)
extern "C" DateTime_t1_128  MonoHttpDate_Parse_m3_4735 (Object_t * __this /* static, unused */, String_t* ___dateStr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
