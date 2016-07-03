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

// System.Net.Dns/GetHostEntryIPCallback
struct GetHostEntryIPCallback_t3_547;
// System.Object
struct Object_t;
// System.Net.IPHostEntry
struct IPHostEntry_t3_544;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Dns/GetHostEntryIPCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetHostEntryIPCallback__ctor_m3_4006 (GetHostEntryIPCallback_t3_547 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostEntryIPCallback::Invoke(System.Net.IPAddress)
extern "C" IPHostEntry_t3_544 * GetHostEntryIPCallback_Invoke_m3_4007 (GetHostEntryIPCallback_t3_547 * __this, IPAddress_t3_339 * ___hostAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPHostEntry_t3_544 * pinvoke_delegate_wrapper_GetHostEntryIPCallback_t3_547(Il2CppObject* delegate, IPAddress_t3_339 * ___hostAddress);
// System.IAsyncResult System.Net.Dns/GetHostEntryIPCallback::BeginInvoke(System.Net.IPAddress,System.AsyncCallback,System.Object)
extern "C" Object_t * GetHostEntryIPCallback_BeginInvoke_m3_4008 (GetHostEntryIPCallback_t3_547 * __this, IPAddress_t3_339 * ___hostAddress, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostEntryIPCallback::EndInvoke(System.IAsyncResult)
extern "C" IPHostEntry_t3_544 * GetHostEntryIPCallback_EndInvoke_m3_4009 (GetHostEntryIPCallback_t3_547 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
