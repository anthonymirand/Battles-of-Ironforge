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
// System.Delegate
struct Delegate_t1_22;
// System.ComponentModel.ListEntry
struct ListEntry_t3_126;

#include "mscorlib_System_Object.h"

// System.ComponentModel.ListEntry
struct  ListEntry_t3_126  : public Object_t
{
	// System.Object System.ComponentModel.ListEntry::key
	Object_t * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1_22 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t3_126 * ___next_2;
};
