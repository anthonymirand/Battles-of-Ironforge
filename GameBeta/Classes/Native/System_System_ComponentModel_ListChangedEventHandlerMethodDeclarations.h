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

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t3_800;
// System.Object
struct Object_t;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t3_143;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ListChangedEventHandler__ctor_m3_6527 (ListChangedEventHandler_t3_800 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C" void ListChangedEventHandler_Invoke_m3_6528 (ListChangedEventHandler_t3_800 * __this, Object_t * ___sender, ListChangedEventArgs_t3_143 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ListChangedEventHandler_t3_800(Il2CppObject* delegate, Object_t * ___sender, ListChangedEventArgs_t3_143 * ___e);
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ListChangedEventHandler_BeginInvoke_m3_6529 (ListChangedEventHandler_t3_800 * __this, Object_t * ___sender, ListChangedEventArgs_t3_143 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ListChangedEventHandler_EndInvoke_m3_6530 (ListChangedEventHandler_t3_800 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
