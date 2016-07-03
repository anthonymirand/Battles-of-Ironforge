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

// System.Net.NetworkInformation.LinuxIPInterfaceProperties
struct LinuxIPInterfaceProperties_t3_365;
// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t3_381;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;
// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t3_363;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.LinuxIPInterfaceProperties::.ctor(System.Net.NetworkInformation.LinuxNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" void LinuxIPInterfaceProperties__ctor_m3_2712 (LinuxIPInterfaceProperties_t3_365 * __this, LinuxNetworkInterface_t3_381 * ___iface, List_1_t1_950 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.LinuxIPInterfaceProperties::GetIPv4Properties()
extern "C" IPv4InterfaceProperties_t3_363 * LinuxIPInterfaceProperties_GetIPv4Properties_m3_2713 (LinuxIPInterfaceProperties_t3_365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
