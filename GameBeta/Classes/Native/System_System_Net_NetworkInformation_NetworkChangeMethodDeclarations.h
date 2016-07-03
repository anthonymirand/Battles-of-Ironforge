#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkInformation.NetworkChange
struct NetworkChange_t3_417;
// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t3_418;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t3_419;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.NetworkChange::.ctor()
extern "C" void NetworkChange__ctor_m3_2951 (NetworkChange_t3_417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::add_NetworkAddressChanged(System.Net.NetworkInformation.NetworkAddressChangedEventHandler)
extern "C" void NetworkChange_add_NetworkAddressChanged_m3_2952 (Object_t * __this /* static, unused */, NetworkAddressChangedEventHandler_t3_418 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::remove_NetworkAddressChanged(System.Net.NetworkInformation.NetworkAddressChangedEventHandler)
extern "C" void NetworkChange_remove_NetworkAddressChanged_m3_2953 (Object_t * __this /* static, unused */, NetworkAddressChangedEventHandler_t3_418 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::add_NetworkAvailabilityChanged(System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler)
extern "C" void NetworkChange_add_NetworkAvailabilityChanged_m3_2954 (Object_t * __this /* static, unused */, NetworkAvailabilityChangedEventHandler_t3_419 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::remove_NetworkAvailabilityChanged(System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler)
extern "C" void NetworkChange_remove_NetworkAvailabilityChanged_m3_2955 (Object_t * __this /* static, unused */, NetworkAvailabilityChangedEventHandler_t3_419 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
