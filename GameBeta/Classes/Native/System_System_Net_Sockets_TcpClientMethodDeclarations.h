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

// System.Net.Sockets.TcpClient
struct TcpClient_t3_320;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.String
struct String_t;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Net.Sockets.LingerOption
struct LingerOption_t3_479;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t3_482;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" void TcpClient__ctor_m3_3665 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
extern "C" void TcpClient__ctor_m3_3666 (TcpClient_t3_320 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.IPEndPoint)
extern "C" void TcpClient__ctor_m3_3667 (TcpClient_t3_320 * __this, IPEndPoint_t3_442 * ___local_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
extern "C" void TcpClient__ctor_m3_3668 (TcpClient_t3_320 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C" void TcpClient_System_IDisposable_Dispose_m3_3669 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C" void TcpClient_Init_m3_3670 (TcpClient_t3_320 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_Active()
extern "C" bool TcpClient_get_Active_m3_3671 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Active(System.Boolean)
extern "C" void TcpClient_set_Active_m3_3672 (TcpClient_t3_320 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" Socket_t3_483 * TcpClient_get_Client_m3_3673 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C" void TcpClient_set_Client_m3_3674 (TcpClient_t3_320 * __this, Socket_t3_483 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_Available()
extern "C" int32_t TcpClient_get_Available_m3_3675 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
extern "C" bool TcpClient_get_Connected_m3_3676 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_ExclusiveAddressUse()
extern "C" bool TcpClient_get_ExclusiveAddressUse_m3_3677 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ExclusiveAddressUse(System.Boolean)
extern "C" void TcpClient_set_ExclusiveAddressUse_m3_3678 (TcpClient_t3_320 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetTcpClient(System.Net.Sockets.Socket)
extern "C" void TcpClient_SetTcpClient_m3_3679 (TcpClient_t3_320 * __this, Socket_t3_483 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.LingerOption System.Net.Sockets.TcpClient::get_LingerState()
extern "C" LingerOption_t3_479 * TcpClient_get_LingerState_m3_3680 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
extern "C" void TcpClient_set_LingerState_m3_3681 (TcpClient_t3_320 * __this, LingerOption_t3_479 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_NoDelay()
extern "C" bool TcpClient_get_NoDelay_m3_3682 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern "C" void TcpClient_set_NoDelay_m3_3683 (TcpClient_t3_320 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_ReceiveBufferSize()
extern "C" int32_t TcpClient_get_ReceiveBufferSize_m3_3684 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C" void TcpClient_set_ReceiveBufferSize_m3_3685 (TcpClient_t3_320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_ReceiveTimeout()
extern "C" int32_t TcpClient_get_ReceiveTimeout_m3_3686 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
extern "C" void TcpClient_set_ReceiveTimeout_m3_3687 (TcpClient_t3_320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_SendBufferSize()
extern "C" int32_t TcpClient_get_SendBufferSize_m3_3688 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
extern "C" void TcpClient_set_SendBufferSize_m3_3689 (TcpClient_t3_320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_SendTimeout()
extern "C" int32_t TcpClient_get_SendTimeout_m3_3690 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
extern "C" void TcpClient_set_SendTimeout_m3_3691 (TcpClient_t3_320 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" void TcpClient_Close_m3_3692 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern "C" void TcpClient_Connect_m3_3693 (TcpClient_t3_320 * __this, IPEndPoint_t3_442 * ___remote_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress,System.Int32)
extern "C" void TcpClient_Connect_m3_3694 (TcpClient_t3_320 * __this, IPAddress_t3_339 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetOptions()
extern "C" void TcpClient_SetOptions_m3_3695 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
extern "C" void TcpClient_Connect_m3_3696 (TcpClient_t3_320 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress[],System.Int32)
extern "C" void TcpClient_Connect_m3_3697 (TcpClient_t3_320 * __this, IPAddressU5BU5D_t3_492* ___ipAddresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
extern "C" void TcpClient_EndConnect_m3_3698 (TcpClient_t3_320 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m3_3699 (TcpClient_t3_320 * __this, IPAddress_t3_339 * ___address, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m3_3700 (TcpClient_t3_320 * __this, IPAddressU5BU5D_t3_492* ___addresses, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m3_3701 (TcpClient_t3_320 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C" void TcpClient_Dispose_m3_3702 (TcpClient_t3_320 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C" void TcpClient_Finalize_m3_3703 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" NetworkStream_t3_482 * TcpClient_GetStream_m3_3704 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C" void TcpClient_CheckDisposed_m3_3705 (TcpClient_t3_320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
