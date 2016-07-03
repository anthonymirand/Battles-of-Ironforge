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
#include "System_System_IO_WatcherChangeTypes.h"

// System.IO.WaitForChangedResult
struct  WaitForChangedResult_t3_263 
{
	// System.IO.WatcherChangeTypes System.IO.WaitForChangedResult::changeType
	int32_t ___changeType_0;
	// System.String System.IO.WaitForChangedResult::name
	String_t* ___name_1;
	// System.String System.IO.WaitForChangedResult::oldName
	String_t* ___oldName_2;
	// System.Boolean System.IO.WaitForChangedResult::timedOut
	bool ___timedOut_3;
};
// Native definition for marshalling of: System.IO.WaitForChangedResult
struct WaitForChangedResult_t3_263_marshaled
{
	int32_t ___changeType_0;
	char* ___name_1;
	char* ___oldName_2;
	int32_t ___timedOut_3;
};
