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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct Win32_MIB_TCPROW_t3_352;
struct Win32_MIB_TCPROW_t3_352_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.NetworkInformation.TcpConnectionInformation
struct TcpConnectionInformation_t3_440;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::.ctor()
extern "C" void Win32_MIB_TCPROW__ctor_m3_2608 (Win32_MIB_TCPROW_t3_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_LocalEndPoint()
extern "C" IPEndPoint_t3_442 * Win32_MIB_TCPROW_get_LocalEndPoint_m3_2609 (Win32_MIB_TCPROW_t3_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_RemoteEndPoint()
extern "C" IPEndPoint_t3_442 * Win32_MIB_TCPROW_get_RemoteEndPoint_m3_2610 (Win32_MIB_TCPROW_t3_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpConnectionInformation System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_TcpInfo()
extern "C" TcpConnectionInformation_t3_440 * Win32_MIB_TCPROW_get_TcpInfo_m3_2611 (Win32_MIB_TCPROW_t3_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_TCPROW_t3_352_marshal(const Win32_MIB_TCPROW_t3_352& unmarshaled, Win32_MIB_TCPROW_t3_352_marshaled& marshaled);
extern "C" void Win32_MIB_TCPROW_t3_352_marshal_back(const Win32_MIB_TCPROW_t3_352_marshaled& marshaled, Win32_MIB_TCPROW_t3_352& unmarshaled);
extern "C" void Win32_MIB_TCPROW_t3_352_marshal_cleanup(Win32_MIB_TCPROW_t3_352_marshaled& marshaled);
