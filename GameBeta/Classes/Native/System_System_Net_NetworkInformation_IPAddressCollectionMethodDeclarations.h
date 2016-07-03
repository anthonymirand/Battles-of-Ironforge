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

// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t3_343;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>
struct IEnumerator_1_t1_962;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.IPAddressCollection::.ctor()
extern "C" void IPAddressCollection__ctor_m3_2539 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.NetworkInformation.IPAddressCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IPAddressCollection_System_Collections_IEnumerable_GetEnumerator_m3_2540 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::SetReadOnly()
extern "C" void IPAddressCollection_SetReadOnly_m3_2541 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::Add(System.Net.IPAddress)
extern "C" void IPAddressCollection_Add_m3_2542 (IPAddressCollection_t3_343 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::Clear()
extern "C" void IPAddressCollection_Clear_m3_2543 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::Contains(System.Net.IPAddress)
extern "C" bool IPAddressCollection_Contains_m3_2544 (IPAddressCollection_t3_343 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::CopyTo(System.Net.IPAddress[],System.Int32)
extern "C" void IPAddressCollection_CopyTo_m3_2545 (IPAddressCollection_t3_343 * __this, IPAddressU5BU5D_t3_492* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator()
extern "C" Object_t* IPAddressCollection_GetEnumerator_m3_2546 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::Remove(System.Net.IPAddress)
extern "C" bool IPAddressCollection_Remove_m3_2547 (IPAddressCollection_t3_343 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.IPAddressCollection::get_Count()
extern "C" int32_t IPAddressCollection_get_Count_m3_2548 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::get_IsReadOnly()
extern "C" bool IPAddressCollection_get_IsReadOnly_m3_2549 (IPAddressCollection_t3_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.IPAddressCollection::get_Item(System.Int32)
extern "C" IPAddress_t3_339 * IPAddressCollection_get_Item_m3_2550 (IPAddressCollection_t3_343 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
