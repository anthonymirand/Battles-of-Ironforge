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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct  Win32_MIB_TCPROW_t3_352  : public Object_t
{
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::State
	int32_t ___State_0;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::LocalAddr
	uint32_t ___LocalAddr_1;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::LocalPort
	int32_t ___LocalPort_2;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::RemoteAddr
	uint32_t ___RemoteAddr_3;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::RemotePort
	int32_t ___RemotePort_4;
};
// Native definition for marshalling of: System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct Win32_MIB_TCPROW_t3_352_marshaled
{
	int32_t ___State_0;
	uint32_t ___LocalAddr_1;
	int32_t ___LocalPort_2;
	uint32_t ___RemoteAddr_3;
	int32_t ___RemotePort_4;
};
