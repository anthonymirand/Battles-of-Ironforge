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

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t3_766;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Timers.ElapsedEventArgs::.ctor(System.DateTime)
extern "C" void ElapsedEventArgs__ctor_m3_6301 (ElapsedEventArgs_t3_766 * __this, DateTime_t1_128  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Timers.ElapsedEventArgs::get_SignalTime()
extern "C" DateTime_t1_128  ElapsedEventArgs_get_SignalTime_m3_6302 (ElapsedEventArgs_t3_766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
