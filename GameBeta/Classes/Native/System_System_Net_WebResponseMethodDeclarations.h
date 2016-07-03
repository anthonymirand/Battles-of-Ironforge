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

// System.Net.WebResponse
struct WebResponse_t3_559;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Exception
struct Exception_t1_33;
// System.Uri
struct Uri_t3_3;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m3_5345 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m3_5346 (WebResponse_t3_559 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m3_5347 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m3_5348 (WebResponse_t3_559 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebResponse::get_ContentLength()
extern "C" int64_t WebResponse_get_ContentLength_m3_5349 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::set_ContentLength(System.Int64)
extern "C" void WebResponse_set_ContentLength_m3_5350 (WebResponse_t3_559 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebResponse::get_ContentType()
extern "C" String_t* WebResponse_get_ContentType_m3_5351 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::set_ContentType(System.String)
extern "C" void WebResponse_set_ContentType_m3_5352 (WebResponse_t3_559 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t3_522 * WebResponse_get_Headers_m3_5353 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t1_33 * WebResponse_GetMustImplement_m3_5354 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebResponse::get_IsFromCache()
extern "C" bool WebResponse_get_IsFromCache_m3_5355 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebResponse::get_IsMutuallyAuthenticated()
extern "C" bool WebResponse_get_IsMutuallyAuthenticated_m3_5356 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebResponse::get_ResponseUri()
extern "C" Uri_t3_3 * WebResponse_get_ResponseUri_m3_5357 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m3_5358 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t1_226 * WebResponse_GetResponseStream_m3_5359 (WebResponse_t3_559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m3_5360 (WebResponse_t3_559 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
