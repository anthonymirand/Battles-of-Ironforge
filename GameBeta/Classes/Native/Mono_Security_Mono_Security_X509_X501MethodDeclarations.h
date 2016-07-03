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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2_10;
// System.Text.StringBuilder
struct StringBuilder_t1_146;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2_45;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m2_251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m2_252 (Object_t * __this /* static, unused */, ASN1_t2_10 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m2_253 (Object_t * __this /* static, unused */, ASN1_t2_10 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m2_254 (Object_t * __this /* static, unused */, StringBuilder_t1_146 * ___sb, ASN1_t2_10 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::GetAttributeFromOid(System.String)
extern "C" AttributeTypeAndValue_t2_45 * X501_GetAttributeFromOid_m2_255 (Object_t * __this /* static, unused */, String_t* ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsOid(System.String)
extern "C" bool X501_IsOid_m2_256 (Object_t * __this /* static, unused */, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::ReadAttribute(System.String,System.Int32&)
extern "C" AttributeTypeAndValue_t2_45 * X501_ReadAttribute_m2_257 (Object_t * __this /* static, unused */, String_t* ___value, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsHex(System.Char)
extern "C" bool X501_IsHex_m2_258 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadHex(System.String,System.Int32&)
extern "C" String_t* X501_ReadHex_m2_259 (Object_t * __this /* static, unused */, String_t* ___value, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadEscaped(System.Text.StringBuilder,System.String,System.Int32)
extern "C" int32_t X501_ReadEscaped_m2_260 (Object_t * __this /* static, unused */, StringBuilder_t1_146 * ___sb, String_t* ___value, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadQuoted(System.Text.StringBuilder,System.String,System.Int32)
extern "C" int32_t X501_ReadQuoted_m2_261 (Object_t * __this /* static, unused */, StringBuilder_t1_146 * ___sb, String_t* ___value, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadValue(System.String,System.Int32&)
extern "C" String_t* X501_ReadValue_m2_262 (Object_t * __this /* static, unused */, String_t* ___value, int32_t* ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X501::FromString(System.String)
extern "C" ASN1_t2_10 * X501_FromString_m2_263 (Object_t * __this /* static, unused */, String_t* ___rdn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
