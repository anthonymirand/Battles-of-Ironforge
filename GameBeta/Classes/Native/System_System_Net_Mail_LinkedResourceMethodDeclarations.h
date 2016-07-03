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

// System.Net.Mail.LinkedResource
struct LinkedResource_t3_308;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.IO.Stream
struct Stream_t1_226;
// System.Uri
struct Uri_t3_3;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.LinkedResource::.ctor(System.String)
extern "C" void LinkedResource__ctor_m3_2292 (LinkedResource_t3_308 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void LinkedResource__ctor_m3_2293 (LinkedResource_t3_308 * __this, String_t* ___fileName, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::.ctor(System.String,System.String)
extern "C" void LinkedResource__ctor_m3_2294 (LinkedResource_t3_308 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::.ctor(System.IO.Stream)
extern "C" void LinkedResource__ctor_m3_2295 (LinkedResource_t3_308 * __this, Stream_t1_226 * ___contentStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void LinkedResource__ctor_m3_2296 (LinkedResource_t3_308 * __this, Stream_t1_226 * ___contentStream, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::.ctor(System.IO.Stream,System.String)
extern "C" void LinkedResource__ctor_m3_2297 (LinkedResource_t3_308 * __this, Stream_t1_226 * ___contentStream, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Mail.LinkedResource::get_ContentLink()
extern "C" Uri_t3_3 * LinkedResource_get_ContentLink_m3_2298 (LinkedResource_t3_308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.LinkedResource::set_ContentLink(System.Uri)
extern "C" void LinkedResource_set_ContentLink_m3_2299 (LinkedResource_t3_308 * __this, Uri_t3_3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResource System.Net.Mail.LinkedResource::CreateLinkedResourceFromString(System.String)
extern "C" LinkedResource_t3_308 * LinkedResource_CreateLinkedResourceFromString_m3_2300 (Object_t * __this /* static, unused */, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResource System.Net.Mail.LinkedResource::CreateLinkedResourceFromString(System.String,System.Net.Mime.ContentType)
extern "C" LinkedResource_t3_308 * LinkedResource_CreateLinkedResourceFromString_m3_2301 (Object_t * __this /* static, unused */, String_t* ___content, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResource System.Net.Mail.LinkedResource::CreateLinkedResourceFromString(System.String,System.Text.Encoding,System.String)
extern "C" LinkedResource_t3_308 * LinkedResource_CreateLinkedResourceFromString_m3_2302 (Object_t * __this /* static, unused */, String_t* ___content, Encoding_t1_227 * ___contentEncoding, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
