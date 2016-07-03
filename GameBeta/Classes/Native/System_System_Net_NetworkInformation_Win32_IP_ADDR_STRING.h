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

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t3_377 
{
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	IntPtr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t3_377_marshaled
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
