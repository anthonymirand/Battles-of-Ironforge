#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3_94;
// System.ComponentModel.ISite
struct ISite_t3_95;
// System.Object
struct Object_t;

#include "mscorlib_System_MarshalByRefObject.h"

// System.ComponentModel.Component
struct  Component_t3_93  : public MarshalByRefObject_t1_58
{
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t3_94 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	Object_t * ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	Object_t * ___disposedEvent_3;
};
