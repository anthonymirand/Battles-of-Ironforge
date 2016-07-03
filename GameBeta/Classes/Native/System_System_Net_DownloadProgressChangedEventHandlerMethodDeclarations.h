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

// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3_622;
// System.Object
struct Object_t;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3_551;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.DownloadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DownloadProgressChangedEventHandler__ctor_m3_6598 (DownloadProgressChangedEventHandler_t3_622 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::Invoke(System.Object,System.Net.DownloadProgressChangedEventArgs)
extern "C" void DownloadProgressChangedEventHandler_Invoke_m3_6599 (DownloadProgressChangedEventHandler_t3_622 * __this, Object_t * ___sender, DownloadProgressChangedEventArgs_t3_551 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DownloadProgressChangedEventHandler_t3_622(Il2CppObject* delegate, Object_t * ___sender, DownloadProgressChangedEventArgs_t3_551 * ___e);
// System.IAsyncResult System.Net.DownloadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.DownloadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DownloadProgressChangedEventHandler_BeginInvoke_m3_6600 (DownloadProgressChangedEventHandler_t3_622 * __this, Object_t * ___sender, DownloadProgressChangedEventArgs_t3_551 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DownloadProgressChangedEventHandler_EndInvoke_m3_6601 (DownloadProgressChangedEventHandler_t3_622 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
