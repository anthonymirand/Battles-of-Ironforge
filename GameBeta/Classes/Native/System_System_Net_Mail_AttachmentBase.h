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
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.IO.Stream
struct Stream_t1_226;

#include "mscorlib_System_Object.h"
#include "System_System_Net_Mime_TransferEncoding.h"

// System.Net.Mail.AttachmentBase
struct  AttachmentBase_t3_299  : public Object_t
{
	// System.String System.Net.Mail.AttachmentBase::id
	String_t* ___id_0;
	// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::contentType
	ContentType_t3_305 * ___contentType_1;
	// System.IO.Stream System.Net.Mail.AttachmentBase::contentStream
	Stream_t1_226 * ___contentStream_2;
	// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::transferEncoding
	int32_t ___transferEncoding_3;
};
