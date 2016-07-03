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

// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Collections.IList
struct IList_t1_429;
// System.String
struct String_t;
// System.Net.Sockets.Socket[]
struct SocketU5BU5D_t3_831;
// System.Net.Sockets.LingerOption
struct LingerOption_t3_479;
// System.Net.SocketAddress
struct SocketAddress_t3_612;
// System.Net.EndPoint
struct EndPoint_t3_491;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t3_497;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3_492;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t1_953;
// System.Exception
struct Exception_t1_33;
// System.Net.Sockets.Socket/WSABUF[]
struct WSABUFU5BU5D_t3_832;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"
#include "System_System_Net_Sockets_SocketType.h"
#include "System_System_Net_Sockets_ProtocolType.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Sockets_SocketInformation.h"
#include "System_System_Net_Sockets_SocketFlags.h"
#include "System_System_Net_Sockets_SocketError.h"
#include "System_System_Net_Sockets_TransmitFileOptions.h"
#include "System_System_Net_Sockets_IPPacketInformation.h"
#include "System_System_Net_Sockets_SocketOptionLevel.h"
#include "System_System_Net_Sockets_SocketOptionName.h"
#include "System_System_Net_Sockets_IOControlCode.h"
#include "System_System_Net_Sockets_SelectMode.h"
#include "System_System_Net_Sockets_SocketShutdown.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
extern "C" void Socket__ctor_m3_3420 (Socket_t3_483 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.SocketInformation)
extern "C" void Socket__ctor_m3_3421 (Socket_t3_483 * __this, SocketInformation_t3_502  ___socketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C" void Socket__ctor_m3_3422 (Socket_t3_483 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C" void Socket__cctor_m3_3423 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::AddSockets(System.Collections.ArrayList,System.Collections.IList,System.String)
extern "C" void Socket_AddSockets_m3_3424 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___sockets, Object_t * ___list, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Select_internal(System.Net.Sockets.Socket[]&,System.Int32,System.Int32&)
extern "C" void Socket_Select_internal_m3_3425 (Object_t * __this /* static, unused */, SocketU5BU5D_t3_831** ___sockets, int32_t ___microSeconds, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Select(System.Collections.IList,System.Collections.IList,System.Collections.IList,System.Int32)
extern "C" void Socket_Select_m3_3426 (Object_t * __this /* static, unused */, Object_t * ___checkRead, Object_t * ___checkWrite, Object_t * ___checkError, int32_t ___microSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SocketDefaults()
extern "C" void Socket_SocketDefaults_m3_3427 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Available_internal(System.IntPtr,System.Int32&)
extern "C" int32_t Socket_Available_internal_m3_3428 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_Available()
extern "C" int32_t Socket_get_Available_m3_3429 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_DontFragment()
extern "C" bool Socket_get_DontFragment_m3_3430 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern "C" void Socket_set_DontFragment_m3_3431 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_EnableBroadcast()
extern "C" bool Socket_get_EnableBroadcast_m3_3432 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
extern "C" void Socket_set_EnableBroadcast_m3_3433 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_ExclusiveAddressUse()
extern "C" bool Socket_get_ExclusiveAddressUse_m3_3434 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ExclusiveAddressUse(System.Boolean)
extern "C" void Socket_set_ExclusiveAddressUse_m3_3435 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
extern "C" bool Socket_get_IsBound_m3_3436 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.LingerOption System.Net.Sockets.Socket::get_LingerState()
extern "C" LingerOption_t3_479 * Socket_get_LingerState_m3_3437 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_LingerState(System.Net.Sockets.LingerOption)
extern "C" void Socket_set_LingerState_m3_3438 (Socket_t3_483 * __this, LingerOption_t3_479 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_MulticastLoopback()
extern "C" bool Socket_get_MulticastLoopback_m3_3439 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_MulticastLoopback(System.Boolean)
extern "C" void Socket_set_MulticastLoopback_m3_3440 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_UseOnlyOverlappedIO()
extern "C" bool Socket_get_UseOnlyOverlappedIO_m3_3441 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_UseOnlyOverlappedIO(System.Boolean)
extern "C" void Socket_set_UseOnlyOverlappedIO_m3_3442 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern "C" IntPtr_t Socket_get_Handle_m3_3443 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C" SocketAddress_t3_612 * Socket_LocalEndPoint_internal_m3_3444 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C" EndPoint_t3_491 * Socket_get_LocalEndPoint_m3_3445 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern "C" int32_t Socket_get_SocketType_m3_3446 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
extern "C" int32_t Socket_get_SendTimeout_m3_3447 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
extern "C" void Socket_set_SendTimeout_m3_3448 (Socket_t3_483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
extern "C" int32_t Socket_get_ReceiveTimeout_m3_3449 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
extern "C" void Socket_set_ReceiveTimeout_m3_3450 (Socket_t3_483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::AcceptAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_AcceptAsync_m3_3451 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern "C" IntPtr_t Socket_Accept_internal_m3_3452 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t* ___error, bool ___blocking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern "C" Socket_t3_483 * Socket_Accept_m3_3453 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern "C" void Socket_Accept_m3_3454 (Socket_t3_483 * __this, Socket_t3_483 * ___acceptSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m3_3455 (Socket_t3_483 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m3_3456 (Socket_t3_483 * __this, int32_t ___receiveSize, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.Net.Sockets.Socket,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m3_3457 (Socket_t3_483 * __this, Socket_t3_483 * ___acceptSocket, int32_t ___receiveSize, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m3_3458 (Socket_t3_483 * __this, EndPoint_t3_491 * ___end_point, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object,System.Boolean)
extern "C" Object_t * Socket_BeginConnect_m3_3459 (Socket_t3_483 * __this, EndPoint_t3_491 * ___end_point, AsyncCallback_t1_28 * ___callback, Object_t * ___state, bool ___bypassSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m3_3460 (Socket_t3_483 * __this, IPAddress_t3_339 * ___address, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m3_3461 (Socket_t3_483 * __this, IPAddressU5BU5D_t3_492* ___addresses, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m3_3462 (Socket_t3_483 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginDisconnect(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginDisconnect_m3_3463 (Socket_t3_483 * __this, bool ___reuseSocket, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m3_3464 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m3_3465 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m3_3466 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m3_3467 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceiveFrom_m3_3468 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, EndPoint_t3_491 ** ___remote_end, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveMessageFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceiveMessageFrom_m3_3469 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socketFlags, EndPoint_t3_491 ** ___remoteEP, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m3_3470 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m3_3471 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m3_3472 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m3_3473 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendFile(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendFile_m3_3474 (Socket_t3_483 * __this, String_t* ___fileName, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendFile(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendFile_m3_3475 (Socket_t3_483 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendTo_m3_3476 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, EndPoint_t3_491 * ___remote_end, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Bind_internal_m3_3477 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3_612 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C" void Socket_Bind_m3_3478 (Socket_t3_483 * __this, EndPoint_t3_491 * ___local_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ConnectAsync_m3_3479 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
extern "C" void Socket_Connect_m3_3480 (Socket_t3_483 * __this, IPAddress_t3_339 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress[],System.Int32)
extern "C" void Socket_Connect_m3_3481 (Socket_t3_483 * __this, IPAddressU5BU5D_t3_492* ___addresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.String,System.Int32)
extern "C" void Socket_Connect_m3_3482 (Socket_t3_483 * __this, String_t* ___host, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::DisconnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_DisconnectAsync_m3_3483 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C" void Socket_Disconnect_internal_m3_3484 (Object_t * __this /* static, unused */, IntPtr_t ___sock, bool ___reuse, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern "C" void Socket_Disconnect_m3_3485 (Socket_t3_483 * __this, bool ___reuseSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketInformation System.Net.Sockets.Socket::DuplicateAndClose(System.Int32)
extern "C" SocketInformation_t3_502  Socket_DuplicateAndClose_m3_3486 (Socket_t3_483 * __this, int32_t ___targetProcessId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern "C" Socket_t3_483 * Socket_EndAccept_m3_3487 (Socket_t3_483 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.IAsyncResult)
extern "C" Socket_t3_483 * Socket_EndAccept_m3_3488 (Socket_t3_483 * __this, ByteU5BU5D_t1_72** ___buffer, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern "C" Socket_t3_483 * Socket_EndAccept_m3_3489 (Socket_t3_483 * __this, ByteU5BU5D_t1_72** ___buffer, int32_t* ___bytesTransferred, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern "C" void Socket_EndConnect_m3_3490 (Socket_t3_483 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern "C" void Socket_EndDisconnect_m3_3491 (Socket_t3_483 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern "C" int32_t Socket_EndReceive_m3_3492 (Socket_t3_483 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndReceive_m3_3493 (Socket_t3_483 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern "C" int32_t Socket_EndReceiveFrom_m3_3494 (Socket_t3_483 * __this, Object_t * ___result, EndPoint_t3_491 ** ___end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceiveMessageFrom(System.IAsyncResult,System.Net.Sockets.SocketFlags&,System.Net.EndPoint&,System.Net.Sockets.IPPacketInformation&)
extern "C" int32_t Socket_EndReceiveMessageFrom_m3_3495 (Socket_t3_483 * __this, Object_t * ___asyncResult, int32_t* ___socketFlags, EndPoint_t3_491 ** ___endPoint, IPPacketInformation_t3_477 * ___ipPacketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern "C" int32_t Socket_EndSend_m3_3496 (Socket_t3_483 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndSend_m3_3497 (Socket_t3_483 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndSendFile(System.IAsyncResult)
extern "C" void Socket_EndSendFile_m3_3498 (Socket_t3_483 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C" Exception_t1_33 * Socket_InvalidAsyncOp_m3_3499 (Socket_t3_483 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern "C" int32_t Socket_EndSendTo_m3_3500 (Socket_t3_483 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_arr_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[]&,System.Int32&)
extern "C" void Socket_GetSocketOption_arr_internal_m3_3501 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, ByteU5BU5D_t1_72** ___byte_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[])
extern "C" void Socket_GetSocketOption_m3_3502 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, ByteU5BU5D_t1_72* ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C" ByteU5BU5D_t1_72* Socket_GetSocketOption_m3_3503 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::WSAIoctl(System.IntPtr,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern "C" int32_t Socket_WSAIoctl_m3_3504 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___ioctl_code, ByteU5BU5D_t1_72* ___input, ByteU5BU5D_t1_72* ___output, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::IOControl(System.Int32,System.Byte[],System.Byte[])
extern "C" int32_t Socket_IOControl_m3_3505 (Socket_t3_483 * __this, int32_t ___ioctl_code, ByteU5BU5D_t1_72* ___in_value, ByteU5BU5D_t1_72* ___out_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::IOControl(System.Net.Sockets.IOControlCode,System.Byte[],System.Byte[])
extern "C" int32_t Socket_IOControl_m3_3506 (Socket_t3_483 * __this, int64_t ___ioControlCode, ByteU5BU5D_t1_72* ___optionInValue, ByteU5BU5D_t1_72* ___optionOutValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern "C" void Socket_Listen_internal_m3_3507 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___backlog, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern "C" void Socket_Listen_m3_3508 (Socket_t3_483 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C" bool Socket_Poll_m3_3509 (Socket_t3_483 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
extern "C" int32_t Socket_Receive_m3_3510 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m3_3511 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m3_3512 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m3_3513 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_m3_3514 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF[],System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Receive_internal_m3_3515 (Object_t * __this /* static, unused */, IntPtr_t ___sock, WSABUFU5BU5D_t3_832* ___bufarray, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C" int32_t Socket_Receive_m3_3516 (Socket_t3_483 * __this, Object_t* ___buffers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m3_3517 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_m3_3518 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveFromAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveFromAsync_m3_3519 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m3_3520 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, EndPoint_t3_491 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m3_3521 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, EndPoint_t3_491 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m3_3522 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, EndPoint_t3_491 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C" int32_t Socket_RecvFrom_internal_m3_3523 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3_612 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m3_3524 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t3_491 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_m3_3525 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t3_491 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_exc_m3_3526 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t3_491 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveMessageFromAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveMessageFromAsync_m3_3527 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveMessageFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags&,System.Net.EndPoint&,System.Net.Sockets.IPPacketInformation&)
extern "C" int32_t Socket_ReceiveMessageFrom_m3_3528 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___socketFlags, EndPoint_t3_491 ** ___remoteEP, IPPacketInformation_t3_477 * ___ipPacketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendPacketsAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendPacketsAsync_m3_3529 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
extern "C" int32_t Socket_Send_m3_3530 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m3_3531 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m3_3532 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m3_3533 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_m3_3534 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF[],System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Send_internal_m3_3535 (Object_t * __this /* static, unused */, IntPtr_t ___sock, WSABUFU5BU5D_t3_832* ___bufarray, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C" int32_t Socket_Send_m3_3536 (Socket_t3_483 * __this, Object_t* ___buffers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m3_3537 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_m3_3538 (Socket_t3_483 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendFile(System.IntPtr,System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions)
extern "C" bool Socket_SendFile_m3_3539 (Object_t * __this /* static, unused */, IntPtr_t ___sock, String_t* ___filename, ByteU5BU5D_t1_72* ___pre_buffer, ByteU5BU5D_t1_72* ___post_buffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SendFile(System.String)
extern "C" void Socket_SendFile_m3_3540 (Socket_t3_483 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SendFile(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions)
extern "C" void Socket_SendFile_m3_3541 (Socket_t3_483 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendToAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendToAsync_m3_3542 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m3_3543 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, EndPoint_t3_491 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m3_3544 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, EndPoint_t3_491 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m3_3545 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, EndPoint_t3_491 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_real_m3_3546 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3_612 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_m3_3547 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3_612 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m3_3548 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t3_491 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_nochecks_m3_3549 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t3_491 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[])
extern "C" void Socket_SetSocketOption_m3_3550 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, ByteU5BU5D_t1_72* ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object)
extern "C" void Socket_SetSocketOption_m3_3551 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, Object_t * ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Boolean)
extern "C" void Socket_SetSocketOption_m3_3552 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, bool ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C" void Socket_CheckProtocolSupport_m3_3553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C" bool Socket_get_SupportsIPv4_m3_3554 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C" bool Socket_get_SupportsIPv6_m3_3555 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern "C" bool Socket_get_OSSupportsIPv4_m3_3556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern "C" bool Socket_get_OSSupportsIPv6_m3_3557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C" IntPtr_t Socket_Socket_internal_m3_3558 (Socket_t3_483 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C" void Socket_Finalize_m3_3559 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C" int32_t Socket_get_AddressFamily_m3_3560 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C" void Socket_Blocking_internal_m3_3561 (Object_t * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C" bool Socket_get_Blocking_m3_3562 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C" void Socket_set_Blocking_m3_3563 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C" bool Socket_get_Connected_m3_3564 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Connected(System.Boolean)
extern "C" void Socket_set_Connected_m3_3565 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C" int32_t Socket_get_ProtocolType_m3_3566 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_NoDelay()
extern "C" bool Socket_get_NoDelay_m3_3567 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C" void Socket_set_NoDelay_m3_3568 (Socket_t3_483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveBufferSize()
extern "C" int32_t Socket_get_ReceiveBufferSize_m3_3569 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ReceiveBufferSize(System.Int32)
extern "C" void Socket_set_ReceiveBufferSize_m3_3570 (Socket_t3_483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendBufferSize()
extern "C" int32_t Socket_get_SendBufferSize_m3_3571 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_SendBufferSize(System.Int32)
extern "C" void Socket_set_SendBufferSize_m3_3572 (Socket_t3_483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.Sockets.Socket::get_Ttl()
extern "C" int16_t Socket_get_Ttl_m3_3573 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Ttl(System.Int16)
extern "C" void Socket_set_Ttl_m3_3574 (Socket_t3_483 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.IntPtr,System.Int32&)
extern "C" SocketAddress_t3_612 * Socket_RemoteEndPoint_internal_m3_3575 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern "C" EndPoint_t3_491 * Socket_get_RemoteEndPoint_m3_3576 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C" void Socket_Linger_m3_3577 (Socket_t3_483 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C" void Socket_Dispose_m3_3578 (Socket_t3_483 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C" void Socket_Dispose_m3_3579 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C" void Socket_Close_internal_m3_3580 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C" void Socket_Close_m3_3581 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern "C" void Socket_Close_m3_3582 (Socket_t3_483 * __this, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Connect_internal_real_m3_3583 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3_612 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Connect_internal_m3_3584 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3_612 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C" void Socket_Connect_internal_m3_3585 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3_612 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C" bool Socket_CheckEndPoint_m3_3586 (Object_t * __this /* static, unused */, SocketAddress_t3_612 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C" MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m3_3587 (Object_t * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C" void Socket_Connect_m3_3588 (Socket_t3_483 * __this, EndPoint_t3_491 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C" void Socket_Connect_m3_3589 (Socket_t3_483 * __this, EndPoint_t3_491 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveAsync_m3_3590 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendAsync_m3_3591 (Socket_t3_483 * __this, SocketAsyncEventArgs_t3_497 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C" bool Socket_Poll_internal_m3_3592 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode,System.Int32&)
extern "C" bool Socket_Poll_m3_3593 (Socket_t3_483 * __this, int32_t ___time_us, int32_t ___mode, int32_t* ___socket_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Receive_internal_m3_3594 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_nochecks_m3_3595 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C" void Socket_GetSocketOption_obj_internal_m3_3596 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Send_internal_m3_3597 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_nochecks_m3_3598 (Socket_t3_483 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C" Object_t * Socket_GetSocketOption_m3_3599 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C" void Socket_Shutdown_internal_m3_3600 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
extern "C" void Socket_Shutdown_m3_3601 (Socket_t3_483 * __this, int32_t ___how, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C" void Socket_SetSocketOption_internal_m3_3602 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t1_72* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C" void Socket_SetSocketOption_m3_3603 (Socket_t3_483 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C" void Socket_ThrowIfUpd_m3_3604 (Socket_t3_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
