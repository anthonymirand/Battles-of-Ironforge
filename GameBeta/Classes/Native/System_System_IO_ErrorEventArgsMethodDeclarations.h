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

// System.IO.ErrorEventArgs
struct ErrorEventArgs_t3_254;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.ErrorEventArgs::.ctor(System.Exception)
extern "C" void ErrorEventArgs__ctor_m3_2033 (ErrorEventArgs_t3_254 * __this, Exception_t1_33 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.ErrorEventArgs::GetException()
extern "C" Exception_t1_33 * ErrorEventArgs_GetException_m3_2034 (ErrorEventArgs_t3_254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
