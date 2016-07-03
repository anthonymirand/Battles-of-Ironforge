#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "System_System_Net_NetworkInformation_TcpState.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobalProperties.h"

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct  Win32_MIB_TCP6ROW_t3_353  : public Object_t
{
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::State
	int32_t ___State_0;
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalAddr
	Win32_IN6_ADDR_t3_351  ___LocalAddr_1;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalScopeId
	uint32_t ___LocalScopeId_2;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalPort
	int32_t ___LocalPort_3;
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemoteAddr
	Win32_IN6_ADDR_t3_351  ___RemoteAddr_4;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemoteScopeId
	uint32_t ___RemoteScopeId_5;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemotePort
	int32_t ___RemotePort_6;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct Win32_MIB_TCP6ROW_t3_353_marshaled
{
	int32_t ___State_0;
	Win32_IN6_ADDR_t3_351_marshaled ___LocalAddr_1;
	uint32_t ___LocalScopeId_2;
	int32_t ___LocalPort_3;
	Win32_IN6_ADDR_t3_351_marshaled ___RemoteAddr_4;
	uint32_t ___RemoteScopeId_5;
	int32_t ___RemotePort_6;
};
