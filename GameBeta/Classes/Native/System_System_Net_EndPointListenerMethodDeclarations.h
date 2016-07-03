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

// System.Net.EndPointListener
struct EndPointListener_t3_553;
// System.Net.IPAddress
struct IPAddress_t3_339;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Net.HttpListenerContext
struct HttpListenerContext_t3_527;
// System.Net.HttpListener
struct HttpListener_t3_581;
// System.String
struct String_t;
// System.Uri
struct Uri_t3_3;
// System.Net.ListenerPrefix
struct ListenerPrefix_t3_579;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.EndPointListener::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C" void EndPointListener__ctor_m3_4049 (EndPointListener_t3_553 * __this, IPAddress_t3_339 * ___addr, int32_t ___port, bool ___secure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::LoadCertificateAndKey(System.Net.IPAddress,System.Int32)
extern "C" void EndPointListener_LoadCertificateAndKey_m3_4050 (EndPointListener_t3_553 * __this, IPAddress_t3_339 * ___addr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::OnAccept(System.IAsyncResult)
extern "C" void EndPointListener_OnAccept_m3_4051 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.EndPointListener::BindContext(System.Net.HttpListenerContext)
extern "C" bool EndPointListener_BindContext_m3_4052 (EndPointListener_t3_553 * __this, HttpListenerContext_t3_527 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::UnbindContext(System.Net.HttpListenerContext)
extern "C" void EndPointListener_UnbindContext_m3_4053 (EndPointListener_t3_553 * __this, HttpListenerContext_t3_527 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::SearchListener(System.String,System.Uri,System.Net.ListenerPrefix&)
extern "C" HttpListener_t3_581 * EndPointListener_SearchListener_m3_4054 (EndPointListener_t3_553 * __this, String_t* ___host, Uri_t3_3 * ___uri, ListenerPrefix_t3_579 ** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::MatchFromList(System.String,System.String,System.Collections.ArrayList,System.Net.ListenerPrefix&)
extern "C" HttpListener_t3_581 * EndPointListener_MatchFromList_m3_4055 (EndPointListener_t3_553 * __this, String_t* ___host, String_t* ___path, ArrayList_t1_114 * ___list, ListenerPrefix_t3_579 ** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C" void EndPointListener_AddSpecial_m3_4056 (EndPointListener_t3_553 * __this, ArrayList_t1_114 * ___coll, ListenerPrefix_t3_579 * ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemoveSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C" void EndPointListener_RemoveSpecial_m3_4057 (EndPointListener_t3_553 * __this, ArrayList_t1_114 * ___coll, ListenerPrefix_t3_579 * ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::CheckIfRemove()
extern "C" void EndPointListener_CheckIfRemove_m3_4058 (EndPointListener_t3_553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::Close()
extern "C" void EndPointListener_Close_m3_4059 (EndPointListener_t3_553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddPrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C" void EndPointListener_AddPrefix_m3_4060 (EndPointListener_t3_553 * __this, ListenerPrefix_t3_579 * ___prefix, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemovePrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C" void EndPointListener_RemovePrefix_m3_4061 (EndPointListener_t3_553 * __this, ListenerPrefix_t3_579 * ___prefix, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
