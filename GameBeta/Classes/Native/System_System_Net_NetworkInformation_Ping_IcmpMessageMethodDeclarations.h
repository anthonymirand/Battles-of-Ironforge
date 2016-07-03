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

// System.Net.NetworkInformation.Ping/IcmpMessage
struct IcmpMessage_t3_430;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_IPStatus.h"

// System.Void System.Net.NetworkInformation.Ping/IcmpMessage::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C" void IcmpMessage__ctor_m3_3025 (IcmpMessage_t3_430 * __this, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping/IcmpMessage::.ctor(System.Byte,System.Byte,System.Int16,System.Int16,System.Byte[])
extern "C" void IcmpMessage__ctor_m3_3026 (IcmpMessage_t3_430 * __this, uint8_t ___type, uint8_t ___code, int16_t ___identifier, int16_t ___sequence, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Type()
extern "C" uint8_t IcmpMessage_get_Type_m3_3027 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Code()
extern "C" uint8_t IcmpMessage_get_Code_m3_3028 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Identifier()
extern "C" uint8_t IcmpMessage_get_Identifier_m3_3029 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Sequence()
extern "C" uint8_t IcmpMessage_get_Sequence_m3_3030 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::get_Data()
extern "C" ByteU5BU5D_t1_72* IcmpMessage_get_Data_m3_3031 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::GetBytes()
extern "C" ByteU5BU5D_t1_72* IcmpMessage_GetBytes_m3_3032 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.NetworkInformation.Ping/IcmpMessage::ComputeChecksum(System.Byte[])
extern "C" uint16_t IcmpMessage_ComputeChecksum_m3_3033 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.Ping/IcmpMessage::get_IPStatus()
extern "C" int32_t IcmpMessage_get_IPStatus_m3_3034 (IcmpMessage_t3_430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
