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

// System.Net.NetworkInformation.MulticastIPAddressInformationImpl
struct MulticastIPAddressInformationImpl_t3_412;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"

// System.Void System.Net.NetworkInformation.MulticastIPAddressInformationImpl::.ctor(System.Net.IPAddress,System.Boolean,System.Boolean)
extern "C" void MulticastIPAddressInformationImpl__ctor_m3_2923 (MulticastIPAddressInformationImpl_t3_412 * __this, IPAddress_t3_339 * ___address, bool ___isDnsEligible, bool ___isTransient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_Address()
extern "C" IPAddress_t3_339 * MulticastIPAddressInformationImpl_get_Address_m3_2924 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_IsDnsEligible()
extern "C" bool MulticastIPAddressInformationImpl_get_IsDnsEligible_m3_2925 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_IsTransient()
extern "C" bool MulticastIPAddressInformationImpl_get_IsTransient_m3_2926 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_AddressPreferredLifetime()
extern "C" int64_t MulticastIPAddressInformationImpl_get_AddressPreferredLifetime_m3_2927 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_AddressValidLifetime()
extern "C" int64_t MulticastIPAddressInformationImpl_get_AddressValidLifetime_m3_2928 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_DhcpLeaseLifetime()
extern "C" int64_t MulticastIPAddressInformationImpl_get_DhcpLeaseLifetime_m3_2929 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_DuplicateAddressDetectionState()
extern "C" int32_t MulticastIPAddressInformationImpl_get_DuplicateAddressDetectionState_m3_2930 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_PrefixOrigin()
extern "C" int32_t MulticastIPAddressInformationImpl_get_PrefixOrigin_m3_2931 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.MulticastIPAddressInformationImpl::get_SuffixOrigin()
extern "C" int32_t MulticastIPAddressInformationImpl_get_SuffixOrigin_m3_2932 (MulticastIPAddressInformationImpl_t3_412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
