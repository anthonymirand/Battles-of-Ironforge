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

// System.Net.Sockets.TcpListener
struct TcpListener_t3_510;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.EndPoint
struct EndPoint_t3_491;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Net.Sockets.TcpClient
struct TcpClient_t3_320;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.TcpListener::.ctor(System.Int32)
extern "C" void TcpListener__ctor_m3_3706 (TcpListener_t3_510 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPEndPoint)
extern "C" void TcpListener__ctor_m3_3707 (TcpListener_t3_510 * __this, IPEndPoint_t3_442 * ___local_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void TcpListener__ctor_m3_3708 (TcpListener_t3_510 * __this, IPAddress_t3_339 * ___listen_ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Init(System.Net.Sockets.AddressFamily,System.Net.EndPoint)
extern "C" void TcpListener_Init_m3_3709 (TcpListener_t3_510 * __this, int32_t ___family, EndPoint_t3_491 * ___ep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::get_Active()
extern "C" bool TcpListener_get_Active_m3_3710 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.TcpListener::get_LocalEndpoint()
extern "C" EndPoint_t3_491 * TcpListener_get_LocalEndpoint_m3_3711 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern "C" Socket_t3_483 * TcpListener_get_Server_m3_3712 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::get_ExclusiveAddressUse()
extern "C" bool TcpListener_get_ExclusiveAddressUse_m3_3713 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::set_ExclusiveAddressUse(System.Boolean)
extern "C" void TcpListener_set_ExclusiveAddressUse_m3_3714 (TcpListener_t3_510 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::AcceptSocket()
extern "C" Socket_t3_483 * TcpListener_AcceptSocket_m3_3715 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C" TcpClient_t3_320 * TcpListener_AcceptTcpClient_m3_3716 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Finalize()
extern "C" void TcpListener_Finalize_m3_3717 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::Pending()
extern "C" bool TcpListener_Pending_m3_3718 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C" void TcpListener_Start_m3_3719 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern "C" void TcpListener_Start_m3_3720 (TcpListener_t3_510 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptSocket(System.AsyncCallback,System.Object)
extern "C" Object_t * TcpListener_BeginAcceptSocket_m3_3721 (TcpListener_t3_510 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptTcpClient(System.AsyncCallback,System.Object)
extern "C" Object_t * TcpListener_BeginAcceptTcpClient_m3_3722 (TcpListener_t3_510 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::EndAcceptSocket(System.IAsyncResult)
extern "C" Socket_t3_483 * TcpListener_EndAcceptSocket_m3_3723 (TcpListener_t3_510 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::EndAcceptTcpClient(System.IAsyncResult)
extern "C" TcpClient_t3_320 * TcpListener_EndAcceptTcpClient_m3_3724 (TcpListener_t3_510 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C" void TcpListener_Stop_m3_3725 (TcpListener_t3_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
