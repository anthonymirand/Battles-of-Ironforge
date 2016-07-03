#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t3_363;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t3_364;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t3_343;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3_11;

#include "System_System_Net_NetworkInformation_IPInterfaceProperties.h"
#include "mscorlib_System_DateTime.h"

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t3_362  : public IPInterfaceProperties_t3_361
{
	// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::ipv4iface_properties
	IPv4InterfaceProperties_t3_363 * ___ipv4iface_properties_0;
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t3_364 * ___iface_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1_950 * ___addresses_2;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t3_343 * ___dns_servers_3;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::gateways
	IPAddressCollection_t3_343 * ___gateways_4;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t1_128  ___last_parse_6;
};
struct UnixIPInterfaceProperties_t3_362_StaticFields{
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3_11 * ___ns_7;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3_11 * ___search_8;
};
