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

// System.Net.Security.NegotiateStream
struct NegotiateStream_t3_468;
// System.IO.Stream
struct Stream_t1_226;
// System.Security.Principal.IIdentity
struct IIdentity_t1_659;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.NetworkCredential
struct NetworkCredential_t3_537;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Principal_TokenImpersonationLevel.h"
#include "System_System_Net_Security_ProtectionLevel.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.NegotiateStream::.ctor(System.IO.Stream)
extern "C" void NegotiateStream__ctor_m3_3190 (NegotiateStream_t3_468 * __this, Stream_t1_226 * ___innerStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void NegotiateStream__ctor_m3_3191 (NegotiateStream_t3_468 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_CanRead()
extern "C" bool NegotiateStream_get_CanRead_m3_3192 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_CanSeek()
extern "C" bool NegotiateStream_get_CanSeek_m3_3193 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_CanTimeout()
extern "C" bool NegotiateStream_get_CanTimeout_m3_3194 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_CanWrite()
extern "C" bool NegotiateStream_get_CanWrite_m3_3195 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.TokenImpersonationLevel System.Net.Security.NegotiateStream::get_ImpersonationLevel()
extern "C" int32_t NegotiateStream_get_ImpersonationLevel_m3_3196 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_IsAuthenticated()
extern "C" bool NegotiateStream_get_IsAuthenticated_m3_3197 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_IsEncrypted()
extern "C" bool NegotiateStream_get_IsEncrypted_m3_3198 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_IsMutuallyAuthenticated()
extern "C" bool NegotiateStream_get_IsMutuallyAuthenticated_m3_3199 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_IsServer()
extern "C" bool NegotiateStream_get_IsServer_m3_3200 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.NegotiateStream::get_IsSigned()
extern "C" bool NegotiateStream_get_IsSigned_m3_3201 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.NegotiateStream::get_Length()
extern "C" int64_t NegotiateStream_get_Length_m3_3202 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.NegotiateStream::get_Position()
extern "C" int64_t NegotiateStream_get_Position_m3_3203 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::set_Position(System.Int64)
extern "C" void NegotiateStream_set_Position_m3_3204 (NegotiateStream_t3_468 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.NegotiateStream::get_ReadTimeout()
extern "C" int32_t NegotiateStream_get_ReadTimeout_m3_3205 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::set_ReadTimeout(System.Int32)
extern "C" void NegotiateStream_set_ReadTimeout_m3_3206 (NegotiateStream_t3_468 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IIdentity System.Net.Security.NegotiateStream::get_RemoteIdentity()
extern "C" Object_t * NegotiateStream_get_RemoteIdentity_m3_3207 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.NegotiateStream::get_WriteTimeout()
extern "C" int32_t NegotiateStream_get_WriteTimeout_m3_3208 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::set_WriteTimeout(System.Int32)
extern "C" void NegotiateStream_set_WriteTimeout_m3_3209 (NegotiateStream_t3_468 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginAuthenticateAsClient(System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginAuthenticateAsClient_m3_3210 (NegotiateStream_t3_468 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginAuthenticateAsClient(System.Net.NetworkCredential,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginAuthenticateAsClient_m3_3211 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, String_t* ___targetName, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginAuthenticateAsClient(System.Net.NetworkCredential,System.String,System.Net.Security.ProtectionLevel,System.Security.Principal.TokenImpersonationLevel,System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginAuthenticateAsClient_m3_3212 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, String_t* ___targetName, int32_t ___requiredProtectionLevel, int32_t ___allowedImpersonationLevel, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginRead_m3_3213 (NegotiateStream_t3_468 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginAuthenticateAsServer(System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginAuthenticateAsServer_m3_3214 (NegotiateStream_t3_468 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginAuthenticateAsServer(System.Net.NetworkCredential,System.Net.Security.ProtectionLevel,System.Security.Principal.TokenImpersonationLevel,System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginAuthenticateAsServer_m3_3215 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, int32_t ___requiredProtectionLevel, int32_t ___requiredImpersonationLevel, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.NegotiateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NegotiateStream_BeginWrite_m3_3216 (NegotiateStream_t3_468 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::AuthenticateAsClient()
extern "C" void NegotiateStream_AuthenticateAsClient_m3_3217 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::AuthenticateAsClient(System.Net.NetworkCredential,System.String)
extern "C" void NegotiateStream_AuthenticateAsClient_m3_3218 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, String_t* ___targetName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::AuthenticateAsClient(System.Net.NetworkCredential,System.String,System.Net.Security.ProtectionLevel,System.Security.Principal.TokenImpersonationLevel)
extern "C" void NegotiateStream_AuthenticateAsClient_m3_3219 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, String_t* ___targetName, int32_t ___requiredProtectionLevel, int32_t ___requiredImpersonationLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::AuthenticateAsServer()
extern "C" void NegotiateStream_AuthenticateAsServer_m3_3220 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::AuthenticateAsServer(System.Net.NetworkCredential,System.Net.Security.ProtectionLevel,System.Security.Principal.TokenImpersonationLevel)
extern "C" void NegotiateStream_AuthenticateAsServer_m3_3221 (NegotiateStream_t3_468 * __this, NetworkCredential_t3_537 * ___credential, int32_t ___requiredProtectionLevel, int32_t ___requiredImpersonationLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::Dispose(System.Boolean)
extern "C" void NegotiateStream_Dispose_m3_3222 (NegotiateStream_t3_468 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C" void NegotiateStream_EndAuthenticateAsClient_m3_3223 (NegotiateStream_t3_468 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.NegotiateStream::EndRead(System.IAsyncResult)
extern "C" int32_t NegotiateStream_EndRead_m3_3224 (NegotiateStream_t3_468 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::EndAuthenticateAsServer(System.IAsyncResult)
extern "C" void NegotiateStream_EndAuthenticateAsServer_m3_3225 (NegotiateStream_t3_468 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::EndWrite(System.IAsyncResult)
extern "C" void NegotiateStream_EndWrite_m3_3226 (NegotiateStream_t3_468 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::Flush()
extern "C" void NegotiateStream_Flush_m3_3227 (NegotiateStream_t3_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.NegotiateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NegotiateStream_Read_m3_3228 (NegotiateStream_t3_468 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.NegotiateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NegotiateStream_Seek_m3_3229 (NegotiateStream_t3_468 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::SetLength(System.Int64)
extern "C" void NegotiateStream_SetLength_m3_3230 (NegotiateStream_t3_468 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.NegotiateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NegotiateStream_Write_m3_3231 (NegotiateStream_t3_468 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
