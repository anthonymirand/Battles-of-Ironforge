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

// System.ComponentModel.Design.ComponentRenameEventHandler
struct ComponentRenameEventHandler_t3_795;
// System.Object
struct Object_t;
// System.ComponentModel.Design.ComponentRenameEventArgs
struct ComponentRenameEventArgs_t3_59;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.ComponentRenameEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ComponentRenameEventHandler__ctor_m3_6503 (ComponentRenameEventHandler_t3_795 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentRenameEventHandler::Invoke(System.Object,System.ComponentModel.Design.ComponentRenameEventArgs)
extern "C" void ComponentRenameEventHandler_Invoke_m3_6504 (ComponentRenameEventHandler_t3_795 * __this, Object_t * ___sender, ComponentRenameEventArgs_t3_59 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ComponentRenameEventHandler_t3_795(Il2CppObject* delegate, Object_t * ___sender, ComponentRenameEventArgs_t3_59 * ___e);
// System.IAsyncResult System.ComponentModel.Design.ComponentRenameEventHandler::BeginInvoke(System.Object,System.ComponentModel.Design.ComponentRenameEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ComponentRenameEventHandler_BeginInvoke_m3_6505 (ComponentRenameEventHandler_t3_795 * __this, Object_t * ___sender, ComponentRenameEventArgs_t3_59 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.ComponentRenameEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ComponentRenameEventHandler_EndInvoke_m3_6506 (ComponentRenameEventHandler_t3_795 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
