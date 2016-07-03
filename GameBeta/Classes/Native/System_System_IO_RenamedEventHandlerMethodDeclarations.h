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

// System.IO.RenamedEventHandler
struct RenamedEventHandler_t3_267;
// System.Object
struct Object_t;
// System.IO.RenamedEventArgs
struct RenamedEventArgs_t3_288;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.RenamedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RenamedEventHandler__ctor_m3_6559 (RenamedEventHandler_t3_267 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.RenamedEventHandler::Invoke(System.Object,System.IO.RenamedEventArgs)
extern "C" void RenamedEventHandler_Invoke_m3_6560 (RenamedEventHandler_t3_267 * __this, Object_t * ___sender, RenamedEventArgs_t3_288 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RenamedEventHandler_t3_267(Il2CppObject* delegate, Object_t * ___sender, RenamedEventArgs_t3_288 * ___e);
// System.IAsyncResult System.IO.RenamedEventHandler::BeginInvoke(System.Object,System.IO.RenamedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * RenamedEventHandler_BeginInvoke_m3_6561 (RenamedEventHandler_t3_267 * __this, Object_t * ___sender, RenamedEventArgs_t3_288 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.RenamedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RenamedEventHandler_EndInvoke_m3_6562 (RenamedEventHandler_t3_267 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
