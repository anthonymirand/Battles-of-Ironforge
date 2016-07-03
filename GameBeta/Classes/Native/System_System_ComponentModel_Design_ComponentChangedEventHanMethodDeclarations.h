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

// System.ComponentModel.Design.ComponentChangedEventHandler
struct ComponentChangedEventHandler_t3_792;
// System.Object
struct Object_t;
// System.ComponentModel.Design.ComponentChangedEventArgs
struct ComponentChangedEventArgs_t3_54;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.ComponentChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ComponentChangedEventHandler__ctor_m3_6491 (ComponentChangedEventHandler_t3_792 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentChangedEventHandler::Invoke(System.Object,System.ComponentModel.Design.ComponentChangedEventArgs)
extern "C" void ComponentChangedEventHandler_Invoke_m3_6492 (ComponentChangedEventHandler_t3_792 * __this, Object_t * ___sender, ComponentChangedEventArgs_t3_54 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ComponentChangedEventHandler_t3_792(Il2CppObject* delegate, Object_t * ___sender, ComponentChangedEventArgs_t3_54 * ___e);
// System.IAsyncResult System.ComponentModel.Design.ComponentChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.Design.ComponentChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ComponentChangedEventHandler_BeginInvoke_m3_6493 (ComponentChangedEventHandler_t3_792 * __this, Object_t * ___sender, ComponentChangedEventArgs_t3_54 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ComponentChangedEventHandler_EndInvoke_m3_6494 (ComponentChangedEventHandler_t3_792 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
