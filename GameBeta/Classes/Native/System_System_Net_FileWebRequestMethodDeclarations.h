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

// System.Net.FileWebRequest
struct FileWebRequest_t3_556;
// System.Uri
struct Uri_t3_3;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.Exception
struct Exception_t1_33;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.WebResponse
struct WebResponse_t3_559;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C" void FileWebRequest__ctor_m3_4082 (FileWebRequest_t3_556 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest__ctor_m3_4083 (FileWebRequest_t3_556 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3_4084 (FileWebRequest_t3_556 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_ConnectionGroupName()
extern "C" String_t* FileWebRequest_get_ConnectionGroupName_m3_4085 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_ConnectionGroupName(System.String)
extern "C" void FileWebRequest_set_ConnectionGroupName_m3_4086 (FileWebRequest_t3_556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C" int64_t FileWebRequest_get_ContentLength_m3_4087 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_ContentLength(System.Int64)
extern "C" void FileWebRequest_set_ContentLength_m3_4088 (FileWebRequest_t3_556 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_ContentType()
extern "C" String_t* FileWebRequest_get_ContentType_m3_4089 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_ContentType(System.String)
extern "C" void FileWebRequest_set_ContentType_m3_4090 (FileWebRequest_t3_556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C" Object_t * FileWebRequest_get_Credentials_m3_4091 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void FileWebRequest_set_Credentials_m3_4092 (FileWebRequest_t3_556 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C" WebHeaderCollection_t3_522 * FileWebRequest_get_Headers_m3_4093 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C" String_t* FileWebRequest_get_Method_m3_4094 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Method(System.String)
extern "C" void FileWebRequest_set_Method_m3_4095 (FileWebRequest_t3_556 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FileWebRequest::get_PreAuthenticate()
extern "C" bool FileWebRequest_get_PreAuthenticate_m3_4096 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_PreAuthenticate(System.Boolean)
extern "C" void FileWebRequest_set_PreAuthenticate_m3_4097 (FileWebRequest_t3_556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C" Object_t * FileWebRequest_get_Proxy_m3_4098 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C" void FileWebRequest_set_Proxy_m3_4099 (FileWebRequest_t3_556 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C" Uri_t3_3 * FileWebRequest_get_RequestUri_m3_4100 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FileWebRequest::get_Timeout()
extern "C" int32_t FileWebRequest_get_Timeout_m3_4101 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Timeout(System.Int32)
extern "C" void FileWebRequest_set_Timeout_m3_4102 (FileWebRequest_t3_556 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FileWebRequest::get_UseDefaultCredentials()
extern "C" bool FileWebRequest_get_UseDefaultCredentials_m3_4103 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_UseDefaultCredentials(System.Boolean)
extern "C" void FileWebRequest_set_UseDefaultCredentials_m3_4104 (FileWebRequest_t3_556 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C" Exception_t1_33 * FileWebRequest_GetMustImplement_m3_4105 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C" void FileWebRequest_Abort_m3_4106 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
extern "C" Object_t * FileWebRequest_BeginGetRequestStream_m3_4107 (FileWebRequest_t3_556 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::EndGetRequestStream(System.IAsyncResult)
extern "C" Stream_t1_226 * FileWebRequest_EndGetRequestStream_m3_4108 (FileWebRequest_t3_556 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::GetRequestStream()
extern "C" Stream_t1_226 * FileWebRequest_GetRequestStream_m3_4109 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest::GetRequestStreamInternal()
extern "C" Stream_t1_226 * FileWebRequest_GetRequestStreamInternal_m3_4110 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FileWebRequest_BeginGetResponse_m3_4111 (FileWebRequest_t3_556 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3_559 * FileWebRequest_EndGetResponse_m3_4112 (FileWebRequest_t3_556 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C" WebResponse_t3_559 * FileWebRequest_GetResponse_m3_4113 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C" WebResponse_t3_559 * FileWebRequest_GetResponseInternal_m3_4114 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebRequest_GetObjectData_m3_4115 (FileWebRequest_t3_556 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C" void FileWebRequest_Close_m3_4116 (FileWebRequest_t3_556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
