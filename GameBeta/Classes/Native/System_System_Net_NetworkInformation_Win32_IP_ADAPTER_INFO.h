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
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR_STRING.h"
#include "mscorlib_System_Byte.h"

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct  Win32_IP_ADAPTER_INFO_t3_375  : public Object_t
{
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Next
	IntPtr_t ___Next_3;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::ComboIndex
	int32_t ___ComboIndex_4;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AdapterName
	String_t* ___AdapterName_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Description
	String_t* ___Description_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AddressLength
	uint32_t ___AddressLength_7;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Address
	ByteU5BU5D_t1_72* ___Address_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Index
	uint32_t ___Index_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Type
	uint32_t ___Type_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpEnabled
	uint32_t ___DhcpEnabled_11;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::CurrentIpAddress
	IntPtr_t ___CurrentIpAddress_12;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::IpAddressList
	Win32_IP_ADDR_STRING_t3_377  ___IpAddressList_13;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::GatewayList
	Win32_IP_ADDR_STRING_t3_377  ___GatewayList_14;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpServer
	Win32_IP_ADDR_STRING_t3_377  ___DhcpServer_15;
	// System.Boolean System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::HaveWins
	bool ___HaveWins_16;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::PrimaryWinsServer
	Win32_IP_ADDR_STRING_t3_377  ___PrimaryWinsServer_17;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::SecondaryWinsServer
	Win32_IP_ADDR_STRING_t3_377  ___SecondaryWinsServer_18;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseObtained
	int64_t ___LeaseObtained_19;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseExpires
	int64_t ___LeaseExpires_20;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t3_375_marshaled
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___GatewayList_14;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t3_377_marshaled ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
