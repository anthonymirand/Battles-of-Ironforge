#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t3_418;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t3_419;

#include "mscorlib_System_Object.h"

// System.Net.NetworkInformation.NetworkChange
struct  NetworkChange_t3_417  : public Object_t
{
};
struct NetworkChange_t3_417_StaticFields{
	// System.Net.NetworkInformation.NetworkAddressChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAddressChanged
	NetworkAddressChangedEventHandler_t3_418 * ___NetworkAddressChanged_0;
	// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAvailabilityChanged
	NetworkAvailabilityChangedEventHandler_t3_419 * ___NetworkAvailabilityChanged_1;
};
