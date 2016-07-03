#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t1_143;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Guid.h"

// System.Diagnostics.CorrelationManager
struct  CorrelationManager_t3_198  : public Object_t
{
	// System.Guid System.Diagnostics.CorrelationManager::activity
	Guid_t1_775  ___activity_0;
	// System.Collections.Stack System.Diagnostics.CorrelationManager::op_stack
	Stack_t1_143 * ___op_stack_1;
};
