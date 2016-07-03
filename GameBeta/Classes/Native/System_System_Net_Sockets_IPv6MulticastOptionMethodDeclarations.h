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

// System.Net.Sockets.IPv6MulticastOption
struct IPv6MulticastOption_t3_478;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.IPv6MulticastOption::.ctor(System.Net.IPAddress)
extern "C" void IPv6MulticastOption__ctor_m3_3299 (IPv6MulticastOption_t3_478 * __this, IPAddress_t3_339 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.IPv6MulticastOption::.ctor(System.Net.IPAddress,System.Int64)
extern "C" void IPv6MulticastOption__ctor_m3_3300 (IPv6MulticastOption_t3_478 * __this, IPAddress_t3_339 * ___group, int64_t ___ifindex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.IPv6MulticastOption::get_Group()
extern "C" IPAddress_t3_339 * IPv6MulticastOption_get_Group_m3_3301 (IPv6MulticastOption_t3_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.IPv6MulticastOption::set_Group(System.Net.IPAddress)
extern "C" void IPv6MulticastOption_set_Group_m3_3302 (IPv6MulticastOption_t3_478 * __this, IPAddress_t3_339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.IPv6MulticastOption::get_InterfaceIndex()
extern "C" int64_t IPv6MulticastOption_get_InterfaceIndex_m3_3303 (IPv6MulticastOption_t3_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.IPv6MulticastOption::set_InterfaceIndex(System.Int64)
extern "C" void IPv6MulticastOption_set_InterfaceIndex_m3_3304 (IPv6MulticastOption_t3_478 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
