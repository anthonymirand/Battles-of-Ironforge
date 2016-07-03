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

// System.Net.Security.SslStream
struct SslStream_t3_472;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3_474;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_1;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Authentication_CipherAlgorithmType.h"
#include "System_System_Security_Authentication_HashAlgorithmType.h"
#include "System_System_Security_Authentication_ExchangeAlgorithmType.h"
#include "System_System_Security_Authentication_SslProtocols.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream)
extern "C" void SslStream__ctor_m3_3238 (SslStream_t3_472 * __this, Stream_t1_226 * ___innerStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void SslStream__ctor_m3_3239 (SslStream_t3_472 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern "C" void SslStream__ctor_m3_3240 (SslStream_t3_472 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t3_5 * ___certValidationCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C" void SslStream__ctor_m3_3241 (SslStream_t3_472 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t3_5 * ___certValidationCallback, LocalCertificateSelectionCallback_t3_474 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C" bool SslStream_get_CanRead_m3_3242 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C" bool SslStream_get_CanSeek_m3_3243 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanTimeout()
extern "C" bool SslStream_get_CanTimeout_m3_3244 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C" bool SslStream_get_CanWrite_m3_3245 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C" int64_t SslStream_get_Length_m3_3246 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C" int64_t SslStream_get_Position_m3_3247 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C" void SslStream_set_Position_m3_3248 (SslStream_t3_472 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C" bool SslStream_get_IsAuthenticated_m3_3249 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsEncrypted()
extern "C" bool SslStream_get_IsEncrypted_m3_3250 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsMutuallyAuthenticated()
extern "C" bool SslStream_get_IsMutuallyAuthenticated_m3_3251 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsServer()
extern "C" bool SslStream_get_IsServer_m3_3252 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsSigned()
extern "C" bool SslStream_get_IsSigned_m3_3253 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C" int32_t SslStream_get_ReadTimeout_m3_3254 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_ReadTimeout(System.Int32)
extern "C" void SslStream_set_ReadTimeout_m3_3255 (SslStream_t3_472 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C" int32_t SslStream_get_WriteTimeout_m3_3256 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_WriteTimeout(System.Int32)
extern "C" void SslStream_set_WriteTimeout_m3_3257 (SslStream_t3_472 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CheckCertRevocationStatus()
extern "C" bool SslStream_get_CheckCertRevocationStatus_m3_3258 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.CipherAlgorithmType System.Net.Security.SslStream::get_CipherAlgorithm()
extern "C" int32_t SslStream_get_CipherAlgorithm_m3_3259 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_CipherStrength()
extern "C" int32_t SslStream_get_CipherStrength_m3_3260 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.HashAlgorithmType System.Net.Security.SslStream::get_HashAlgorithm()
extern "C" int32_t SslStream_get_HashAlgorithm_m3_3261 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_HashStrength()
extern "C" int32_t SslStream_get_HashStrength_m3_3262 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.ExchangeAlgorithmType System.Net.Security.SslStream::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStream_get_KeyExchangeAlgorithm_m3_3263 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_KeyExchangeStrength()
extern "C" int32_t SslStream_get_KeyExchangeStrength_m3_3264 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_LocalCertificate()
extern "C" X509Certificate_t1_572 * SslStream_get_LocalCertificate_m3_3265 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_RemoteCertificate()
extern "C" X509Certificate_t1_572 * SslStream_get_RemoteCertificate_m3_3266 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.SslProtocols System.Net.Security.SslStream::get_SslProtocol()
extern "C" int32_t SslStream_get_SslProtocol_m3_3267 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * SslStream_OnCertificateSelection_m3_3268 (SslStream_t3_472 * __this, X509CertificateCollection_t3_1 * ___clientCerts, X509Certificate_t1_572 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t3_1 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m3_3269 (SslStream_t3_472 * __this, String_t* ___targetHost, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m3_3270 (SslStream_t3_472 * __this, String_t* ___targetHost, X509CertificateCollection_t3_1 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginRead_m3_3271 (SslStream_t3_472 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsServer_m3_3272 (SslStream_t3_472 * __this, X509Certificate_t1_572 * ___serverCertificate, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsServer_m3_3273 (SslStream_t3_472 * __this, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C" int32_t SslStream_GetMonoSslProtocol_m3_3274 (SslStream_t3_472 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginWrite_m3_3275 (SslStream_t3_472 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String)
extern "C" void SslStream_AuthenticateAsClient_m3_3276 (SslStream_t3_472 * __this, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsClient_m3_3277 (SslStream_t3_472 * __this, String_t* ___targetHost, X509CertificateCollection_t3_1 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslStream_AuthenticateAsServer_m3_3278 (SslStream_t3_472 * __this, X509Certificate_t1_572 * ___serverCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsServer_m3_3279 (SslStream_t3_472 * __this, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C" void SslStream_Dispose_m3_3280 (SslStream_t3_472 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsClient_m3_3281 (SslStream_t3_472 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsServer(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsServer_m3_3282 (SslStream_t3_472 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C" int32_t SslStream_EndRead_m3_3283 (SslStream_t3_472 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C" void SslStream_EndWrite_m3_3284 (SslStream_t3_472 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C" void SslStream_Flush_m3_3285 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStream_Read_m3_3286 (SslStream_t3_472 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStream_Seek_m3_3287 (SslStream_t3_472 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C" void SslStream_SetLength_m3_3288 (SslStream_t3_472 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStream_Write_m3_3289 (SslStream_t3_472 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[])
extern "C" void SslStream_Write_m3_3290 (SslStream_t3_472 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C" void SslStream_CheckConnectionAuthenticated_m3_3291 (SslStream_t3_472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
