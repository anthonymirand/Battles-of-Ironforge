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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3_634;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t3_598;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_0;
// System.Collections.Queue
struct Queue_t1_183;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m3_5111 (WebConnectionGroup_t3_634 * __this, ServicePoint_t3_4 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::Close()
extern "C" void WebConnectionGroup_Close_m3_5112 (WebConnectionGroup_t3_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t3_598 * WebConnectionGroup_GetConnection_m3_5113 (WebConnectionGroup_t3_634 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m3_5114 (Object_t * __this /* static, unused */, WebConnection_t3_598 * ___cnc, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t3_598 * WebConnectionGroup_CreateOrReuseConnection_m3_5115 (WebConnectionGroup_t3_634 * __this, HttpWebRequest_t3_0 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebConnectionGroup::get_Name()
extern "C" String_t* WebConnectionGroup_get_Name_m3_5116 (WebConnectionGroup_t3_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1_183 * WebConnectionGroup_get_Queue_m3_5117 (WebConnectionGroup_t3_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
