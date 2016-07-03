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
#include "mscorlib_System_IntPtr.h"

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t3_404 
{
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	IntPtr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	IntPtr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	IntPtr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	IntPtr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	IntPtr_t ___ifa_data_6;
};
// Native definition for marshalling of: System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t3_404_marshaled
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
