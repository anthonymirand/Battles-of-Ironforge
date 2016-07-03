#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3_368;
struct Win32_IP_ADAPTER_ADDRESSES_t3_368_marshaled;

#include "System_System_Net_NetworkInformation_IPInterfaceProperties.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t3_367  : public IPInterfaceProperties_t3_361
{
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3_368 * ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t3_369  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t3_369  ___mib6_2;
};
