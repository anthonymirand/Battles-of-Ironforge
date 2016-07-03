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
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3_55;

#include "mscorlib_System_EventArgs.h"

// System.ComponentModel.Design.ComponentChangingEventArgs
struct  ComponentChangingEventArgs_t3_56  : public EventArgs_t1_105
{
	// System.Object System.ComponentModel.Design.ComponentChangingEventArgs::component
	Object_t * ___component_1;
	// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangingEventArgs::member
	MemberDescriptor_t3_55 * ___member_2;
};
