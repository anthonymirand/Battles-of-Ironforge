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

// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2_45;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2_10;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
extern "C" void AttributeTypeAndValue__ctor_m2_379 (AttributeTypeAndValue_t2_45 * __this, String_t* ___oid, int32_t ___upperBound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
extern "C" void AttributeTypeAndValue__ctor_m2_380 (AttributeTypeAndValue_t2_45 * __this, String_t* ___oid, int32_t ___upperBound, uint8_t ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::set_Value(System.String)
extern "C" void AttributeTypeAndValue_set_Value_m2_381 (AttributeTypeAndValue_t2_45 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
extern "C" ASN1_t2_10 * AttributeTypeAndValue_GetASN1_m2_382 (AttributeTypeAndValue_t2_45 * __this, uint8_t ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
extern "C" ASN1_t2_10 * AttributeTypeAndValue_GetASN1_m2_383 (AttributeTypeAndValue_t2_45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
extern "C" uint8_t AttributeTypeAndValue_SelectBestEncoding_m2_384 (AttributeTypeAndValue_t2_45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
