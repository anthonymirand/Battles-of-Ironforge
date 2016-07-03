#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t3_339;

#include "System_System_Net_EndPoint.h"

// System.Net.IPEndPoint
struct  IPEndPoint_t3_442  : public EndPoint_t3_491
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t3_339 * ___address_2;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_3;
};
