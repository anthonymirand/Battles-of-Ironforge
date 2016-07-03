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

// System.Net.Mail.CCredentialsByHost
struct CCredentialsByHost_t3_323;
// System.String
struct String_t;
// System.Net.NetworkCredential
struct NetworkCredential_t3_537;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.CCredentialsByHost::.ctor(System.String,System.String)
extern "C" void CCredentialsByHost__ctor_m3_2441 (CCredentialsByHost_t3_323 * __this, String_t* ___userName, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.Mail.CCredentialsByHost::GetCredential(System.String,System.Int32,System.String)
extern "C" NetworkCredential_t3_537 * CCredentialsByHost_GetCredential_m3_2442 (CCredentialsByHost_t3_323 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
