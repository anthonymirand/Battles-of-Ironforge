#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMPSTATS_EX.h"

// System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct  Win32_MIB_ICMP_EX_t3_396 
{
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::InStats
	Win32_MIBICMPSTATS_EX_t3_395  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::OutStats
	Win32_MIBICMPSTATS_EX_t3_395  ___OutStats_1;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t3_396_marshaled
{
	Win32_MIBICMPSTATS_EX_t3_395_marshaled ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3_395_marshaled ___OutStats_1;
};
