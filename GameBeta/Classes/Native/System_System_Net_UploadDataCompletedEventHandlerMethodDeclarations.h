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

// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t3_626;
// System.Object
struct Object_t;
// System.Net.UploadDataCompletedEventArgs
struct UploadDataCompletedEventArgs_t3_614;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.UploadDataCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UploadDataCompletedEventHandler__ctor_m3_6618 (UploadDataCompletedEventHandler_t3_626 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadDataCompletedEventHandler::Invoke(System.Object,System.Net.UploadDataCompletedEventArgs)
extern "C" void UploadDataCompletedEventHandler_Invoke_m3_6619 (UploadDataCompletedEventHandler_t3_626 * __this, Object_t * ___sender, UploadDataCompletedEventArgs_t3_614 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UploadDataCompletedEventHandler_t3_626(Il2CppObject* delegate, Object_t * ___sender, UploadDataCompletedEventArgs_t3_614 * ___e);
// System.IAsyncResult System.Net.UploadDataCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadDataCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UploadDataCompletedEventHandler_BeginInvoke_m3_6620 (UploadDataCompletedEventHandler_t3_626 * __this, Object_t * ___sender, UploadDataCompletedEventArgs_t3_614 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadDataCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UploadDataCompletedEventHandler_EndInvoke_m3_6621 (UploadDataCompletedEventHandler_t3_626 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
