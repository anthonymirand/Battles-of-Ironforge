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

// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3_79;
// System.Object
struct Object_t;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t3_117;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.DoWorkEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DoWorkEventHandler__ctor_m3_6523 (DoWorkEventHandler_t3_79 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::Invoke(System.Object,System.ComponentModel.DoWorkEventArgs)
extern "C" void DoWorkEventHandler_Invoke_m3_6524 (DoWorkEventHandler_t3_79 * __this, Object_t * ___sender, DoWorkEventArgs_t3_117 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DoWorkEventHandler_t3_79(Il2CppObject* delegate, Object_t * ___sender, DoWorkEventArgs_t3_117 * ___e);
// System.IAsyncResult System.ComponentModel.DoWorkEventHandler::BeginInvoke(System.Object,System.ComponentModel.DoWorkEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DoWorkEventHandler_BeginInvoke_m3_6525 (DoWorkEventHandler_t3_79 * __this, Object_t * ___sender, DoWorkEventArgs_t3_117 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DoWorkEventHandler_EndInvoke_m3_6526 (DoWorkEventHandler_t3_79 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
