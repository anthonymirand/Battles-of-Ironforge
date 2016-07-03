#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "System_System_Net_NetworkInformation_Win32LengthFlagsUnion.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_ADDRESS.h"

// System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS
struct  Win32_IP_ADAPTER_MULTICAST_ADDRESS_t3_464 
{
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t3_460  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t3_462  ___Address_2;
};
