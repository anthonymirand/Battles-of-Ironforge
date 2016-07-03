#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t3_301;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t3_306;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3_310;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t3_309;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3_43;
// System.Text.Encoding
struct Encoding_t1_227;

#include "mscorlib_System_Object.h"
#include "System_System_Net_Mail_MailPriority.h"
#include "System_System_Net_Mail_DeliveryNotificationOptions.h"

// System.Net.Mail.MailMessage
struct  MailMessage_t3_311  : public Object_t
{
	// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::alternateViews
	AlternateViewCollection_t3_301 * ___alternateViews_0;
	// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::attachments
	AttachmentCollection_t3_306 * ___attachments_1;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::bcc
	MailAddressCollection_t3_310 * ___bcc_2;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::replyTo
	MailAddressCollection_t3_310 * ___replyTo_3;
	// System.String System.Net.Mail.MailMessage::body
	String_t* ___body_4;
	// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::priority
	int32_t ___priority_5;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::sender
	MailAddress_t3_309 * ___sender_6;
	// System.Net.Mail.DeliveryNotificationOptions System.Net.Mail.MailMessage::deliveryNotificationOptions
	int32_t ___deliveryNotificationOptions_7;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::cc
	MailAddressCollection_t3_310 * ___cc_8;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::from
	MailAddress_t3_309 * ___from_9;
	// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::headers
	NameValueCollection_t3_43 * ___headers_10;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::to
	MailAddressCollection_t3_310 * ___to_11;
	// System.String System.Net.Mail.MailMessage::subject
	String_t* ___subject_12;
	// System.Text.Encoding System.Net.Mail.MailMessage::subjectEncoding
	Encoding_t1_227 * ___subjectEncoding_13;
	// System.Text.Encoding System.Net.Mail.MailMessage::bodyEncoding
	Encoding_t1_227 * ___bodyEncoding_14;
	// System.Text.Encoding System.Net.Mail.MailMessage::headersEncoding
	Encoding_t1_227 * ___headersEncoding_15;
	// System.Boolean System.Net.Mail.MailMessage::isHtml
	bool ___isHtml_16;
};
