#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobalProperties.h"

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct  Win32_MIB_UDP6ROW_t3_355  : public Object_t
{
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalAddr
	Win32_IN6_ADDR_t3_351  ___LocalAddr_0;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalScopeId
	uint32_t ___LocalScopeId_1;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalPort
	int32_t ___LocalPort_2;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct Win32_MIB_UDP6ROW_t3_355_marshaled
{
	Win32_IN6_ADDR_t3_351_marshaled ___LocalAddr_0;
	uint32_t ___LocalScopeId_1;
	int32_t ___LocalPort_2;
};
