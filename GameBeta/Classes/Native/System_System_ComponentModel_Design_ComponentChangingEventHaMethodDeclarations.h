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

// System.ComponentModel.Design.ComponentChangingEventHandler
struct ComponentChangingEventHandler_t3_793;
// System.Object
struct Object_t;
// System.ComponentModel.Design.ComponentChangingEventArgs
struct ComponentChangingEventArgs_t3_56;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.ComponentChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ComponentChangingEventHandler__ctor_m3_6495 (ComponentChangingEventHandler_t3_793 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentChangingEventHandler::Invoke(System.Object,System.ComponentModel.Design.ComponentChangingEventArgs)
extern "C" void ComponentChangingEventHandler_Invoke_m3_6496 (ComponentChangingEventHandler_t3_793 * __this, Object_t * ___sender, ComponentChangingEventArgs_t3_56 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ComponentChangingEventHandler_t3_793(Il2CppObject* delegate, Object_t * ___sender, ComponentChangingEventArgs_t3_56 * ___e);
// System.IAsyncResult System.ComponentModel.Design.ComponentChangingEventHandler::BeginInvoke(System.Object,System.ComponentModel.Design.ComponentChangingEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ComponentChangingEventHandler_BeginInvoke_m3_6497 (ComponentChangingEventHandler_t3_793 * __this, Object_t * ___sender, ComponentChangingEventArgs_t3_56 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ComponentChangingEventHandler_EndInvoke_m3_6498 (ComponentChangingEventHandler_t3_793 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
