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

// System.Net.Mail.MailMessage
struct MailMessage_t3_311;
// System.Net.Mail.MailAddress
struct MailAddress_t3_309;
// System.String
struct String_t;
// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t3_301;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t3_306;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t3_310;
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3_43;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"
#include "System_System_Net_Mail_DeliveryNotificationOptions.h"
#include "System_System_Net_Mail_MailPriority.h"

// System.Void System.Net.Mail.MailMessage::.ctor()
extern "C" void MailMessage__ctor_m3_2327 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.Net.Mail.MailAddress,System.Net.Mail.MailAddress)
extern "C" void MailMessage__ctor_m3_2328 (MailMessage_t3_311 * __this, MailAddress_t3_309 * ___from, MailAddress_t3_309 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.String,System.String)
extern "C" void MailMessage__ctor_m3_2329 (MailMessage_t3_311 * __this, String_t* ___from, String_t* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.String,System.String,System.String,System.String)
extern "C" void MailMessage__ctor_m3_2330 (MailMessage_t3_311 * __this, String_t* ___from, String_t* ___to, String_t* ___subject, String_t* ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::get_AlternateViews()
extern "C" AlternateViewCollection_t3_301 * MailMessage_get_AlternateViews_m3_2331 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::get_Attachments()
extern "C" AttachmentCollection_t3_306 * MailMessage_get_Attachments_m3_2332 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_Bcc()
extern "C" MailAddressCollection_t3_310 * MailMessage_get_Bcc_m3_2333 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Body()
extern "C" String_t* MailMessage_get_Body_m3_2334 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Body(System.String)
extern "C" void MailMessage_set_Body_m3_2335 (MailMessage_t3_311 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.MailMessage::get_BodyContentType()
extern "C" ContentType_t3_305 * MailMessage_get_BodyContentType_m3_2336 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.MailMessage::get_ContentTransferEncoding()
extern "C" int32_t MailMessage_get_ContentTransferEncoding_m3_2337 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_BodyEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_BodyEncoding_m3_2338 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_BodyEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_BodyEncoding_m3_2339 (MailMessage_t3_311 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_CC()
extern "C" MailAddressCollection_t3_310 * MailMessage_get_CC_m3_2340 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.DeliveryNotificationOptions System.Net.Mail.MailMessage::get_DeliveryNotificationOptions()
extern "C" int32_t MailMessage_get_DeliveryNotificationOptions_m3_2341 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_DeliveryNotificationOptions(System.Net.Mail.DeliveryNotificationOptions)
extern "C" void MailMessage_set_DeliveryNotificationOptions_m3_2342 (MailMessage_t3_311 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_From()
extern "C" MailAddress_t3_309 * MailMessage_get_From_m3_2343 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_From(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_From_m3_2344 (MailMessage_t3_311 * __this, MailAddress_t3_309 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::get_Headers()
extern "C" NameValueCollection_t3_43 * MailMessage_get_Headers_m3_2345 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailMessage::get_IsBodyHtml()
extern "C" bool MailMessage_get_IsBodyHtml_m3_2346 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_IsBodyHtml(System.Boolean)
extern "C" void MailMessage_set_IsBodyHtml_m3_2347 (MailMessage_t3_311 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::get_Priority()
extern "C" int32_t MailMessage_get_Priority_m3_2348 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Priority(System.Net.Mail.MailPriority)
extern "C" void MailMessage_set_Priority_m3_2349 (MailMessage_t3_311 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_HeadersEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_HeadersEncoding_m3_2350 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_HeadersEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_HeadersEncoding_m3_2351 (MailMessage_t3_311 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_ReplyToList()
extern "C" MailAddressCollection_t3_310 * MailMessage_get_ReplyToList_m3_2352 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_ReplyTo()
extern "C" MailAddress_t3_309 * MailMessage_get_ReplyTo_m3_2353 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_ReplyTo(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_ReplyTo_m3_2354 (MailMessage_t3_311 * __this, MailAddress_t3_309 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_Sender()
extern "C" MailAddress_t3_309 * MailMessage_get_Sender_m3_2355 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Sender(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_Sender_m3_2356 (MailMessage_t3_311 * __this, MailAddress_t3_309 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Subject()
extern "C" String_t* MailMessage_get_Subject_m3_2357 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Subject(System.String)
extern "C" void MailMessage_set_Subject_m3_2358 (MailMessage_t3_311 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_SubjectEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_SubjectEncoding_m3_2359 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_SubjectEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_SubjectEncoding_m3_2360 (MailMessage_t3_311 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_To()
extern "C" MailAddressCollection_t3_310 * MailMessage_get_To_m3_2361 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose()
extern "C" void MailMessage_Dispose_m3_2362 (MailMessage_t3_311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose(System.Boolean)
extern "C" void MailMessage_Dispose_m3_2363 (MailMessage_t3_311 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::GuessEncoding(System.String)
extern "C" Encoding_t1_227 * MailMessage_GuessEncoding_m3_2364 (MailMessage_t3_311 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
