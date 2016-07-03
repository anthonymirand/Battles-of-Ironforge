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

// System.Net.NetworkCredential
struct NetworkCredential_t3_537;
// System.String
struct String_t;
// System.Uri
struct Uri_t3_3;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkCredential::.ctor()
extern "C" void NetworkCredential__ctor_m3_4738 (NetworkCredential_t3_537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C" void NetworkCredential__ctor_m3_4739 (NetworkCredential_t3_537 * __this, String_t* ___userName, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern "C" void NetworkCredential__ctor_m3_4740 (NetworkCredential_t3_537 * __this, String_t* ___userName, String_t* ___password, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m3_4741 (NetworkCredential_t3_537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern "C" void NetworkCredential_set_Domain_m3_4742 (NetworkCredential_t3_537 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m3_4743 (NetworkCredential_t3_537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern "C" void NetworkCredential_set_UserName_m3_4744 (NetworkCredential_t3_537 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m3_4745 (NetworkCredential_t3_537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_Password(System.String)
extern "C" void NetworkCredential_set_Password_m3_4746 (NetworkCredential_t3_537 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t3_537 * NetworkCredential_GetCredential_m3_4747 (NetworkCredential_t3_537 * __this, Uri_t3_3 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
