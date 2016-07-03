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
// System.UInt32[]
struct UInt32U5BU5D_t1_98;

#include "mscorlib_System_Object.h"
#include "System_System_Net_NetworkInformation_AlignmentUnion.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"
#include "System_System_Net_NetworkInformation_OperationalStatus.h"
#include "mscorlib_System_Byte.h"
#include "mscorlib_System_UInt32.h"

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3_368  : public Object_t
{
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t3_459  ___Alignment_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	IntPtr_t ___Next_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_6;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	IntPtr_t ___FirstUnicastAddress_7;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	IntPtr_t ___FirstAnycastAddress_8;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	IntPtr_t ___FirstMulticastAddress_9;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	IntPtr_t ___FirstDnsServerAddress_10;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_11;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_12;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_13;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t1_72* ___PhysicalAddress_14;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_15;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_16;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_17;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_18;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_19;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_20;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t1_98* ___ZoneIndices_21;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3_368_marshaled
{
	AlignmentUnion_t3_459  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	char* ___DnsSuffix_11;
	char* ___Description_12;
	char* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
