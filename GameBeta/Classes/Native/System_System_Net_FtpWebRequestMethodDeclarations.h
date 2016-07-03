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

// System.Net.FtpWebRequest
struct FtpWebRequest_t3_569;
// System.Uri
struct Uri_t3_3;
// System.Exception
struct Exception_t1_33;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_1;
// System.String
struct String_t;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t3_296;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3_559;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.FtpStatus
struct FtpStatus_t3_571;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3_7;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest_RequestState.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m3_4188 (FtpWebRequest_t3_569 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m3_4189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C" Exception_t1_33 * FtpWebRequest_GetMustImplement_m3_4190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.FtpWebRequest::get_ClientCertificates()
extern "C" X509CertificateCollection_t3_1 * FtpWebRequest_get_ClientCertificates_m3_4191 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ClientCertificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void FtpWebRequest_set_ClientCertificates_m3_4192 (FtpWebRequest_t3_569 * __this, X509CertificateCollection_t3_1 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_ConnectionGroupName()
extern "C" String_t* FtpWebRequest_get_ConnectionGroupName_m3_4193 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ConnectionGroupName(System.String)
extern "C" void FtpWebRequest_set_ConnectionGroupName_m3_4194 (FtpWebRequest_t3_569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_ContentType()
extern "C" String_t* FtpWebRequest_get_ContentType_m3_4195 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ContentType(System.String)
extern "C" void FtpWebRequest_set_ContentType_m3_4196 (FtpWebRequest_t3_569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C" int64_t FtpWebRequest_get_ContentLength_m3_4197 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ContentLength(System.Int64)
extern "C" void FtpWebRequest_set_ContentLength_m3_4198 (FtpWebRequest_t3_569 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentOffset()
extern "C" int64_t FtpWebRequest_get_ContentOffset_m3_4199 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ContentOffset(System.Int64)
extern "C" void FtpWebRequest_set_ContentOffset_m3_4200 (FtpWebRequest_t3_569 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C" Object_t * FtpWebRequest_get_Credentials_m3_4201 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FtpWebRequest_set_Credentials_m3_4202 (FtpWebRequest_t3_569 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.FtpWebRequest::get_DefaultCachePolicy()
extern "C" RequestCachePolicy_t3_296 * FtpWebRequest_get_DefaultCachePolicy_m3_4203 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_DefaultCachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void FtpWebRequest_set_DefaultCachePolicy_m3_4204 (Object_t * __this /* static, unused */, RequestCachePolicy_t3_296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C" bool FtpWebRequest_get_EnableSsl_m3_4205 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_EnableSsl(System.Boolean)
extern "C" void FtpWebRequest_set_EnableSsl_m3_4206 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t3_522 * FtpWebRequest_get_Headers_m3_4207 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C" void FtpWebRequest_set_Headers_m3_4208 (FtpWebRequest_t3_569 * __this, WebHeaderCollection_t3_522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_KeepAlive()
extern "C" bool FtpWebRequest_get_KeepAlive_m3_4209 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_KeepAlive(System.Boolean)
extern "C" void FtpWebRequest_set_KeepAlive_m3_4210 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C" String_t* FtpWebRequest_get_Method_m3_4211 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Method(System.String)
extern "C" void FtpWebRequest_set_Method_m3_4212 (FtpWebRequest_t3_569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_PreAuthenticate()
extern "C" bool FtpWebRequest_get_PreAuthenticate_m3_4213 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_PreAuthenticate(System.Boolean)
extern "C" void FtpWebRequest_set_PreAuthenticate_m3_4214 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C" Object_t * FtpWebRequest_get_Proxy_m3_4215 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C" void FtpWebRequest_set_Proxy_m3_4216 (FtpWebRequest_t3_569 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t FtpWebRequest_get_ReadWriteTimeout_m3_4217 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_ReadWriteTimeout(System.Int32)
extern "C" void FtpWebRequest_set_ReadWriteTimeout_m3_4218 (FtpWebRequest_t3_569 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_RenameTo()
extern "C" String_t* FtpWebRequest_get_RenameTo_m3_4219 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_RenameTo(System.String)
extern "C" void FtpWebRequest_set_RenameTo_m3_4220 (FtpWebRequest_t3_569 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C" Uri_t3_3 * FtpWebRequest_get_RequestUri_m3_4221 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t3_4 * FtpWebRequest_get_ServicePoint_m3_4222 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_UsePassive()
extern "C" bool FtpWebRequest_get_UsePassive_m3_4223 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_UsePassive(System.Boolean)
extern "C" void FtpWebRequest_set_UsePassive_m3_4224 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_UseDefaultCredentials()
extern "C" bool FtpWebRequest_get_UseDefaultCredentials_m3_4225 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_UseDefaultCredentials(System.Boolean)
extern "C" void FtpWebRequest_set_UseDefaultCredentials_m3_4226 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_UseBinary()
extern "C" bool FtpWebRequest_get_UseBinary_m3_4227 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_UseBinary(System.Boolean)
extern "C" void FtpWebRequest_set_UseBinary_m3_4228 (FtpWebRequest_t3_569 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_Timeout()
extern "C" int32_t FtpWebRequest_get_Timeout_m3_4229 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Timeout(System.Int32)
extern "C" void FtpWebRequest_set_Timeout_m3_4230 (FtpWebRequest_t3_569 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C" String_t* FtpWebRequest_get_DataType_m3_4231 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C" int32_t FtpWebRequest_get_State_m3_4232 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C" void FtpWebRequest_set_State_m3_4233 (FtpWebRequest_t3_569 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C" void FtpWebRequest_Abort_m3_4234 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FtpWebRequest_BeginGetResponse_m3_4235 (FtpWebRequest_t3_569 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3_559 * FtpWebRequest_EndGetResponse_m3_4236 (FtpWebRequest_t3_569 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C" WebResponse_t3_559 * FtpWebRequest_GetResponse_m3_4237 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
extern "C" Object_t * FtpWebRequest_BeginGetRequestStream_m3_4238 (FtpWebRequest_t3_569 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebRequest::EndGetRequestStream(System.IAsyncResult)
extern "C" Stream_t1_226 * FtpWebRequest_EndGetRequestStream_m3_4239 (FtpWebRequest_t3_569 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebRequest::GetRequestStream()
extern "C" Stream_t1_226 * FtpWebRequest_GetRequestStream_m3_4240 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C" ServicePoint_t3_4 * FtpWebRequest_GetServicePoint_m3_4241 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C" void FtpWebRequest_ResolveHost_m3_4242 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C" void FtpWebRequest_ProcessRequest_m3_4243 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C" void FtpWebRequest_SetType_m3_4244 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C" String_t* FtpWebRequest_GetRemoteFolderPath_m3_4245 (FtpWebRequest_t3_569 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C" void FtpWebRequest_CWDAndSetFileName_m3_4246 (FtpWebRequest_t3_569 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C" void FtpWebRequest_ProcessMethod_m3_4247 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C" void FtpWebRequest_CloseControlConnection_m3_4248 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C" void FtpWebRequest_CloseDataConnection_m3_4249 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C" void FtpWebRequest_CloseConnection_m3_4250 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C" void FtpWebRequest_ProcessSimpleMethod_m3_4251 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C" void FtpWebRequest_UploadData_m3_4252 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C" void FtpWebRequest_DownloadData_m3_4253 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C" void FtpWebRequest_CheckRequestStarted_m3_4254 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C" void FtpWebRequest_OpenControlConnection_m3_4255 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C" String_t* FtpWebRequest_GetInitialPath_m3_4256 (Object_t * __this /* static, unused */, FtpStatus_t3_571 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C" Socket_t3_483 * FtpWebRequest_SetupPassiveConnection_m3_4257 (FtpWebRequest_t3_569 * __this, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C" Exception_t1_33 * FtpWebRequest_CreateExceptionFromResponse_m3_4258 (FtpWebRequest_t3_569 * __this, FtpStatus_t3_571 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C" void FtpWebRequest_SetTransferCompleted_m3_4259 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C" void FtpWebRequest_OperationCompleted_m3_4260 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C" void FtpWebRequest_SetCompleteWithError_m3_4261 (FtpWebRequest_t3_569 * __this, Exception_t1_33 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C" Socket_t3_483 * FtpWebRequest_InitDataConnection_m3_4262 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C" void FtpWebRequest_OpenDataConnection_m3_4263 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C" void FtpWebRequest_Authenticate_m3_4264 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C" FtpStatus_t3_571 * FtpWebRequest_SendCommand_m3_4265 (FtpWebRequest_t3_569 * __this, String_t* ___command, StringU5BU5D_t1_206* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C" FtpStatus_t3_571 * FtpWebRequest_SendCommand_m3_4266 (FtpWebRequest_t3_569 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t1_206* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C" FtpStatus_t3_571 * FtpWebRequest_ServiceNotAvailable_m3_4267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C" FtpStatus_t3_571 * FtpWebRequest_GetResponseStatus_m3_4268 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C" void FtpWebRequest_InitiateSecureConnection_m3_4269 (FtpWebRequest_t3_569 * __this, Stream_t1_226 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C" bool FtpWebRequest_ChangeToSSLSocket_m3_4270 (FtpWebRequest_t3_569 * __this, Stream_t1_226 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C" bool FtpWebRequest_InFinalState_m3_4271 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C" bool FtpWebRequest_InProgress_m3_4272 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C" void FtpWebRequest_CheckIfAborted_m3_4273 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C" void FtpWebRequest_CheckFinalState_m3_4274 (FtpWebRequest_t3_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__B_m3_4275 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t1_572 * ___certificate, X509Chain_t3_7 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
