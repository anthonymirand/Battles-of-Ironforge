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

// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t3_214;
// System.Object
struct Object_t;
// System.Diagnostics.DataReceivedEventArgs
struct DataReceivedEventArgs_t3_199;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.DataReceivedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DataReceivedEventHandler__ctor_m3_6547 (DataReceivedEventHandler_t3_214 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DataReceivedEventHandler::Invoke(System.Object,System.Diagnostics.DataReceivedEventArgs)
extern "C" void DataReceivedEventHandler_Invoke_m3_6548 (DataReceivedEventHandler_t3_214 * __this, Object_t * ___sender, DataReceivedEventArgs_t3_199 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataReceivedEventHandler_t3_214(Il2CppObject* delegate, Object_t * ___sender, DataReceivedEventArgs_t3_199 * ___e);
// System.IAsyncResult System.Diagnostics.DataReceivedEventHandler::BeginInvoke(System.Object,System.Diagnostics.DataReceivedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DataReceivedEventHandler_BeginInvoke_m3_6549 (DataReceivedEventHandler_t3_214 * __this, Object_t * ___sender, DataReceivedEventArgs_t3_199 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DataReceivedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DataReceivedEventHandler_EndInvoke_m3_6550 (DataReceivedEventHandler_t3_214 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
