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

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct Win32UnicastIPAddressInformation_t3_453;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPTER_UNICAS.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"

// System.Void System.Net.NetworkInformation.Win32UnicastIPAddressInformation::.ctor(System.Int32,System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS)
extern "C" void Win32UnicastIPAddressInformation__ctor_m3_3136 (Win32UnicastIPAddressInformation_t3_453 * __this, int32_t ___ifIndex, Win32_IP_ADAPTER_UNICAST_ADDRESS_t3_454  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_Address()
extern "C" IPAddress_t3_339 * Win32UnicastIPAddressInformation_get_Address_m3_3137 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IsDnsEligible()
extern "C" bool Win32UnicastIPAddressInformation_get_IsDnsEligible_m3_3138 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IsTransient()
extern "C" bool Win32UnicastIPAddressInformation_get_IsTransient_m3_3139 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_AddressPreferredLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_AddressPreferredLifetime_m3_3140 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_AddressValidLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_AddressValidLifetime_m3_3141 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_DhcpLeaseLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_DhcpLeaseLifetime_m3_3142 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_DuplicateAddressDetectionState()
extern "C" int32_t Win32UnicastIPAddressInformation_get_DuplicateAddressDetectionState_m3_3143 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IPv4Mask()
extern "C" IPAddress_t3_339 * Win32UnicastIPAddressInformation_get_IPv4Mask_m3_3144 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_PrefixOrigin()
extern "C" int32_t Win32UnicastIPAddressInformation_get_PrefixOrigin_m3_3145 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_SuffixOrigin()
extern "C" int32_t Win32UnicastIPAddressInformation_get_SuffixOrigin_m3_3146 (Win32UnicastIPAddressInformation_t3_453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
