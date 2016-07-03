#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.SynchronizationContext
struct SynchronizationContext_t1_713;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t3_74  : public Object_t
{
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t1_713 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	Object_t * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;
};
