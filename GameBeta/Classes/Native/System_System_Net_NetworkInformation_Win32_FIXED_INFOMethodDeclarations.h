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

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t3_458;
struct Win32_FIXED_INFO_t3_458_marshaled;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32_FIXED_INFO::.ctor()
extern "C" void Win32_FIXED_INFO__ctor_m3_3174 (Win32_FIXED_INFO_t3_458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32_FIXED_INFO::GetNetworkParams(System.Byte[],System.Int32&)
extern "C" int32_t Win32_FIXED_INFO_GetNetworkParams_m3_3175 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::get_Instance()
extern "C" Win32_FIXED_INFO_t3_458 * Win32_FIXED_INFO_get_Instance_m3_3176 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::GetInstance()
extern "C" Win32_FIXED_INFO_t3_458 * Win32_FIXED_INFO_GetInstance_m3_3177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_FIXED_INFO_t3_458_marshal(const Win32_FIXED_INFO_t3_458& unmarshaled, Win32_FIXED_INFO_t3_458_marshaled& marshaled);
extern "C" void Win32_FIXED_INFO_t3_458_marshal_back(const Win32_FIXED_INFO_t3_458_marshaled& marshaled, Win32_FIXED_INFO_t3_458& unmarshaled);
extern "C" void Win32_FIXED_INFO_t3_458_marshal_cleanup(Win32_FIXED_INFO_t3_458_marshaled& marshaled);
