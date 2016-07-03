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

// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t3_80;
// System.Object
struct Object_t;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t3_156;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.ProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProgressChangedEventHandler__ctor_m3_6531 (ProgressChangedEventHandler_t3_80 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::Invoke(System.Object,System.ComponentModel.ProgressChangedEventArgs)
extern "C" void ProgressChangedEventHandler_Invoke_m3_6532 (ProgressChangedEventHandler_t3_80 * __this, Object_t * ___sender, ProgressChangedEventArgs_t3_156 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProgressChangedEventHandler_t3_80(Il2CppObject* delegate, Object_t * ___sender, ProgressChangedEventArgs_t3_156 * ___e);
// System.IAsyncResult System.ComponentModel.ProgressChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ProgressChangedEventHandler_BeginInvoke_m3_6533 (ProgressChangedEventHandler_t3_80 * __this, Object_t * ___sender, ProgressChangedEventArgs_t3_156 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProgressChangedEventHandler_EndInvoke_m3_6534 (ProgressChangedEventHandler_t3_80 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
