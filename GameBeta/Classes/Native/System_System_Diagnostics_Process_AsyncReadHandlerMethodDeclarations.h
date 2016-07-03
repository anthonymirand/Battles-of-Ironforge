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

// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t3_210;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.Process/AsyncReadHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AsyncReadHandler__ctor_m3_1491 (AsyncReadHandler_t3_210 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::Invoke()
extern "C" void AsyncReadHandler_Invoke_m3_1492 (AsyncReadHandler_t3_210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncReadHandler_t3_210(Il2CppObject* delegate);
// System.IAsyncResult System.Diagnostics.Process/AsyncReadHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * AsyncReadHandler_BeginInvoke_m3_1493 (AsyncReadHandler_t3_210 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::EndInvoke(System.IAsyncResult)
extern "C" void AsyncReadHandler_EndInvoke_m3_1494 (AsyncReadHandler_t3_210 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
