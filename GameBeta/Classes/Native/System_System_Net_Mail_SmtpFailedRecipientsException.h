#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.SmtpFailedRecipientException[]
struct SmtpFailedRecipientExceptionU5BU5D_t3_328;

#include "System_System_Net_Mail_SmtpFailedRecipientException.h"

// System.Net.Mail.SmtpFailedRecipientsException
struct  SmtpFailedRecipientsException_t3_327  : public SmtpFailedRecipientException_t3_326
{
	// System.Net.Mail.SmtpFailedRecipientException[] System.Net.Mail.SmtpFailedRecipientsException::innerExceptions
	SmtpFailedRecipientExceptionU5BU5D_t3_328* ___innerExceptions_13;
};
