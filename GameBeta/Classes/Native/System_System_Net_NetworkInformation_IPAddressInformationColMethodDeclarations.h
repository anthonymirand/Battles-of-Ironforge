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

// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t3_347;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_t3_345;
// System.Net.NetworkInformation.IPAddressInformation[]
struct IPAddressInformationU5BU5D_t3_823;
// System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.IPAddressInformation>
struct IEnumerator_1_t1_963;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::.ctor()
extern "C" void IPAddressInformationCollection__ctor_m3_2564 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.NetworkInformation.IPAddressInformationCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IPAddressInformationCollection_System_Collections_IEnumerable_GetEnumerator_m3_2565 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::Add(System.Net.NetworkInformation.IPAddressInformation)
extern "C" void IPAddressInformationCollection_Add_m3_2566 (IPAddressInformationCollection_t3_347 * __this, IPAddressInformation_t3_345 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::Clear()
extern "C" void IPAddressInformationCollection_Clear_m3_2567 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::Contains(System.Net.NetworkInformation.IPAddressInformation)
extern "C" bool IPAddressInformationCollection_Contains_m3_2568 (IPAddressInformationCollection_t3_347 * __this, IPAddressInformation_t3_345 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::CopyTo(System.Net.NetworkInformation.IPAddressInformation[],System.Int32)
extern "C" void IPAddressInformationCollection_CopyTo_m3_2569 (IPAddressInformationCollection_t3_347 * __this, IPAddressInformationU5BU5D_t3_823* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.IPAddressInformation> System.Net.NetworkInformation.IPAddressInformationCollection::GetEnumerator()
extern "C" Object_t* IPAddressInformationCollection_GetEnumerator_m3_2570 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::Remove(System.Net.NetworkInformation.IPAddressInformation)
extern "C" bool IPAddressInformationCollection_Remove_m3_2571 (IPAddressInformationCollection_t3_347 * __this, IPAddressInformation_t3_345 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.IPAddressInformationCollection::get_Count()
extern "C" int32_t IPAddressInformationCollection_get_Count_m3_2572 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::get_IsReadOnly()
extern "C" bool IPAddressInformationCollection_get_IsReadOnly_m3_2573 (IPAddressInformationCollection_t3_347 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformation System.Net.NetworkInformation.IPAddressInformationCollection::get_Item(System.Int32)
extern "C" IPAddressInformation_t3_345 * IPAddressInformationCollection_get_Item_m3_2574 (IPAddressInformationCollection_t3_347 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
