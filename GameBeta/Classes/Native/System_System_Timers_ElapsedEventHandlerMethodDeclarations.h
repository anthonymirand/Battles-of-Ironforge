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

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t3_768;
// System.Object
struct Object_t;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t3_766;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ElapsedEventHandler__ctor_m3_6650 (ElapsedEventHandler_t3_768 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::Invoke(System.Object,System.Timers.ElapsedEventArgs)
extern "C" void ElapsedEventHandler_Invoke_m3_6651 (ElapsedEventHandler_t3_768 * __this, Object_t * ___sender, ElapsedEventArgs_t3_766 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ElapsedEventHandler_t3_768(Il2CppObject* delegate, Object_t * ___sender, ElapsedEventArgs_t3_766 * ___e);
// System.IAsyncResult System.Timers.ElapsedEventHandler::BeginInvoke(System.Object,System.Timers.ElapsedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ElapsedEventHandler_BeginInvoke_m3_6652 (ElapsedEventHandler_t3_768 * __this, Object_t * ___sender, ElapsedEventArgs_t3_766 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Timers.ElapsedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ElapsedEventHandler_EndInvoke_m3_6653 (ElapsedEventHandler_t3_768 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
