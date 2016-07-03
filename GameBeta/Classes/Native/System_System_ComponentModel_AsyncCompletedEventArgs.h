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
// System.Object
struct Object_t;

#include "mscorlib_System_EventArgs.h"

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t3_73  : public EventArgs_t1_105
{
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t1_33 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	Object_t * ____userState_3;
};
