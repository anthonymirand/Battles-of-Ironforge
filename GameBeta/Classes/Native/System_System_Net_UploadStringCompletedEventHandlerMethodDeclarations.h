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

// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t3_629;
// System.Object
struct Object_t;
// System.Net.UploadStringCompletedEventArgs
struct UploadStringCompletedEventArgs_t3_617;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.UploadStringCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UploadStringCompletedEventHandler__ctor_m3_6630 (UploadStringCompletedEventHandler_t3_629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadStringCompletedEventHandler::Invoke(System.Object,System.Net.UploadStringCompletedEventArgs)
extern "C" void UploadStringCompletedEventHandler_Invoke_m3_6631 (UploadStringCompletedEventHandler_t3_629 * __this, Object_t * ___sender, UploadStringCompletedEventArgs_t3_617 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UploadStringCompletedEventHandler_t3_629(Il2CppObject* delegate, Object_t * ___sender, UploadStringCompletedEventArgs_t3_617 * ___e);
// System.IAsyncResult System.Net.UploadStringCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadStringCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UploadStringCompletedEventHandler_BeginInvoke_m3_6632 (UploadStringCompletedEventHandler_t3_629 * __this, Object_t * ___sender, UploadStringCompletedEventArgs_t3_617 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadStringCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UploadStringCompletedEventHandler_EndInvoke_m3_6633 (UploadStringCompletedEventHandler_t3_629 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
