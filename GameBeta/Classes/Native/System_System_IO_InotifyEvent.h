#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType.h"
#include "System_System_IO_InotifyEvent.h"
#include "System_System_IO_InotifyMask.h"

// System.IO.InotifyEvent
struct  InotifyEvent_t3_271 
{
	// System.Int32 System.IO.InotifyEvent::WatchDescriptor
	int32_t ___WatchDescriptor_1;
	// System.IO.InotifyMask System.IO.InotifyEvent::Mask
	uint32_t ___Mask_2;
	// System.String System.IO.InotifyEvent::Name
	String_t* ___Name_3;
};
struct InotifyEvent_t3_271_StaticFields{
	// System.IO.InotifyEvent System.IO.InotifyEvent::Default
	InotifyEvent_t3_271  ___Default_0;
};
// Native definition for marshalling of: System.IO.InotifyEvent
struct InotifyEvent_t3_271_marshaled
{
	int32_t ___WatchDescriptor_1;
	uint32_t ___Mask_2;
	char* ___Name_3;
};
