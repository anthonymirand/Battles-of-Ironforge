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

// System.Security.Principal.SecurityIdentifier
struct SecurityIdentifier_t1_661;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Principal.SecurityIdentifier::.cctor()
extern "C" void SecurityIdentifier__cctor_m1_4441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.SecurityIdentifier::get_Value()
extern "C" String_t* SecurityIdentifier_get_Value_m1_4442 (SecurityIdentifier_t1_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Principal.SecurityIdentifier::CompareTo(System.Security.Principal.SecurityIdentifier)
extern "C" int32_t SecurityIdentifier_CompareTo_m1_4443 (SecurityIdentifier_t1_661 * __this, SecurityIdentifier_t1_661 * ___sid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Principal.SecurityIdentifier::Equals(System.Object)
extern "C" bool SecurityIdentifier_Equals_m1_4444 (SecurityIdentifier_t1_661 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Principal.SecurityIdentifier::Equals(System.Security.Principal.SecurityIdentifier)
extern "C" bool SecurityIdentifier_Equals_m1_4445 (SecurityIdentifier_t1_661 * __this, SecurityIdentifier_t1_661 * ___sid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Principal.SecurityIdentifier::GetHashCode()
extern "C" int32_t SecurityIdentifier_GetHashCode_m1_4446 (SecurityIdentifier_t1_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Principal.SecurityIdentifier::ToString()
extern "C" String_t* SecurityIdentifier_ToString_m1_4447 (SecurityIdentifier_t1_661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Principal.SecurityIdentifier::op_Equality(System.Security.Principal.SecurityIdentifier,System.Security.Principal.SecurityIdentifier)
extern "C" bool SecurityIdentifier_op_Equality_m1_4448 (Object_t * __this /* static, unused */, SecurityIdentifier_t1_661 * ___left, SecurityIdentifier_t1_661 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
