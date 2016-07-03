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
// System.Type
struct Type_t;

#include "mscorlib_System_EventArgs.h"

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t3_163  : public EventArgs_t1_105
{
	// System.Object System.ComponentModel.RefreshEventArgs::component
	Object_t * ___component_1;
	// System.Type System.ComponentModel.RefreshEventArgs::type
	Type_t * ___type_2;
};
