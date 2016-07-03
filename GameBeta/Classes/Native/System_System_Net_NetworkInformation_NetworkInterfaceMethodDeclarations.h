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

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t3_422;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t3_827;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.NetworkInterface::.ctor()
extern "C" void NetworkInterface__ctor_m3_2959 (NetworkInterface_t3_422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkInterface::.cctor()
extern "C" void NetworkInterface__cctor_m3_2960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.NetworkInterface::uname(System.IntPtr)
extern "C" int32_t NetworkInterface_uname_m3_2961 (Object_t * __this /* static, unused */, IntPtr_t ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t3_827* NetworkInterface_GetAllNetworkInterfaces_m3_2962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.NetworkInterface::GetIsNetworkAvailable()
extern "C" bool NetworkInterface_GetIsNetworkAvailable_m3_2963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.NetworkInterface::ReadLine(System.String)
extern "C" String_t* NetworkInterface_ReadLine_m3_2964 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.NetworkInterface::get_LoopbackInterfaceIndex()
extern "C" int32_t NetworkInterface_get_LoopbackInterfaceIndex_m3_2965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
