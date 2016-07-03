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

// System.ComponentModel.Design.ComponentEventHandler
struct ComponentEventHandler_t3_794;
// System.Object
struct Object_t;
// System.ComponentModel.Design.ComponentEventArgs
struct ComponentEventArgs_t3_57;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.ComponentEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ComponentEventHandler__ctor_m3_6499 (ComponentEventHandler_t3_794 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentEventHandler::Invoke(System.Object,System.ComponentModel.Design.ComponentEventArgs)
extern "C" void ComponentEventHandler_Invoke_m3_6500 (ComponentEventHandler_t3_794 * __this, Object_t * ___sender, ComponentEventArgs_t3_57 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ComponentEventHandler_t3_794(Il2CppObject* delegate, Object_t * ___sender, ComponentEventArgs_t3_57 * ___e);
// System.IAsyncResult System.ComponentModel.Design.ComponentEventHandler::BeginInvoke(System.Object,System.ComponentModel.Design.ComponentEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ComponentEventHandler_BeginInvoke_m3_6501 (ComponentEventHandler_t3_794 * __this, Object_t * ___sender, ComponentEventArgs_t3_57 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ComponentEventHandler_EndInvoke_m3_6502 (ComponentEventHandler_t3_794 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
