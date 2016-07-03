#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_NetworkInformation_IcmpV4Statistics.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMPSTATS.h"

// System.Net.NetworkInformation.Win32IcmpV4Statistics
struct  Win32IcmpV4Statistics_t3_388  : public IcmpV4Statistics_t3_386
{
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iin
	Win32_MIBICMPSTATS_t3_389  ___iin_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iout
	Win32_MIBICMPSTATS_t3_389  ___iout_1;
};
