#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t1_98;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_UInt32.h"

// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct  Win32_MIBICMPSTATS_EX_t3_395 
{
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Errors
	uint32_t ___Errors_1;
	// System.UInt32[] System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Counts
	UInt32U5BU5D_t1_98* ___Counts_2;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3_395_marshaled
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
