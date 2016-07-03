#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_IntPtr.h"

// System.IO.kevent
struct  kevent_t3_276 
{
	// System.Int32 System.IO.kevent::ident
	int32_t ___ident_0;
	// System.Int16 System.IO.kevent::filter
	int16_t ___filter_1;
	// System.UInt16 System.IO.kevent::flags
	uint16_t ___flags_2;
	// System.UInt32 System.IO.kevent::fflags
	uint32_t ___fflags_3;
	// System.Int32 System.IO.kevent::data
	int32_t ___data_4;
	// System.IntPtr System.IO.kevent::udata
	IntPtr_t ___udata_5;
};
