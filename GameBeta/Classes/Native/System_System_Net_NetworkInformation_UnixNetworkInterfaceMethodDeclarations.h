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

// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t3_364;
// System.String
struct String_t;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t3_427;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceCompone.h"

// System.Void System.Net.NetworkInformation.UnixNetworkInterface::.ctor(System.String)
extern "C" void UnixNetworkInterface__ctor_m3_2966 (UnixNetworkInterface_t3_364 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::if_nametoindex(System.String)
extern "C" int32_t UnixNetworkInterface_if_nametoindex_m3_2967 (Object_t * __this /* static, unused */, String_t* ___ifname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::IfNameToIndex(System.String)
extern "C" int32_t UnixNetworkInterface_IfNameToIndex_m3_2968 (Object_t * __this /* static, unused */, String_t* ___ifname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::AddAddress(System.Net.IPAddress)
extern "C" void UnixNetworkInterface_AddAddress_m3_2969 (UnixNetworkInterface_t3_364 * __this, IPAddress_t3_339 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixNetworkInterface::SetLinkLayerInfo(System.Int32,System.Byte[],System.Net.NetworkInformation.NetworkInterfaceType)
extern "C" void UnixNetworkInterface_SetLinkLayerInfo_m3_2970 (UnixNetworkInterface_t3_364 * __this, int32_t ___index, ByteU5BU5D_t1_72* ___macAddress, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.UnixNetworkInterface::GetPhysicalAddress()
extern "C" PhysicalAddress_t3_427 * UnixNetworkInterface_GetPhysicalAddress_m3_2971 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixNetworkInterface::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern "C" bool UnixNetworkInterface_Supports_m3_2972 (UnixNetworkInterface_t3_364 * __this, int32_t ___networkInterfaceComponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.UnixNetworkInterface::get_Description()
extern "C" String_t* UnixNetworkInterface_get_Description_m3_2973 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.UnixNetworkInterface::get_Id()
extern "C" String_t* UnixNetworkInterface_get_Id_m3_2974 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixNetworkInterface::get_IsReceiveOnly()
extern "C" bool UnixNetworkInterface_get_IsReceiveOnly_m3_2975 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.UnixNetworkInterface::get_Name()
extern "C" String_t* UnixNetworkInterface_get_Name_m3_2976 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::get_NetworkInterfaceType()
extern "C" int32_t UnixNetworkInterface_get_NetworkInterfaceType_m3_2977 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.UnixNetworkInterface::get_Speed()
extern "C" int64_t UnixNetworkInterface_get_Speed_m3_2978 (UnixNetworkInterface_t3_364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
