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

// System.Net.CredentialCache
struct CredentialCache_t3_536;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.NetworkCredential
struct NetworkCredential_t3_537;
// System.Uri
struct Uri_t3_3;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CredentialCache::.ctor()
extern "C" void CredentialCache__ctor_m3_3947 (CredentialCache_t3_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::.cctor()
extern "C" void CredentialCache__cctor_m3_3948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern "C" Object_t * CredentialCache_get_DefaultCredentials_m3_3949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::get_DefaultNetworkCredentials()
extern "C" NetworkCredential_t3_537 * CredentialCache_get_DefaultNetworkCredentials_m3_3950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t3_537 * CredentialCache_GetCredential_m3_3951 (CredentialCache_t3_536 * __this, Uri_t3_3 * ___uriPrefix, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CredentialCache::GetEnumerator()
extern "C" Object_t * CredentialCache_GetEnumerator_m3_3952 (CredentialCache_t3_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Add(System.Uri,System.String,System.Net.NetworkCredential)
extern "C" void CredentialCache_Add_m3_3953 (CredentialCache_t3_536 * __this, Uri_t3_3 * ___uriPrefix, String_t* ___authType, NetworkCredential_t3_537 * ___cred, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Remove(System.Uri,System.String)
extern "C" void CredentialCache_Remove_m3_3954 (CredentialCache_t3_536 * __this, Uri_t3_3 * ___uriPrefix, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.String,System.Int32,System.String)
extern "C" NetworkCredential_t3_537 * CredentialCache_GetCredential_m3_3955 (CredentialCache_t3_536 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Add(System.String,System.Int32,System.String,System.Net.NetworkCredential)
extern "C" void CredentialCache_Add_m3_3956 (CredentialCache_t3_536 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, NetworkCredential_t3_537 * ___credential, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Remove(System.String,System.Int32,System.String)
extern "C" void CredentialCache_Remove_m3_3957 (CredentialCache_t3_536 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
