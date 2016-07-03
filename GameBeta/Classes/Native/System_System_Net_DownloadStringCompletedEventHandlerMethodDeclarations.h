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

// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t3_623;
// System.Object
struct Object_t;
// System.Net.DownloadStringCompletedEventArgs
struct DownloadStringCompletedEventArgs_t3_552;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.DownloadStringCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DownloadStringCompletedEventHandler__ctor_m3_6602 (DownloadStringCompletedEventHandler_t3_623 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadStringCompletedEventHandler::Invoke(System.Object,System.Net.DownloadStringCompletedEventArgs)
extern "C" void DownloadStringCompletedEventHandler_Invoke_m3_6603 (DownloadStringCompletedEventHandler_t3_623 * __this, Object_t * ___sender, DownloadStringCompletedEventArgs_t3_552 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DownloadStringCompletedEventHandler_t3_623(Il2CppObject* delegate, Object_t * ___sender, DownloadStringCompletedEventArgs_t3_552 * ___e);
// System.IAsyncResult System.Net.DownloadStringCompletedEventHandler::BeginInvoke(System.Object,System.Net.DownloadStringCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DownloadStringCompletedEventHandler_BeginInvoke_m3_6604 (DownloadStringCompletedEventHandler_t3_623 * __this, Object_t * ___sender, DownloadStringCompletedEventArgs_t3_552 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadStringCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DownloadStringCompletedEventHandler_EndInvoke_m3_6605 (DownloadStringCompletedEventHandler_t3_623 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
