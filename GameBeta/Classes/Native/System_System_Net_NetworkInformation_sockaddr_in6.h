#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "System_System_Net_NetworkInformation_in6_addr.h"

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t3_400 
{
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t3_401  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;
};
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t3_400_marshaled
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3_401_marshaled ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
