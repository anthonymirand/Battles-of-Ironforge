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

// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t3_620;
// System.Object
struct Object_t;
// System.Net.DownloadDataCompletedEventArgs
struct DownloadDataCompletedEventArgs_t3_550;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.DownloadDataCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DownloadDataCompletedEventHandler__ctor_m3_6594 (DownloadDataCompletedEventHandler_t3_620 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadDataCompletedEventHandler::Invoke(System.Object,System.Net.DownloadDataCompletedEventArgs)
extern "C" void DownloadDataCompletedEventHandler_Invoke_m3_6595 (DownloadDataCompletedEventHandler_t3_620 * __this, Object_t * ___sender, DownloadDataCompletedEventArgs_t3_550 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DownloadDataCompletedEventHandler_t3_620(Il2CppObject* delegate, Object_t * ___sender, DownloadDataCompletedEventArgs_t3_550 * ___e);
// System.IAsyncResult System.Net.DownloadDataCompletedEventHandler::BeginInvoke(System.Object,System.Net.DownloadDataCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DownloadDataCompletedEventHandler_BeginInvoke_m3_6596 (DownloadDataCompletedEventHandler_t3_620 * __this, Object_t * ___sender, DownloadDataCompletedEventArgs_t3_550 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadDataCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DownloadDataCompletedEventHandler_EndInvoke_m3_6597 (DownloadDataCompletedEventHandler_t3_620 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
