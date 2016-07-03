#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t3_378;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3_361;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "System_System_Net_NetworkInformation_NetworkInterface.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t3_364  : public NetworkInterface_t3_422
{
	// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.UnixNetworkInterface::ipv4stats
	IPv4InterfaceStatistics_t3_378 * ___ipv4stats_2;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3_361 * ___ipproperties_3;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_4;
	// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::index
	int32_t ___index_5;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t1_950 * ___addresses_6;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t1_72* ___macAddress_7;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_8;
};
