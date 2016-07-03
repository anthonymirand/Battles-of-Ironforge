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
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t3_379;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3_361;

#include "System_System_Net_NetworkInformation_NetworkInterface.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t3_423  : public NetworkInterface_t3_422
{
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3_368 * ___addr_2;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t3_369  ___mib4_3;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t3_369  ___mib6_4;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t3_379 * ___ip4stats_5;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3_361 * ___ip_if_props_6;
};
