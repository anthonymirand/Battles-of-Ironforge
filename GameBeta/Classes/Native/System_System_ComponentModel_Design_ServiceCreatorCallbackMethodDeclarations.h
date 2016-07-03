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

// System.ComponentModel.Design.ServiceCreatorCallback
struct ServiceCreatorCallback_t3_797;
// System.Object
struct Object_t;
// System.ComponentModel.Design.IServiceContainer
struct IServiceContainer_t3_798;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.ServiceCreatorCallback::.ctor(System.Object,System.IntPtr)
extern "C" void ServiceCreatorCallback__ctor_m3_6511 (ServiceCreatorCallback_t3_797 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ServiceCreatorCallback::Invoke(System.ComponentModel.Design.IServiceContainer,System.Type)
extern "C" Object_t * ServiceCreatorCallback_Invoke_m3_6512 (ServiceCreatorCallback_t3_797 * __this, Object_t * ___container, Type_t * ___serviceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_ServiceCreatorCallback_t3_797(Il2CppObject* delegate, Object_t * ___container, Type_t * ___serviceType);
// System.IAsyncResult System.ComponentModel.Design.ServiceCreatorCallback::BeginInvoke(System.ComponentModel.Design.IServiceContainer,System.Type,System.AsyncCallback,System.Object)
extern "C" Object_t * ServiceCreatorCallback_BeginInvoke_m3_6513 (ServiceCreatorCallback_t3_797 * __this, Object_t * ___container, Type_t * ___serviceType, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ServiceCreatorCallback::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ServiceCreatorCallback_EndInvoke_m3_6514 (ServiceCreatorCallback_t3_797 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
