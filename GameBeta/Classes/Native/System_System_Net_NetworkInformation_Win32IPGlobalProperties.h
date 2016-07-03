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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR
#pragma pack(push, tp, 1)
struct  Win32_IN6_ADDR_t3_351 
{
	union
	{
		// System.Byte[] System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR::Bytes
		struct
		{
			ByteU5BU5D_t1_72* ___Bytes_0;
		};
	};
};
#pragma pack(pop, tp)
// Native definition for marshalling of: System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR
#pragma pack(push, tp, 1)
struct Win32_IN6_ADDR_t3_351_marshaled
{
	union
	{
		struct
		{
			uint8_t ___Bytes_0[16];
		};
	};
};
#pragma pack(pop, tp)
