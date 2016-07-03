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

// System.Net.Mail.SmtpClient
struct SmtpClient_t3_319;
// System.String
struct String_t;
// System.Net.Mail.SendCompletedEventHandler
struct SendCompletedEventHandler_t3_321;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_1;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t3_322;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.Net.Mail.MailAddress
struct MailAddress_t3_309;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3_310;
// System.Net.Mail.MailMessage
struct MailMessage_t3_311;
// System.Net.Mail.AlternateView
struct AlternateView_t3_298;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t3_73;
// System.Object
struct Object_t;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3_300;
// System.Net.Mail.Attachment
struct Attachment_t3_302;
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.Net.Mail.LinkedResource
struct LinkedResource_t3_308;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t3_303;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3_7;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse.h"
#include "System_System_Net_Mime_TransferEncoding.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Mail.SmtpClient::.ctor()
extern "C" void SmtpClient__ctor_m3_2370 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::.ctor(System.String)
extern "C" void SmtpClient__ctor_m3_2371 (SmtpClient_t3_319 * __this, String_t* ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::.ctor(System.String,System.Int32)
extern "C" void SmtpClient__ctor_m3_2372 (SmtpClient_t3_319 * __this, String_t* ___host, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::add_SendCompleted(System.Net.Mail.SendCompletedEventHandler)
extern "C" void SmtpClient_add_SendCompleted_m3_2373 (SmtpClient_t3_319 * __this, SendCompletedEventHandler_t3_321 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::remove_SendCompleted(System.Net.Mail.SendCompletedEventHandler)
extern "C" void SmtpClient_remove_SendCompleted_m3_2374 (SmtpClient_t3_319 * __this, SendCompletedEventHandler_t3_321 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::get_ClientCertificates()
extern "C" X509CertificateCollection_t3_1 * SmtpClient_get_ClientCertificates_m3_2375 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::get_TargetName()
extern "C" String_t* SmtpClient_get_TargetName_m3_2376 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_TargetName(System.String)
extern "C" void SmtpClient_set_TargetName_m3_2377 (SmtpClient_t3_319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::get_Credentials()
extern "C" Object_t * SmtpClient_get_Credentials_m3_2378 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Credentials(System.Net.ICredentialsByHost)
extern "C" void SmtpClient_set_Credentials_m3_2379 (SmtpClient_t3_319 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpDeliveryMethod System.Net.Mail.SmtpClient::get_DeliveryMethod()
extern "C" int32_t SmtpClient_get_DeliveryMethod_m3_2380 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_DeliveryMethod(System.Net.Mail.SmtpDeliveryMethod)
extern "C" void SmtpClient_set_DeliveryMethod_m3_2381 (SmtpClient_t3_319 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::get_EnableSsl()
extern "C" bool SmtpClient_get_EnableSsl_m3_2382 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_EnableSsl(System.Boolean)
extern "C" void SmtpClient_set_EnableSsl_m3_2383 (SmtpClient_t3_319 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::get_Host()
extern "C" String_t* SmtpClient_get_Host_m3_2384 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Host(System.String)
extern "C" void SmtpClient_set_Host_m3_2385 (SmtpClient_t3_319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::get_PickupDirectoryLocation()
extern "C" String_t* SmtpClient_get_PickupDirectoryLocation_m3_2386 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_PickupDirectoryLocation(System.String)
extern "C" void SmtpClient_set_PickupDirectoryLocation_m3_2387 (SmtpClient_t3_319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.SmtpClient::get_Port()
extern "C" int32_t SmtpClient_get_Port_m3_2388 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Port(System.Int32)
extern "C" void SmtpClient_set_Port_m3_2389 (SmtpClient_t3_319 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.Mail.SmtpClient::get_ServicePoint()
extern "C" ServicePoint_t3_4 * SmtpClient_get_ServicePoint_m3_2390 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.SmtpClient::get_Timeout()
extern "C" int32_t SmtpClient_get_Timeout_m3_2391 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Timeout(System.Int32)
extern "C" void SmtpClient_set_Timeout_m3_2392 (SmtpClient_t3_319 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::get_UseDefaultCredentials()
extern "C" bool SmtpClient_get_UseDefaultCredentials_m3_2393 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_UseDefaultCredentials(System.Boolean)
extern "C" void SmtpClient_set_UseDefaultCredentials_m3_2394 (SmtpClient_t3_319 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckState()
extern "C" void SmtpClient_CheckState_m3_2395 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddress(System.Net.Mail.MailAddress)
extern "C" String_t* SmtpClient_EncodeAddress_m3_2396 (Object_t * __this /* static, unused */, MailAddress_t3_309 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeAddresses(System.Net.Mail.MailAddressCollection)
extern "C" String_t* SmtpClient_EncodeAddresses_m3_2397 (Object_t * __this /* static, unused */, MailAddressCollection_t3_310 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeSubjectRFC2047(System.Net.Mail.MailMessage)
extern "C" String_t* SmtpClient_EncodeSubjectRFC2047_m3_2398 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.MailMessage)
extern "C" String_t* SmtpClient_EncodeBody_m3_2399 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::EncodeBody(System.Net.Mail.AlternateView)
extern "C" String_t* SmtpClient_EncodeBody_m3_2400 (SmtpClient_t3_319 * __this, AlternateView_t3_298 * ___av, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::EndSection(System.String)
extern "C" void SmtpClient_EndSection_m3_2401 (SmtpClient_t3_319 * __this, String_t* ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary()
extern "C" String_t* SmtpClient_GenerateBoundary_m3_2402 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GenerateBoundary(System.Int32)
extern "C" String_t* SmtpClient_GenerateBoundary_m3_2403 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::IsError(System.Net.Mail.SmtpClient/SmtpResponse)
extern "C" bool SmtpClient_IsError_m3_2404 (SmtpClient_t3_319 * __this, SmtpResponse_t3_317  ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::OnSendCompleted(System.ComponentModel.AsyncCompletedEventArgs)
extern "C" void SmtpClient_OnSendCompleted_m3_2405 (SmtpClient_t3_319 * __this, AsyncCompletedEventArgs_t3_73 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::CheckCancellation()
extern "C" void SmtpClient_CheckCancellation_m3_2406 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::Read()
extern "C" SmtpResponse_t3_317  SmtpClient_Read_m3_2407 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ResetExtensions()
extern "C" void SmtpClient_ResetExtensions_m3_2408 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::ParseExtensions(System.String)
extern "C" void SmtpClient_ParseExtensions_m3_2409 (SmtpClient_t3_319 * __this, String_t* ___extens, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Send(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_Send_m3_2410 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendInternal(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_SendInternal_m3_2411 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendToFile(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_SendToFile_m3_2412 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendCore(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_SendCore_m3_2413 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Send(System.String,System.String,System.String,System.String)
extern "C" void SmtpClient_Send_m3_2414 (SmtpClient_t3_319 * __this, String_t* ___from, String_t* ___to, String_t* ___subject, String_t* ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendDot()
extern "C" void SmtpClient_SendDot_m3_2415 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendData(System.String)
extern "C" void SmtpClient_SendData_m3_2416 (SmtpClient_t3_319 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAsync(System.Net.Mail.MailMessage,System.Object)
extern "C" void SmtpClient_SendAsync_m3_2417 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAsync(System.String,System.String,System.String,System.String,System.Object)
extern "C" void SmtpClient_SendAsync_m3_2418 (SmtpClient_t3_319 * __this, String_t* ___from, String_t* ___to, String_t* ___subject, String_t* ___body, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAsyncCancel()
extern "C" void SmtpClient_SendAsyncCancel_m3_2419 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::AddPriorityHeader(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_AddPriorityHeader_m3_2420 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendSimpleBody(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_SendSimpleBody_m3_2421 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodylessSingleAlternate(System.Net.Mail.AlternateView)
extern "C" void SmtpClient_SendBodylessSingleAlternate_m3_2422 (SmtpClient_t3_319 * __this, AlternateView_t3_298 * ___av, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithoutAttachments(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C" void SmtpClient_SendWithoutAttachments_m3_2423 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, String_t* ___boundary, bool ___attachmentExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendWithAttachments(System.Net.Mail.MailMessage)
extern "C" void SmtpClient_SendWithAttachments_m3_2424 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendBodyWithAlternateViews(System.Net.Mail.MailMessage,System.String,System.Boolean)
extern "C" void SmtpClient_SendBodyWithAlternateViews_m3_2425 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, String_t* ___boundary, bool ___attachmentExists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendLinkedResources(System.Net.Mail.MailMessage,System.Net.Mail.LinkedResourceCollection,System.String)
extern "C" void SmtpClient_SendLinkedResources_m3_2426 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, LinkedResourceCollection_t3_300 * ___resources, String_t* ___boundary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendAttachments(System.Net.Mail.MailMessage,System.Net.Mail.Attachment,System.String)
extern "C" void SmtpClient_SendAttachments_m3_2427 (SmtpClient_t3_319 * __this, MailMessage_t3_311 * ___message, Attachment_t3_302 * ___body, String_t* ___boundary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient::SendCommand(System.String)
extern "C" SmtpResponse_t3_317  SmtpClient_SendCommand_m3_2428 (SmtpClient_t3_319 * __this, String_t* ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::SendHeader(System.String,System.String)
extern "C" void SmtpClient_SendHeader_m3_2429 (SmtpClient_t3_319 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType)
extern "C" void SmtpClient_StartSection_m3_2430 (SmtpClient_t3_319 * __this, String_t* ___section, ContentType_t3_305 * ___sectionContentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding)
extern "C" void SmtpClient_StartSection_m3_2431 (SmtpClient_t3_319 * __this, String_t* ___section, ContentType_t3_305 * ___sectionContentType, int32_t ___transferEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mail.LinkedResource)
extern "C" void SmtpClient_StartSection_m3_2432 (SmtpClient_t3_319 * __this, String_t* ___section, ContentType_t3_305 * ___sectionContentType, int32_t ___transferEncoding, LinkedResource_t3_308 * ___lr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::StartSection(System.String,System.Net.Mime.ContentType,System.Net.Mime.TransferEncoding,System.Net.Mime.ContentDisposition)
extern "C" void SmtpClient_StartSection_m3_2433 (SmtpClient_t3_319 * __this, String_t* ___section, ContentType_t3_305 * ___sectionContentType, int32_t ___transferEncoding, ContentDisposition_t3_303 * ___contentDisposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.String,System.Text.Encoding)
extern "C" String_t* SmtpClient_ToQuotedPrintable_m3_2434 (SmtpClient_t3_319 * __this, String_t* ___input, Encoding_t1_227 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::ToQuotedPrintable(System.Byte[])
extern "C" String_t* SmtpClient_ToQuotedPrintable_m3_2435 (SmtpClient_t3_319 * __this, ByteU5BU5D_t1_72* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpClient::GetTransferEncodingName(System.Net.Mime.TransferEncoding)
extern "C" String_t* SmtpClient_GetTransferEncodingName_m3_2436 (Object_t * __this /* static, unused */, int32_t ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::InitiateSecureConnection()
extern "C" void SmtpClient_InitiateSecureConnection_m3_2437 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate()
extern "C" void SmtpClient_Authenticate_m3_2438 (SmtpClient_t3_319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Authenticate(System.String,System.String)
extern "C" void SmtpClient_Authenticate_m3_2439 (SmtpClient_t3_319 * __this, String_t* ___Username, String_t* ___Password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.SmtpClient::<callback>m__2(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool SmtpClient_U3CcallbackU3Em__2_m3_2440 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t1_572 * ___certificate, X509Chain_t3_7 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
