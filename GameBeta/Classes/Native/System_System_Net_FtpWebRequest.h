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
// System.Uri
struct Uri_t3_3;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.IO.Stream
struct Stream_t1_226;
// System.IO.StreamReader
struct StreamReader_t1_261;
// System.Net.NetworkCredential
struct NetworkCredential_t3_537;
// System.Net.IPHostEntry
struct IPHostEntry_t3_544;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.Object
struct Object_t;
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3_564;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3_565;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "System_System_Net_WebRequest.h"
#include "System_System_Net_FtpWebRequest_RequestState.h"

// System.Net.FtpWebRequest
struct  FtpWebRequest_t3_569  : public WebRequest_t3_8
{
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t3_3 * ___requestUri_19;
	// System.String System.Net.FtpWebRequest::file_name
	String_t* ___file_name_20;
	// System.Net.ServicePoint System.Net.FtpWebRequest::servicePoint
	ServicePoint_t3_4 * ___servicePoint_21;
	// System.IO.Stream System.Net.FtpWebRequest::origDataStream
	Stream_t1_226 * ___origDataStream_22;
	// System.IO.Stream System.Net.FtpWebRequest::dataStream
	Stream_t1_226 * ___dataStream_23;
	// System.IO.Stream System.Net.FtpWebRequest::controlStream
	Stream_t1_226 * ___controlStream_24;
	// System.IO.StreamReader System.Net.FtpWebRequest::controlReader
	StreamReader_t1_261 * ___controlReader_25;
	// System.Net.NetworkCredential System.Net.FtpWebRequest::credentials
	NetworkCredential_t3_537 * ___credentials_26;
	// System.Net.IPHostEntry System.Net.FtpWebRequest::hostEntry
	IPHostEntry_t3_544 * ___hostEntry_27;
	// System.Net.IPEndPoint System.Net.FtpWebRequest::localEndPoint
	IPEndPoint_t3_442 * ___localEndPoint_28;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Object_t * ___proxy_29;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_30;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_31;
	// System.Int64 System.Net.FtpWebRequest::offset
	int64_t ___offset_32;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_33;
	// System.Boolean System.Net.FtpWebRequest::enableSsl
	bool ___enableSsl_34;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_35;
	// System.Boolean System.Net.FtpWebRequest::keepAlive
	bool ___keepAlive_36;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_37;
	// System.String System.Net.FtpWebRequest::renameTo
	String_t* ___renameTo_38;
	// System.Object System.Net.FtpWebRequest::locker
	Object_t * ___locker_39;
	// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::requestState
	int32_t ___requestState_40;
	// System.Net.FtpAsyncResult System.Net.FtpWebRequest::asyncResult
	FtpAsyncResult_t3_564 * ___asyncResult_41;
	// System.Net.FtpWebResponse System.Net.FtpWebRequest::ftpResponse
	FtpWebResponse_t3_565 * ___ftpResponse_42;
	// System.IO.Stream System.Net.FtpWebRequest::requestStream
	Stream_t1_226 * ___requestStream_43;
	// System.String System.Net.FtpWebRequest::initial_path
	String_t* ___initial_path_44;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t3_5 * ___callback_46;
};
struct FtpWebRequest_t3_569_StaticFields{
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t1_206* ___supportedCommands_45;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t3_5 * ___U3CU3Ef__amU24cache1C_47;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map5
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map5_48;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$map6
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map6_49;
};
