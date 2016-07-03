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

// System.Net.Mail.AlternateView
struct AlternateView_t3_298;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.IO.Stream
struct Stream_t1_226;
// System.Uri
struct Uri_t3_3;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t3_300;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.AlternateView::.ctor(System.String)
extern "C" void AlternateView__ctor_m3_2234 (AlternateView_t3_298 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void AlternateView__ctor_m3_2235 (AlternateView_t3_298 * __this, String_t* ___fileName, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.String,System.String)
extern "C" void AlternateView__ctor_m3_2236 (AlternateView_t3_298 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream)
extern "C" void AlternateView__ctor_m3_2237 (AlternateView_t3_298 * __this, Stream_t1_226 * ___contentStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.String)
extern "C" void AlternateView__ctor_m3_2238 (AlternateView_t3_298 * __this, Stream_t1_226 * ___contentStream, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void AlternateView__ctor_m3_2239 (AlternateView_t3_298 * __this, Stream_t1_226 * ___contentStream, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Mail.AlternateView::get_BaseUri()
extern "C" Uri_t3_3 * AlternateView_get_BaseUri_m3_2240 (AlternateView_t3_298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::set_BaseUri(System.Uri)
extern "C" void AlternateView_set_BaseUri_m3_2241 (AlternateView_t3_298 * __this, Uri_t3_3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::get_LinkedResources()
extern "C" LinkedResourceCollection_t3_300 * AlternateView_get_LinkedResources_m3_2242 (AlternateView_t3_298 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String)
extern "C" AlternateView_t3_298 * AlternateView_CreateAlternateViewFromString_m3_2243 (Object_t * __this /* static, unused */, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Net.Mime.ContentType)
extern "C" AlternateView_t3_298 * AlternateView_CreateAlternateViewFromString_m3_2244 (Object_t * __this /* static, unused */, String_t* ___content, ContentType_t3_305 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Text.Encoding,System.String)
extern "C" AlternateView_t3_298 * AlternateView_CreateAlternateViewFromString_m3_2245 (Object_t * __this /* static, unused */, String_t* ___content, Encoding_t1_227 * ___encoding, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::Dispose(System.Boolean)
extern "C" void AlternateView_Dispose_m3_2246 (AlternateView_t3_298 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
