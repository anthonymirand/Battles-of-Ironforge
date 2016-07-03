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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW
struct Win32_MIB_UDPROW_t3_354;
struct Win32_MIB_UDPROW_t3_354_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::.ctor()
extern "C" void Win32_MIB_UDPROW__ctor_m3_2616 (Win32_MIB_UDPROW_t3_354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::get_LocalEndPoint()
extern "C" IPEndPoint_t3_442 * Win32_MIB_UDPROW_get_LocalEndPoint_m3_2617 (Win32_MIB_UDPROW_t3_354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_UDPROW_t3_354_marshal(const Win32_MIB_UDPROW_t3_354& unmarshaled, Win32_MIB_UDPROW_t3_354_marshaled& marshaled);
extern "C" void Win32_MIB_UDPROW_t3_354_marshal_back(const Win32_MIB_UDPROW_t3_354_marshaled& marshaled, Win32_MIB_UDPROW_t3_354& unmarshaled);
extern "C" void Win32_MIB_UDPROW_t3_354_marshal_cleanup(Win32_MIB_UDPROW_t3_354_marshaled& marshaled);
