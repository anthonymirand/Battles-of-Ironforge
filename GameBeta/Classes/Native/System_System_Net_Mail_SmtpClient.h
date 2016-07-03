#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t3_322;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_1;
// System.Net.Sockets.TcpClient
struct TcpClient_t3_320;
// System.IO.Stream
struct Stream_t1_226;
// System.IO.StreamWriter
struct StreamWriter_t1_262;
// System.IO.StreamReader
struct StreamReader_t1_261;
// System.Net.Mail.MailAddress
struct MailAddress_t3_309;
// System.Net.Mail.MailMessage
struct MailMessage_t3_311;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t3_78;
// System.Object
struct Object_t;
// System.Threading.Mutex
struct Mutex_t1_443;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;
// System.Net.Mail.SendCompletedEventHandler
struct SendCompletedEventHandler_t3_321;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "mscorlib_System_Object.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod.h"
#include "System_System_Net_Mail_SmtpClient_AuthMechs.h"

// System.Net.Mail.SmtpClient
struct  SmtpClient_t3_319  : public Object_t
{
	// System.String System.Net.Mail.SmtpClient::host
	String_t* ___host_0;
	// System.Int32 System.Net.Mail.SmtpClient::port
	int32_t ___port_1;
	// System.Int32 System.Net.Mail.SmtpClient::timeout
	int32_t ___timeout_2;
	// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::credentials
	Object_t * ___credentials_3;
	// System.String System.Net.Mail.SmtpClient::pickupDirectoryLocation
	String_t* ___pickupDirectoryLocation_4;
	// System.Net.Mail.SmtpDeliveryMethod System.Net.Mail.SmtpClient::deliveryMethod
	int32_t ___deliveryMethod_5;
	// System.Boolean System.Net.Mail.SmtpClient::enableSsl
	bool ___enableSsl_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::clientCertificates
	X509CertificateCollection_t3_1 * ___clientCertificates_7;
	// System.Net.Sockets.TcpClient System.Net.Mail.SmtpClient::client
	TcpClient_t3_320 * ___client_8;
	// System.IO.Stream System.Net.Mail.SmtpClient::stream
	Stream_t1_226 * ___stream_9;
	// System.IO.StreamWriter System.Net.Mail.SmtpClient::writer
	StreamWriter_t1_262 * ___writer_10;
	// System.IO.StreamReader System.Net.Mail.SmtpClient::reader
	StreamReader_t1_261 * ___reader_11;
	// System.Int32 System.Net.Mail.SmtpClient::boundaryIndex
	int32_t ___boundaryIndex_12;
	// System.Net.Mail.MailAddress System.Net.Mail.SmtpClient::defaultFrom
	MailAddress_t3_309 * ___defaultFrom_13;
	// System.Net.Mail.MailMessage System.Net.Mail.SmtpClient::messageInProcess
	MailMessage_t3_311 * ___messageInProcess_14;
	// System.ComponentModel.BackgroundWorker System.Net.Mail.SmtpClient::worker
	BackgroundWorker_t3_78 * ___worker_15;
	// System.Object System.Net.Mail.SmtpClient::user_async_state
	Object_t * ___user_async_state_16;
	// System.Net.Mail.SmtpClient/AuthMechs System.Net.Mail.SmtpClient::authMechs
	int32_t ___authMechs_17;
	// System.Threading.Mutex System.Net.Mail.SmtpClient::mutex
	Mutex_t1_443 * ___mutex_18;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::callback
	RemoteCertificateValidationCallback_t3_5 * ___callback_19;
	// System.Net.Mail.SendCompletedEventHandler System.Net.Mail.SmtpClient::SendCompleted
	SendCompletedEventHandler_t3_321 * ___SendCompleted_20;
	// System.String System.Net.Mail.SmtpClient::<TargetName>k__BackingField
	String_t* ___U3CTargetNameU3Ek__BackingField_21;
};
struct SmtpClient_t3_319_StaticFields{
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::<>f__am$cache16
	RemoteCertificateValidationCallback_t3_5 * ___U3CU3Ef__amU24cache16_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.Mail.SmtpClient::<>f__switch$map2
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map2_23;
};
