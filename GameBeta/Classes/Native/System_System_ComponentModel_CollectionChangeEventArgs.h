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
#include "System_System_ComponentModel_CollectionChangeAction.h"

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t3_92  : public EventArgs_t1_105
{
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	Object_t * ___theElement_2;
};
