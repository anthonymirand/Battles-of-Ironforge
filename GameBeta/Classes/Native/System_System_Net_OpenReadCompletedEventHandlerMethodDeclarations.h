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

// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t3_624;
// System.Object
struct Object_t;
// System.Net.OpenReadCompletedEventArgs
struct OpenReadCompletedEventArgs_t3_605;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.OpenReadCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void OpenReadCompletedEventHandler__ctor_m3_6610 (OpenReadCompletedEventHandler_t3_624 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::Invoke(System.Object,System.Net.OpenReadCompletedEventArgs)
extern "C" void OpenReadCompletedEventHandler_Invoke_m3_6611 (OpenReadCompletedEventHandler_t3_624 * __this, Object_t * ___sender, OpenReadCompletedEventArgs_t3_605 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OpenReadCompletedEventHandler_t3_624(Il2CppObject* delegate, Object_t * ___sender, OpenReadCompletedEventArgs_t3_605 * ___e);
// System.IAsyncResult System.Net.OpenReadCompletedEventHandler::BeginInvoke(System.Object,System.Net.OpenReadCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * OpenReadCompletedEventHandler_BeginInvoke_m3_6612 (OpenReadCompletedEventHandler_t3_624 * __this, Object_t * ___sender, OpenReadCompletedEventArgs_t3_605 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void OpenReadCompletedEventHandler_EndInvoke_m3_6613 (OpenReadCompletedEventHandler_t3_624 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
