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

// System.Timers.Timer
struct Timer_t3_767;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t3_768;
// System.ComponentModel.ISite
struct ISite_t3_95;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t3_215;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Timers.Timer::.ctor()
extern "C" void Timer__ctor_m3_6303 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::.ctor(System.Double)
extern "C" void Timer__ctor_m3_6304 (Timer_t3_767 * __this, double ___interval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
extern "C" void Timer_add_Elapsed_m3_6305 (Timer_t3_767 * __this, ElapsedEventHandler_t3_768 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::remove_Elapsed(System.Timers.ElapsedEventHandler)
extern "C" void Timer_remove_Elapsed_m3_6306 (Timer_t3_767 * __this, ElapsedEventHandler_t3_768 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Timers.Timer::get_AutoReset()
extern "C" bool Timer_get_AutoReset_m3_6307 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
extern "C" void Timer_set_AutoReset_m3_6308 (Timer_t3_767 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Timers.Timer::get_Enabled()
extern "C" bool Timer_get_Enabled_m3_6309 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
extern "C" void Timer_set_Enabled_m3_6310 (Timer_t3_767 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Timers.Timer::get_Interval()
extern "C" double Timer_get_Interval_m3_6311 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Interval(System.Double)
extern "C" void Timer_set_Interval_m3_6312 (Timer_t3_767 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.Timers.Timer::get_Site()
extern "C" Object_t * Timer_get_Site_m3_6313 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_Site(System.ComponentModel.ISite)
extern "C" void Timer_set_Site_m3_6314 (Timer_t3_767 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::get_SynchronizingObject()
extern "C" Object_t * Timer_get_SynchronizingObject_m3_6315 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::set_SynchronizingObject(System.ComponentModel.ISynchronizeInvoke)
extern "C" void Timer_set_SynchronizingObject_m3_6316 (Timer_t3_767 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::BeginInit()
extern "C" void Timer_BeginInit_m3_6317 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Close()
extern "C" void Timer_Close_m3_6318 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::EndInit()
extern "C" void Timer_EndInit_m3_6319 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Start()
extern "C" void Timer_Start_m3_6320 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Stop()
extern "C" void Timer_Stop_m3_6321 (Timer_t3_767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Dispose(System.Boolean)
extern "C" void Timer_Dispose_m3_6322 (Timer_t3_767 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.Timer::Callback(System.Object)
extern "C" void Timer_Callback_m3_6323 (Object_t * __this /* static, unused */, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
