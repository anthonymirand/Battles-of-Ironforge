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

// System.Net.NetworkInformation.IPAddressInformationImplCollection
struct IPAddressInformationImplCollection_t3_348;
// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t3_347;
// System.Collections.Generic.IList`1<System.Net.IPAddress>
struct IList_1_t1_948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.IPAddressInformationImplCollection::.ctor(System.Boolean)
extern "C" void IPAddressInformationImplCollection__ctor_m3_2575 (IPAddressInformationImplCollection_t3_348 * __this, bool ___isReadOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationImplCollection::.cctor()
extern "C" void IPAddressInformationImplCollection__cctor_m3_2576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationImplCollection::get_IsReadOnly()
extern "C" bool IPAddressInformationImplCollection_get_IsReadOnly_m3_2577 (IPAddressInformationImplCollection_t3_348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationCollection System.Net.NetworkInformation.IPAddressInformationImplCollection::Win32FromAnycast(System.IntPtr)
extern "C" IPAddressInformationCollection_t3_347 * IPAddressInformationImplCollection_Win32FromAnycast_m3_2578 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationImplCollection System.Net.NetworkInformation.IPAddressInformationImplCollection::LinuxFromAnycast(System.Collections.Generic.IList`1<System.Net.IPAddress>)
extern "C" IPAddressInformationImplCollection_t3_348 * IPAddressInformationImplCollection_LinuxFromAnycast_m3_2579 (Object_t * __this /* static, unused */, Object_t* ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
