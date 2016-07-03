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

// System.Net.WebProxy
struct WebProxy_t3_641;
// System.String
struct String_t;
// System.Uri
struct Uri_t3_3;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m3_5259 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.String)
extern "C" void WebProxy__ctor_m3_5260 (WebProxy_t3_641 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri)
extern "C" void WebProxy__ctor_m3_5261 (WebProxy_t3_641 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.String,System.Boolean)
extern "C" void WebProxy__ctor_m3_5262 (WebProxy_t3_641 * __this, String_t* ___address, bool ___bypassOnLocal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.String,System.Int32)
extern "C" void WebProxy__ctor_m3_5263 (WebProxy_t3_641 * __this, String_t* ___host, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean)
extern "C" void WebProxy__ctor_m3_5264 (WebProxy_t3_641 * __this, Uri_t3_3 * ___address, bool ___bypassOnLocal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.String,System.Boolean,System.String[])
extern "C" void WebProxy__ctor_m3_5265 (WebProxy_t3_641 * __this, String_t* ___address, bool ___bypassOnLocal, StringU5BU5D_t1_206* ___bypassList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[])
extern "C" void WebProxy__ctor_m3_5266 (WebProxy_t3_641 * __this, Uri_t3_3 * ___address, bool ___bypassOnLocal, StringU5BU5D_t1_206* ___bypassList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.String,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m3_5267 (WebProxy_t3_641 * __this, String_t* ___address, bool ___bypassOnLocal, StringU5BU5D_t1_206* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m3_5268 (WebProxy_t3_641 * __this, Uri_t3_3 * ___address, bool ___bypassOnLocal, StringU5BU5D_t1_206* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m3_5269 (WebProxy_t3_641 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m3_5270 (WebProxy_t3_641 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::get_Address()
extern "C" Uri_t3_3 * WebProxy_get_Address_m3_5271 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_Address(System.Uri)
extern "C" void WebProxy_set_Address_m3_5272 (WebProxy_t3_641 * __this, Uri_t3_3 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Net.WebProxy::get_BypassArrayList()
extern "C" ArrayList_t1_114 * WebProxy_get_BypassArrayList_m3_5273 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebProxy::get_BypassList()
extern "C" StringU5BU5D_t1_206* WebProxy_get_BypassList_m3_5274 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassList(System.String[])
extern "C" void WebProxy_set_BypassList_m3_5275 (WebProxy_t3_641 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_BypassProxyOnLocal()
extern "C" bool WebProxy_get_BypassProxyOnLocal_m3_5276 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_BypassProxyOnLocal(System.Boolean)
extern "C" void WebProxy_set_BypassProxyOnLocal_m3_5277 (WebProxy_t3_641 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern "C" Object_t * WebProxy_get_Credentials_m3_5278 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_Credentials(System.Net.ICredentials)
extern "C" void WebProxy_set_Credentials_m3_5279 (WebProxy_t3_641 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m3_5280 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern "C" void WebProxy_set_UseDefaultCredentials_m3_5281 (WebProxy_t3_641 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebProxy System.Net.WebProxy::GetDefaultProxy()
extern "C" WebProxy_t3_641 * WebProxy_GetDefaultProxy_m3_5282 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t3_3 * WebProxy_GetProxy_m3_5283 (WebProxy_t3_641 * __this, Uri_t3_3 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m3_5284 (WebProxy_t3_641 * __this, Uri_t3_3 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m3_5285 (WebProxy_t3_641 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m3_5286 (WebProxy_t3_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::ToUri(System.String)
extern "C" Uri_t3_3 * WebProxy_ToUri_m3_5287 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
