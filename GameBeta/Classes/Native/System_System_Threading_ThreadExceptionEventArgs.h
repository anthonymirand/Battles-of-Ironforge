#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1_33;

#include "mscorlib_System_EventArgs.h"

// System.Threading.ThreadExceptionEventArgs
struct  ThreadExceptionEventArgs_t3_765  : public EventArgs_t1_105
{
	// System.Exception System.Threading.ThreadExceptionEventArgs::exception
	Exception_t1_33 * ___exception_1;
};
