#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_NetworkInformation_UnicastIPAddressInforma.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPTER_UNICAS.h"

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct  Win32UnicastIPAddressInformation_t3_453  : public UnicastIPAddressInformation_t3_452
{
	// System.Int32 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::if_index
	int32_t ___if_index_0;
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS System.Net.NetworkInformation.Win32UnicastIPAddressInformation::info
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t3_454  ___info_1;
};
