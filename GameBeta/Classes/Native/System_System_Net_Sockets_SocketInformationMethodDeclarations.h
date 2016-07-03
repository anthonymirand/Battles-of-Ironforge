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

// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_SocketInformation.h"
#include "System_System_Net_Sockets_SocketInformationOptions.h"

// System.Net.Sockets.SocketInformationOptions System.Net.Sockets.SocketInformation::get_Options()
extern "C" int32_t SocketInformation_get_Options_m3_3658 (SocketInformation_t3_502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketInformation::set_Options(System.Net.Sockets.SocketInformationOptions)
extern "C" void SocketInformation_set_Options_m3_3659 (SocketInformation_t3_502 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SocketInformation::get_ProtocolInformation()
extern "C" ByteU5BU5D_t1_72* SocketInformation_get_ProtocolInformation_m3_3660 (SocketInformation_t3_502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketInformation::set_ProtocolInformation(System.Byte[])
extern "C" void SocketInformation_set_ProtocolInformation_m3_3661 (SocketInformation_t3_502 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void SocketInformation_t3_502_marshal(const SocketInformation_t3_502& unmarshaled, SocketInformation_t3_502_marshaled& marshaled);
extern "C" void SocketInformation_t3_502_marshal_back(const SocketInformation_t3_502_marshaled& marshaled, SocketInformation_t3_502& unmarshaled);
extern "C" void SocketInformation_t3_502_marshal_cleanup(SocketInformation_t3_502_marshaled& marshaled);
