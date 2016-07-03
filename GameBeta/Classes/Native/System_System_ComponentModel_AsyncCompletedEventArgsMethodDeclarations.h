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

// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t3_73;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncCompletedEventArgs::.ctor(System.Exception,System.Boolean,System.Object)
extern "C" void AsyncCompletedEventArgs__ctor_m3_454 (AsyncCompletedEventArgs_t3_73 * __this, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventArgs::RaiseExceptionIfNecessary()
extern "C" void AsyncCompletedEventArgs_RaiseExceptionIfNecessary_m3_455 (AsyncCompletedEventArgs_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::get_Cancelled()
extern "C" bool AsyncCompletedEventArgs_get_Cancelled_m3_456 (AsyncCompletedEventArgs_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.AsyncCompletedEventArgs::get_Error()
extern "C" Exception_t1_33 * AsyncCompletedEventArgs_get_Error_m3_457 (AsyncCompletedEventArgs_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncCompletedEventArgs::get_UserState()
extern "C" Object_t * AsyncCompletedEventArgs_get_UserState_m3_458 (AsyncCompletedEventArgs_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
