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

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct TcpConnectionInformationImpl_t3_441;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_TcpState.h"

// System.Void System.Net.NetworkInformation.TcpConnectionInformationImpl::.ctor(System.Net.IPEndPoint,System.Net.IPEndPoint,System.Net.NetworkInformation.TcpState)
extern "C" void TcpConnectionInformationImpl__ctor_m3_3085 (TcpConnectionInformationImpl_t3_441 * __this, IPEndPoint_t3_442 * ___local, IPEndPoint_t3_442 * ___remote, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::get_LocalEndPoint()
extern "C" IPEndPoint_t3_442 * TcpConnectionInformationImpl_get_LocalEndPoint_m3_3086 (TcpConnectionInformationImpl_t3_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::get_RemoteEndPoint()
extern "C" IPEndPoint_t3_442 * TcpConnectionInformationImpl_get_RemoteEndPoint_m3_3087 (TcpConnectionInformationImpl_t3_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::get_State()
extern "C" int32_t TcpConnectionInformationImpl_get_State_m3_3088 (TcpConnectionInformationImpl_t3_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
