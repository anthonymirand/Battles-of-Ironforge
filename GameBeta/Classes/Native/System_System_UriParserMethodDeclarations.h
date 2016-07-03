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

// System.UriParser
struct UriParser_t3_771;
// System.Text.RegularExpressions.Match
struct Match_t3_13;
// System.Text.RegularExpressions.Group
struct Group_t3_15;
// System.String
struct String_t;
// System.Uri
struct Uri_t3_3;
// System.UriFormatException
struct UriFormatException_t3_786;
// System.Collections.Hashtable
struct Hashtable_t1_173;

#include "codegen/il2cpp-codegen.h"
#include "System_System_UriComponents.h"
#include "System_System_UriFormat.h"

// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m3_6464 (UriParser_t3_771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C" void UriParser__cctor_m3_6465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.UriParser::ParseAuthority(System.Text.RegularExpressions.Group)
extern "C" Match_t3_13 * UriParser_ParseAuthority_m3_6466 (Object_t * __this /* static, unused */, Group_t3_15 * ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern "C" String_t* UriParser_GetComponents_m3_6467 (UriParser_t3_771 * __this, Uri_t3_3 * ___uri, int32_t ___components, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C" void UriParser_InitializeAndValidate_m3_6468 (UriParser_t3_771 * __this, Uri_t3_3 * ___uri, UriFormatException_t3_786 ** ___parsingError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriParser::IsBaseOf(System.Uri,System.Uri)
extern "C" bool UriParser_IsBaseOf_m3_6469 (UriParser_t3_771 * __this, Uri_t3_3 * ___baseUri, Uri_t3_3 * ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriParser::IsWellFormedOriginalString(System.Uri)
extern "C" bool UriParser_IsWellFormedOriginalString_m3_6470 (UriParser_t3_771 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::OnNewUri()
extern "C" UriParser_t3_771 * UriParser_OnNewUri_m3_6471 (UriParser_t3_771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m3_6472 (UriParser_t3_771 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern "C" String_t* UriParser_Resolve_m3_6473 (UriParser_t3_771 * __this, Uri_t3_3 * ___baseUri, Uri_t3_3 * ___relativeUri, UriFormatException_t3_786 ** ___parsingError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriParser::get_SchemeName()
extern "C" String_t* UriParser_get_SchemeName_m3_6474 (UriParser_t3_771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m3_6475 (UriParser_t3_771 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m3_6476 (UriParser_t3_771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m3_6477 (UriParser_t3_771 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriParser::IgnoreFirstCharIf(System.String,System.Char)
extern "C" String_t* UriParser_IgnoreFirstCharIf_m3_6478 (UriParser_t3_771 * __this, String_t* ___s, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UriParser::Format(System.String,System.UriFormat)
extern "C" String_t* UriParser_Format_m3_6479 (UriParser_t3_771 * __this, String_t* ___s, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C" void UriParser_CreateDefaults_m3_6480 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UriParser::IsKnownScheme(System.String)
extern "C" bool UriParser_IsKnownScheme_m3_6481 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" void UriParser_InternalRegister_m3_6482 (Object_t * __this /* static, unused */, Hashtable_t1_173 * ___table, UriParser_t3_771 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::Register(System.UriParser,System.String,System.Int32)
extern "C" void UriParser_Register_m3_6483 (Object_t * __this /* static, unused */, UriParser_t3_771 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" UriParser_t3_771 * UriParser_GetParser_m3_6484 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
