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

#include "mscorlib_System_ValueType.h"
#include "System_System_Net_Mail_SmtpStatusCode.h"

// System.Net.Mail.SmtpClient/SmtpResponse
struct  SmtpResponse_t3_317 
{
	// System.Net.Mail.SmtpStatusCode System.Net.Mail.SmtpClient/SmtpResponse::StatusCode
	int32_t ___StatusCode_0;
	// System.String System.Net.Mail.SmtpClient/SmtpResponse::Description
	String_t* ___Description_1;
};
// Native definition for marshalling of: System.Net.Mail.SmtpClient/SmtpResponse
struct SmtpResponse_t3_317_marshaled
{
	int32_t ___StatusCode_0;
	char* ___Description_1;
};
