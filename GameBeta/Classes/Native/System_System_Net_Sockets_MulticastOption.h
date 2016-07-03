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

#include "mscorlib_System_Object.h"

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t3_480  : public Object_t
{
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::group
	IPAddress_t3_339 * ___group_0;
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::local
	IPAddress_t3_339 * ___local_1;
	// System.Int32 System.Net.Sockets.MulticastOption::iface_index
	int32_t ___iface_index_2;
};
