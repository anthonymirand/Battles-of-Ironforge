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

// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t3_434;
// System.Object
struct Object_t;
// System.Net.NetworkInformation.PingCompletedEventArgs
struct PingCompletedEventArgs_t3_435;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.PingCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PingCompletedEventHandler__ctor_m3_6575 (PingCompletedEventHandler_t3_434 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PingCompletedEventHandler::Invoke(System.Object,System.Net.NetworkInformation.PingCompletedEventArgs)
extern "C" void PingCompletedEventHandler_Invoke_m3_6576 (PingCompletedEventHandler_t3_434 * __this, Object_t * ___sender, PingCompletedEventArgs_t3_435 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PingCompletedEventHandler_t3_434(Il2CppObject* delegate, Object_t * ___sender, PingCompletedEventArgs_t3_435 * ___e);
// System.IAsyncResult System.Net.NetworkInformation.PingCompletedEventHandler::BeginInvoke(System.Object,System.Net.NetworkInformation.PingCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * PingCompletedEventHandler_BeginInvoke_m3_6577 (PingCompletedEventHandler_t3_434 * __this, Object_t * ___sender, PingCompletedEventArgs_t3_435 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PingCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PingCompletedEventHandler_EndInvoke_m3_6578 (PingCompletedEventHandler_t3_434 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
