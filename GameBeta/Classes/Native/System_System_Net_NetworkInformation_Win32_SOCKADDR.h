#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Byte.h"

// System.Net.NetworkInformation.Win32_SOCKADDR
struct  Win32_SOCKADDR_t3_465 
{
	// System.UInt16 System.Net.NetworkInformation.Win32_SOCKADDR::AddressFamily
	uint16_t ___AddressFamily_0;
	// System.Byte[] System.Net.NetworkInformation.Win32_SOCKADDR::AddressData
	ByteU5BU5D_t1_72* ___AddressData_1;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32_SOCKADDR
struct Win32_SOCKADDR_t3_465_marshaled
{
	uint16_t ___AddressFamily_0;
	uint8_t ___AddressData_1[28];
};
