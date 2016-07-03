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

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t3_402 
{
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t1_72* ___sll_addr_6;
};
// Native definition for marshalling of: System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3_402_marshaled
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
