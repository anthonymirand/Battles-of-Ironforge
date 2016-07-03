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
// System.String
struct String_t;

#include "mscorlib_System_EventArgs.h"

// System.ComponentModel.Design.ComponentRenameEventArgs
struct  ComponentRenameEventArgs_t3_59  : public EventArgs_t1_105
{
	// System.Object System.ComponentModel.Design.ComponentRenameEventArgs::component
	Object_t * ___component_1;
	// System.String System.ComponentModel.Design.ComponentRenameEventArgs::oldName
	String_t* ___oldName_2;
	// System.String System.ComponentModel.Design.ComponentRenameEventArgs::newName
	String_t* ___newName_3;
};
