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

// System.Net.Mail.AttachmentBase
struct AttachmentBase_t3_299;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"

// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream)
extern "C" void AttachmentBase__ctor_m3_2271 (AttachmentBase_t3_299 * __this, Stream_t1_226 * ___contentStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void AttachmentBase__ctor_m3_2272 (AttachmentBase_t3_299 * __this, Stream_t1_226 * ___contentStream, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.String)
extern "C" void AttachmentBase__ctor_m3_2273 (AttachmentBase_t3_299 * __this, Stream_t1_226 * ___contentStream, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String)
extern "C" void AttachmentBase__ctor_m3_2274 (AttachmentBase_t3_299 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void AttachmentBase__ctor_m3_2275 (AttachmentBase_t3_299 * __this, String_t* ___fileName, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String,System.String)
extern "C" void AttachmentBase__ctor_m3_2276 (AttachmentBase_t3_299 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.AttachmentBase::get_ContentId()
extern "C" String_t* AttachmentBase_get_ContentId_m3_2277 (AttachmentBase_t3_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_ContentId(System.String)
extern "C" void AttachmentBase_set_ContentId_m3_2278 (AttachmentBase_t3_299 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Mail.AttachmentBase::get_ContentStream()
extern "C" Stream_t1_226 * AttachmentBase_get_ContentStream_m3_2279 (AttachmentBase_t3_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::get_ContentType()
extern "C" ContentType_t3_305 * AttachmentBase_get_ContentType_m3_2280 (AttachmentBase_t3_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_ContentType(System.Net.Mime.ContentType)
extern "C" void AttachmentBase_set_ContentType_m3_2281 (AttachmentBase_t3_299 * __this, ContentType_t3_305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::get_TransferEncoding()
extern "C" int32_t AttachmentBase_get_TransferEncoding_m3_2282 (AttachmentBase_t3_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_TransferEncoding(System.Net.Mime.TransferEncoding)
extern "C" void AttachmentBase_set_TransferEncoding_m3_2283 (AttachmentBase_t3_299 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose()
extern "C" void AttachmentBase_Dispose_m3_2284 (AttachmentBase_t3_299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose(System.Boolean)
extern "C" void AttachmentBase_Dispose_m3_2285 (AttachmentBase_t3_299 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
