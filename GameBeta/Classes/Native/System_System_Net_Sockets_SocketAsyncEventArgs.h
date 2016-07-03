#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t1_953;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t1_954;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.EndPoint
struct EndPoint_t3_491;
// System.Object
struct Object_t;

#include "mscorlib_System_EventArgs.h"
#include "System_System_Net_Sockets_SocketAsyncOperation.h"
#include "System_System_Net_Sockets_SocketError.h"
#include "System_System_Net_Sockets_SocketFlags.h"

// System.Net.Sockets.SocketAsyncEventArgs
struct  SocketAsyncEventArgs_t3_497  : public EventArgs_t1_105
{
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	Object_t* ____bufferList_1;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::curSocket
	Socket_t3_483 * ___curSocket_2;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t1_954 * ___Completed_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t3_483 * ___U3CAcceptSocketU3Ek__BackingField_4;
	// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::<Buffer>k__BackingField
	ByteU5BU5D_t1_72* ___U3CBufferU3Ek__BackingField_5;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_6;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<DisconnectReuseSocket>k__BackingField
	bool ___U3CDisconnectReuseSocketU3Ek__BackingField_8;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_9;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_10;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::<RemoteEndPoint>k__BackingField
	EndPoint_t3_491 * ___U3CRemoteEndPointU3Ek__BackingField_11;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_12;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_13;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_14;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	Object_t * ___U3CUserTokenU3Ek__BackingField_15;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<PolicyRestricted>k__BackingField
	bool ___U3CPolicyRestrictedU3Ek__BackingField_16;
};
