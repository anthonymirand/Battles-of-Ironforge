#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "System_System_Net_NetworkInformation_TcpConnectionInformatio.h"
#include "System_System_Net_NetworkInformation_TcpState.h"

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct  TcpConnectionInformationImpl_t3_441  : public TcpConnectionInformation_t3_440
{
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::local
	IPEndPoint_t3_442 * ___local_0;
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::remote
	IPEndPoint_t3_442 * ___remote_1;
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::state
	int32_t ___state_2;
};
