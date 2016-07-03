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

// System.Net.Dns/GetHostByNameCallback
struct GetHostByNameCallback_t3_543;
// System.Object
struct Object_t;
// System.Net.IPHostEntry
struct IPHostEntry_t3_544;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void System.Net.Dns/GetHostByNameCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetHostByNameCallback__ctor_m3_3994 (GetHostByNameCallback_t3_543 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostByNameCallback::Invoke(System.String)
extern "C" IPHostEntry_t3_544 * GetHostByNameCallback_Invoke_m3_3995 (GetHostByNameCallback_t3_543 * __this, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPHostEntry_t3_544 * pinvoke_delegate_wrapper_GetHostByNameCallback_t3_543(Il2CppObject* delegate, String_t* ___hostName);
// System.IAsyncResult System.Net.Dns/GetHostByNameCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * GetHostByNameCallback_BeginInvoke_m3_3996 (GetHostByNameCallback_t3_543 * __this, String_t* ___hostName, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostByNameCallback::EndInvoke(System.IAsyncResult)
extern "C" IPHostEntry_t3_544 * GetHostByNameCallback_EndInvoke_m3_3997 (GetHostByNameCallback_t3_543 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
