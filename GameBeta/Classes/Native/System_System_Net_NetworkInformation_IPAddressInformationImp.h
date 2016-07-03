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

#include "System_System_Net_NetworkInformation_IPAddressInformation.h"

// System.Net.NetworkInformation.IPAddressInformationImpl
struct  IPAddressInformationImpl_t3_346  : public IPAddressInformation_t3_345
{
	// System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformationImpl::address
	IPAddress_t3_339 * ___address_0;
	// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::is_dns_eligible
	bool ___is_dns_eligible_1;
	// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::is_transient
	bool ___is_transient_2;
};
