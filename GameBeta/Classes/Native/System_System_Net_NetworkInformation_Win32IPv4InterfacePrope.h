#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t3_375;
struct Win32_IP_ADAPTER_INFO_t3_375_marshaled;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t3_376;
struct Win32_IP_PER_ADAPTER_INFO_t3_376_marshaled;

#include "System_System_Net_NetworkInformation_IPv4InterfaceProperties.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct  Win32IPv4InterfaceProperties_t3_374  : public IPv4InterfaceProperties_t3_363
{
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::ainfo
	Win32_IP_ADAPTER_INFO_t3_375 * ___ainfo_0;
	// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::painfo
	Win32_IP_PER_ADAPTER_INFO_t3_376 * ___painfo_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceProperties::mib
	Win32_MIB_IFROW_t3_369  ___mib_2;
};
