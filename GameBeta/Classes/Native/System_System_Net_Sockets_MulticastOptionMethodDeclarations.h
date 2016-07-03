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

// System.Net.Sockets.MulticastOption
struct MulticastOption_t3_480;
// System.Net.IPAddress
struct IPAddress_t3_339;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress)
extern "C" void MulticastOption__ctor_m3_3310 (MulticastOption_t3_480 * __this, IPAddress_t3_339 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void MulticastOption__ctor_m3_3311 (MulticastOption_t3_480 * __this, IPAddress_t3_339 * ___group, int32_t ___interfaceIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress,System.Net.IPAddress)
extern "C" void MulticastOption__ctor_m3_3312 (MulticastOption_t3_480 * __this, IPAddress_t3_339 * ___group, IPAddress_t3_339 * ___mcint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.MulticastOption::get_Group()
extern "C" IPAddress_t3_339 * MulticastOption_get_Group_m3_3313 (MulticastOption_t3_480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_Group(System.Net.IPAddress)
extern "C" void MulticastOption_set_Group_m3_3314 (MulticastOption_t3_480 * __this, IPAddress_t3_339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.MulticastOption::get_LocalAddress()
extern "C" IPAddress_t3_339 * MulticastOption_get_LocalAddress_m3_3315 (MulticastOption_t3_480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_LocalAddress(System.Net.IPAddress)
extern "C" void MulticastOption_set_LocalAddress_m3_3316 (MulticastOption_t3_480 * __this, IPAddress_t3_339 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.MulticastOption::get_InterfaceIndex()
extern "C" int32_t MulticastOption_get_InterfaceIndex_m3_3317 (MulticastOption_t3_480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_InterfaceIndex(System.Int32)
extern "C" void MulticastOption_set_InterfaceIndex_m3_3318 (MulticastOption_t3_480 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
