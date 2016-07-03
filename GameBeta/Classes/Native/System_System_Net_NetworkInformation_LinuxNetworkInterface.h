#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "System_System_Net_NetworkInformation_UnixNetworkInterface.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t3_381  : public UnixNetworkInterface_t3_364
{
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.LinuxNetworkInterface::type
	int32_t ___type_12;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_13;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_14;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_15;
};
struct LinuxNetworkInterface_t3_381_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.NetworkInformation.LinuxNetworkInterface::<>f__switch$map3
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map3_16;
};
