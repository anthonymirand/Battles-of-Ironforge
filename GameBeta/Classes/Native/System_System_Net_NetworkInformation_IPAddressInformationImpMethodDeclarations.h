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

// System.Net.NetworkInformation.IPAddressInformationImpl
struct IPAddressInformationImpl_t3_346;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.IPAddressInformationImpl::.ctor(System.Net.IPAddress,System.Boolean,System.Boolean)
extern "C" void IPAddressInformationImpl__ctor_m3_2560 (IPAddressInformationImpl_t3_346 * __this, IPAddress_t3_339 * ___address, bool ___isDnsEligible, bool ___isTransient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformationImpl::get_Address()
extern "C" IPAddress_t3_339 * IPAddressInformationImpl_get_Address_m3_2561 (IPAddressInformationImpl_t3_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::get_IsDnsEligible()
extern "C" bool IPAddressInformationImpl_get_IsDnsEligible_m3_2562 (IPAddressInformationImpl_t3_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationImpl::get_IsTransient()
extern "C" bool IPAddressInformationImpl_get_IsTransient_m3_2563 (IPAddressInformationImpl_t3_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
