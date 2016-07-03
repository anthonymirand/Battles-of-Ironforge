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

// Mono.Security.Protocol.Tls.ServerRecordProtocol
struct ServerRecordProtocol_t2_108;
// System.IO.Stream
struct Stream_t1_226;
// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t2_106;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2_101;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t2_92;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ServerContext)
extern "C" void ServerRecordProtocol__ctor_m2_687 (ServerRecordProtocol_t2_108 * __this, Stream_t1_226 * ___innerStream, ServerContext_t2_106 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t2_101 * ServerRecordProtocol_GetMessage_m2_688 (ServerRecordProtocol_t2_108 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ServerRecordProtocol_ProcessHandshakeMessage_m2_689 (ServerRecordProtocol_t2_108 * __this, TlsStream_t2_92 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t2_101 * ServerRecordProtocol_createClientHandshakeMessage_m2_690 (ServerRecordProtocol_t2_108 * __this, uint8_t ___type, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t2_101 * ServerRecordProtocol_createServerHandshakeMessage_m2_691 (ServerRecordProtocol_t2_108 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
