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

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t2_70;
// Mono.Security.X509.X509Extension
struct X509Extension_t2_41;
// System.String[]
struct StringU5BU5D_t1_206;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectAltNameExtension__ctor_m2_427 (SubjectAltNameExtension_t2_70 * __this, X509Extension_t2_41 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C" void SubjectAltNameExtension_Decode_m2_428 (SubjectAltNameExtension_t2_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C" StringU5BU5D_t1_206* SubjectAltNameExtension_get_DNSNames_m2_429 (SubjectAltNameExtension_t2_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C" StringU5BU5D_t1_206* SubjectAltNameExtension_get_IPAddresses_m2_430 (SubjectAltNameExtension_t2_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C" String_t* SubjectAltNameExtension_ToString_m2_431 (SubjectAltNameExtension_t2_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
