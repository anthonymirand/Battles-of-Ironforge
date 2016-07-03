#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t3_458;
struct Win32_FIXED_INFO_t3_458_marshaled;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR_STRING.h"
#include "System_System_Net_NetworkInformation_NetBiosNodeType.h"

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t3_458  : public Object_t
{
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	IntPtr_t ___CurrentDnsServer_6;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t3_377  ___DnsServerList_7;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_8;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_12;
};
struct Win32_FIXED_INFO_t3_458_StaticFields{
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::fixed_info
	Win32_FIXED_INFO_t3_458 * ___fixed_info_3;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t3_458_marshaled
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
