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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct Win32_MIB_UDP6ROW_t3_355;
struct Win32_MIB_UDP6ROW_t3_355_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::.ctor()
extern "C" void Win32_MIB_UDP6ROW__ctor_m3_2618 (Win32_MIB_UDP6ROW_t3_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::get_LocalEndPoint()
extern "C" IPEndPoint_t3_442 * Win32_MIB_UDP6ROW_get_LocalEndPoint_m3_2619 (Win32_MIB_UDP6ROW_t3_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_UDP6ROW_t3_355_marshal(const Win32_MIB_UDP6ROW_t3_355& unmarshaled, Win32_MIB_UDP6ROW_t3_355_marshaled& marshaled);
extern "C" void Win32_MIB_UDP6ROW_t3_355_marshal_back(const Win32_MIB_UDP6ROW_t3_355_marshaled& marshaled, Win32_MIB_UDP6ROW_t3_355& unmarshaled);
extern "C" void Win32_MIB_UDP6ROW_t3_355_marshal_cleanup(Win32_MIB_UDP6ROW_t3_355_marshaled& marshaled);
