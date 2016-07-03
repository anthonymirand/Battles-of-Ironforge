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

// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_t3_628;
// System.Object
struct Object_t;
// System.Net.UploadProgressChangedEventArgs
struct UploadProgressChangedEventArgs_t3_616;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.UploadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UploadProgressChangedEventHandler__ctor_m3_6626 (UploadProgressChangedEventHandler_t3_628 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadProgressChangedEventHandler::Invoke(System.Object,System.Net.UploadProgressChangedEventArgs)
extern "C" void UploadProgressChangedEventHandler_Invoke_m3_6627 (UploadProgressChangedEventHandler_t3_628 * __this, Object_t * ___sender, UploadProgressChangedEventArgs_t3_616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UploadProgressChangedEventHandler_t3_628(Il2CppObject* delegate, Object_t * ___sender, UploadProgressChangedEventArgs_t3_616 * ___e);
// System.IAsyncResult System.Net.UploadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.UploadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UploadProgressChangedEventHandler_BeginInvoke_m3_6628 (UploadProgressChangedEventHandler_t3_628 * __this, Object_t * ___sender, UploadProgressChangedEventArgs_t3_616 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UploadProgressChangedEventHandler_EndInvoke_m3_6629 (UploadProgressChangedEventHandler_t3_628 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
