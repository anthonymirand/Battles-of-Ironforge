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

// System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
struct LinuxUnicastIPAddressInformation_t3_455;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"

// System.Void System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::.ctor(System.Net.IPAddress)
extern "C" void LinuxUnicastIPAddressInformation__ctor_m3_3147 (LinuxUnicastIPAddressInformation_t3_455 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_Address()
extern "C" IPAddress_t3_339 * LinuxUnicastIPAddressInformation_get_Address_m3_3148 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IsDnsEligible()
extern "C" bool LinuxUnicastIPAddressInformation_get_IsDnsEligible_m3_3149 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IsTransient()
extern "C" bool LinuxUnicastIPAddressInformation_get_IsTransient_m3_3150 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_AddressPreferredLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_AddressPreferredLifetime_m3_3151 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_AddressValidLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_AddressValidLifetime_m3_3152 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_DhcpLeaseLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_DhcpLeaseLifetime_m3_3153 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_DuplicateAddressDetectionState()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_DuplicateAddressDetectionState_m3_3154 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IPv4Mask()
extern "C" IPAddress_t3_339 * LinuxUnicastIPAddressInformation_get_IPv4Mask_m3_3155 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_PrefixOrigin()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_PrefixOrigin_m3_3156 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_SuffixOrigin()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_SuffixOrigin_m3_3157 (LinuxUnicastIPAddressInformation_t3_455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
