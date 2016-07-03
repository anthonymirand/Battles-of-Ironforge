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

#include "mscorlib_System_Object.h"

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3_149  : public Object_t
{
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3_94 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	Object_t * ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	Object_t * ___disposedEvent_2;
};
