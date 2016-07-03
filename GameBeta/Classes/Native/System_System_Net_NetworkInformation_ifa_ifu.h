#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_IntPtr.h"

// System.Net.NetworkInformation.ifa_ifu
#pragma pack(push, tp, 1)
struct  ifa_ifu_t3_397 
{
	union
	{
		// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
		struct
		{
			IntPtr_t ___ifu_broadaddr_0;
		};
		// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
		struct
		{
			IntPtr_t ___ifu_dstaddr_1;
		};
	};
};
#pragma pack(pop, tp)
