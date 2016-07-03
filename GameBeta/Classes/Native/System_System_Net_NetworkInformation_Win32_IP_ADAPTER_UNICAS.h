#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "System_System_Net_NetworkInformation_Win32LengthFlagsUnion.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_ADDRESS.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"

// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct  Win32_IP_ADAPTER_UNICAST_ADDRESS_t3_454 
{
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t3_460  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t3_462  ___Address_2;
	// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PrefixOrigin
	int32_t ___PrefixOrigin_3;
	// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::SuffixOrigin
	int32_t ___SuffixOrigin_4;
	// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::DadState
	int32_t ___DadState_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::ValidLifetime
	uint32_t ___ValidLifetime_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PreferredLifetime
	uint32_t ___PreferredLifetime_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LeaseLifetime
	uint32_t ___LeaseLifetime_8;
	// System.Byte System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::OnLinkPrefixLength
	uint8_t ___OnLinkPrefixLength_9;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct Win32_IP_ADAPTER_UNICAST_ADDRESS_t3_454_marshaled
{
	Win32LengthFlagsUnion_t3_460  ___LengthFlags_0;
	intptr_t ___Next_1;
	Win32_SOCKET_ADDRESS_t3_462  ___Address_2;
	int32_t ___PrefixOrigin_3;
	int32_t ___SuffixOrigin_4;
	int32_t ___DadState_5;
	uint32_t ___ValidLifetime_6;
	uint32_t ___PreferredLifetime_7;
	uint32_t ___LeaseLifetime_8;
	uint8_t ___OnLinkPrefixLength_9;
};
