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

// System.Threading.ThreadExceptionEventArgs
struct ThreadExceptionEventArgs_t3_765;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Threading.ThreadExceptionEventArgs::.ctor(System.Exception)
extern "C" void ThreadExceptionEventArgs__ctor_m3_6299 (ThreadExceptionEventArgs_t3_765 * __this, Exception_t1_33 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Threading.ThreadExceptionEventArgs::get_Exception()
extern "C" Exception_t1_33 * ThreadExceptionEventArgs_get_Exception_m3_6300 (ThreadExceptionEventArgs_t3_765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
