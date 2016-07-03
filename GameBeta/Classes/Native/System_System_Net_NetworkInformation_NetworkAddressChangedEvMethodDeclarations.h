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

// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t3_418;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1_105;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.NetworkAddressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void NetworkAddressChangedEventHandler__ctor_m3_6567 (NetworkAddressChangedEventHandler_t3_418 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkAddressChangedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void NetworkAddressChangedEventHandler_Invoke_m3_6568 (NetworkAddressChangedEventHandler_t3_418 * __this, Object_t * ___sender, EventArgs_t1_105 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NetworkAddressChangedEventHandler_t3_418(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1_105 * ___e);
// System.IAsyncResult System.Net.NetworkInformation.NetworkAddressChangedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkAddressChangedEventHandler_BeginInvoke_m3_6569 (NetworkAddressChangedEventHandler_t3_418 * __this, Object_t * ___sender, EventArgs_t1_105 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkAddressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void NetworkAddressChangedEventHandler_EndInvoke_m3_6570 (NetworkAddressChangedEventHandler_t3_418 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
