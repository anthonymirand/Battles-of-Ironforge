#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;

#include "mscorlib_System_EventArgs.h"

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t3_117  : public EventArgs_t1_105
{
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	Object_t * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	Object_t * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;
};
