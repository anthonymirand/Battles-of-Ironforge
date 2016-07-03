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

// System.Net.GlobalProxySelection/EmptyWebProxy
struct EmptyWebProxy_t3_574;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Uri
struct Uri_t3_3;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.GlobalProxySelection/EmptyWebProxy::.ctor()
extern "C" void EmptyWebProxy__ctor_m3_4301 (EmptyWebProxy_t3_574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.GlobalProxySelection/EmptyWebProxy::get_Credentials()
extern "C" Object_t * EmptyWebProxy_get_Credentials_m3_4302 (EmptyWebProxy_t3_574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.GlobalProxySelection/EmptyWebProxy::set_Credentials(System.Net.ICredentials)
extern "C" void EmptyWebProxy_set_Credentials_m3_4303 (EmptyWebProxy_t3_574 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.GlobalProxySelection/EmptyWebProxy::GetProxy(System.Uri)
extern "C" Uri_t3_3 * EmptyWebProxy_GetProxy_m3_4304 (EmptyWebProxy_t3_574 * __this, Uri_t3_3 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.GlobalProxySelection/EmptyWebProxy::IsBypassed(System.Uri)
extern "C" bool EmptyWebProxy_IsBypassed_m3_4305 (EmptyWebProxy_t3_574 * __this, Uri_t3_3 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
