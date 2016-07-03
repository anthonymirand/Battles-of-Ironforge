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

// System.Net.Mail.MailAddress
struct MailAddress_t3_309;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Object
struct Object_t;
// System.FormatException
struct FormatException_t1_772;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern "C" void MailAddress__ctor_m3_2310 (MailAddress_t3_309 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String)
extern "C" void MailAddress__ctor_m3_2311 (MailAddress_t3_309 * __this, String_t* ___address, String_t* ___displayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String,System.Text.Encoding)
extern "C" void MailAddress__ctor_m3_2312 (MailAddress_t3_309 * __this, String_t* ___address, String_t* ___displayName, Encoding_t1_227 * ___displayNameEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Address()
extern "C" String_t* MailAddress_get_Address_m3_2313 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_DisplayName()
extern "C" String_t* MailAddress_get_DisplayName_m3_2314 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Host()
extern "C" String_t* MailAddress_get_Host_m3_2315 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_User()
extern "C" String_t* MailAddress_get_User_m3_2316 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Object)
extern "C" bool MailAddress_Equals_m3_2317 (MailAddress_t3_309 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Net.Mail.MailAddress)
extern "C" bool MailAddress_Equals_m3_2318 (MailAddress_t3_309 * __this, MailAddress_t3_309 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.MailAddress::GetHashCode()
extern "C" int32_t MailAddress_GetHashCode_m3_2319 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::ToString()
extern "C" String_t* MailAddress_ToString_m3_2320 (MailAddress_t3_309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.FormatException System.Net.Mail.MailAddress::CreateFormatException()
extern "C" FormatException_t1_772 * MailAddress_CreateFormatException_m3_2321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
