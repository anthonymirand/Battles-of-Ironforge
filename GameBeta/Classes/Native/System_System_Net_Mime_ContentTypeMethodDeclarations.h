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

// System.Net.Mime.ContentType
struct ContentType_t3_305;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3_49;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"

// System.Void System.Net.Mime.ContentType::.ctor()
extern "C" void ContentType__ctor_m3_2493 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.ctor(System.String)
extern "C" void ContentType__ctor_m3_2494 (ContentType_t3_305 * __this, String_t* ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.cctor()
extern "C" void ContentType__cctor_m3_2495 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::Parse(System.String)
extern "C" void ContentType_Parse_m3_2496 (ContentType_t3_305 * __this, String_t* ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::get_UTF8Unmarked()
extern "C" Encoding_t1_227 * ContentType_get_UTF8Unmarked_m3_2497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Boundary()
extern "C" String_t* ContentType_get_Boundary_m3_2498 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Boundary(System.String)
extern "C" void ContentType_set_Boundary_m3_2499 (ContentType_t3_305 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_CharSet()
extern "C" String_t* ContentType_get_CharSet_m3_2500 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_CharSet(System.String)
extern "C" void ContentType_set_CharSet_m3_2501 (ContentType_t3_305 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_MediaType()
extern "C" String_t* ContentType_get_MediaType_m3_2502 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_MediaType(System.String)
extern "C" void ContentType_set_MediaType_m3_2503 (ContentType_t3_305 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Name()
extern "C" String_t* ContentType_get_Name_m3_2504 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Name(System.String)
extern "C" void ContentType_set_Name_m3_2505 (ContentType_t3_305 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::get_Parameters()
extern "C" StringDictionary_t3_49 * ContentType_get_Parameters_m3_2506 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Object)
extern "C" bool ContentType_Equals_m3_2507 (ContentType_t3_305 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Net.Mime.ContentType)
extern "C" bool ContentType_Equals_m3_2508 (ContentType_t3_305 * __this, ContentType_t3_305 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentType::GetHashCode()
extern "C" int32_t ContentType_GetHashCode_m3_2509 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::ToString()
extern "C" String_t* ContentType_ToString_m3_2510 (ContentType_t3_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::WrapIfEspecialsExist(System.String)
extern "C" String_t* ContentType_WrapIfEspecialsExist_m3_2511 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::GuessEncoding(System.String)
extern "C" Encoding_t1_227 * ContentType_GuessEncoding_m3_2512 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mime.ContentType::GuessTransferEncoding(System.Text.Encoding)
extern "C" int32_t ContentType_GuessTransferEncoding_m3_2513 (Object_t * __this /* static, unused */, Encoding_t1_227 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::To2047(System.Byte[])
extern "C" String_t* ContentType_To2047_m3_2514 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::EncodeSubjectRFC2047(System.String,System.Text.Encoding)
extern "C" String_t* ContentType_EncodeSubjectRFC2047_m3_2515 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t1_227 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
