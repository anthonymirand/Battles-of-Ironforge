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

// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection
struct MulticastIPAddressInformationImplCollection_t3_414;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_t3_413;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::.ctor(System.Boolean)
extern "C" void MulticastIPAddressInformationImplCollection__ctor_m3_2944 (MulticastIPAddressInformationImplCollection_t3_414 * __this, bool ___isReadOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::.cctor()
extern "C" void MulticastIPAddressInformationImplCollection__cctor_m3_2945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::get_IsReadOnly()
extern "C" bool MulticastIPAddressInformationImplCollection_get_IsReadOnly_m3_2946 (MulticastIPAddressInformationImplCollection_t3_414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::Win32FromMulticast(System.IntPtr)
extern "C" MulticastIPAddressInformationCollection_t3_413 * MulticastIPAddressInformationImplCollection_Win32FromMulticast_m3_2947 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::LinuxFromList(System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" MulticastIPAddressInformationImplCollection_t3_414 * MulticastIPAddressInformationImplCollection_LinuxFromList_m3_2948 (Object_t * __this /* static, unused */, List_1_t1_950 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
