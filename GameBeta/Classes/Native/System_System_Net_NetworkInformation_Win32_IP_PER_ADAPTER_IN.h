#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR_STRING.h"

// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct  Win32_IP_PER_ADAPTER_INFO_t3_376  : public Object_t
{
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigEnabled
	uint32_t ___AutoconfigEnabled_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigActive
	uint32_t ___AutoconfigActive_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::CurrentDnsServer
	IntPtr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t3_377  ___DnsServerList_3;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t3_376_marshaled
{
	uint32_t ___AutoconfigEnabled_0;
	uint32_t ___AutoconfigActive_1;
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___DnsServerList_3;
};
