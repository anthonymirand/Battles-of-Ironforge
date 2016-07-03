#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t3_3;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.FileWebResponse
struct FileWebResponse_t3_560;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1_707;

#include "System_System_Net_WebRequest.h"
#include "mscorlib_System_IO_FileAccess.h"

// System.Net.FileWebRequest
struct  FileWebRequest_t3_556  : public WebRequest_t3_8
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t3_3 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t3_522 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.IO.Stream System.Net.FileWebRequest::requestStream
	Stream_t1_226 * ___requestStream_16;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t3_560 * ___webResponse_17;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t1_707 * ___requestEndEvent_18;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_19;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_20;
};
