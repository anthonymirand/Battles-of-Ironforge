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

// System.Net.WebClient
struct WebClient_t3_619;
// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t3_620;
// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t3_621;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3_622;
// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t3_623;
// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t3_624;
// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_t3_625;
// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t3_626;
// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_t3_627;
// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_t3_628;
// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t3_629;
// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t3_630;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t3_296;
// System.Net.ICredentials
struct ICredentials_t3_561;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3_522;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3_43;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Net.IWebProxy
struct IWebProxy_t3_562;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Uri
struct Uri_t3_3;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.WebRequest
struct WebRequest_t3_8;
// System.Net.DownloadDataCompletedEventArgs
struct DownloadDataCompletedEventArgs_t3_550;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t3_73;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3_551;
// System.Net.DownloadStringCompletedEventArgs
struct DownloadStringCompletedEventArgs_t3_552;
// System.Net.OpenReadCompletedEventArgs
struct OpenReadCompletedEventArgs_t3_605;
// System.Net.OpenWriteCompletedEventArgs
struct OpenWriteCompletedEventArgs_t3_606;
// System.Net.UploadDataCompletedEventArgs
struct UploadDataCompletedEventArgs_t3_614;
// System.Net.UploadFileCompletedEventArgs
struct UploadFileCompletedEventArgs_t3_615;
// System.Net.UploadProgressChangedEventArgs
struct UploadProgressChangedEventArgs_t3_616;
// System.Net.UploadStringCompletedEventArgs
struct UploadStringCompletedEventArgs_t3_617;
// System.Net.UploadValuesCompletedEventArgs
struct UploadValuesCompletedEventArgs_t3_618;
// System.Net.WebResponse
struct WebResponse_t3_559;
// System.IAsyncResult
struct IAsyncResult_t1_27;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebClient::.ctor()
extern "C" void WebClient__ctor_m3_4928 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::.cctor()
extern "C" void WebClient__cctor_m3_4929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_DownloadDataCompleted(System.Net.DownloadDataCompletedEventHandler)
extern "C" void WebClient_add_DownloadDataCompleted_m3_4930 (WebClient_t3_619 * __this, DownloadDataCompletedEventHandler_t3_620 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_DownloadDataCompleted(System.Net.DownloadDataCompletedEventHandler)
extern "C" void WebClient_remove_DownloadDataCompleted_m3_4931 (WebClient_t3_619 * __this, DownloadDataCompletedEventHandler_t3_620 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_DownloadFileCompleted(System.ComponentModel.AsyncCompletedEventHandler)
extern "C" void WebClient_add_DownloadFileCompleted_m3_4932 (WebClient_t3_619 * __this, AsyncCompletedEventHandler_t3_621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_DownloadFileCompleted(System.ComponentModel.AsyncCompletedEventHandler)
extern "C" void WebClient_remove_DownloadFileCompleted_m3_4933 (WebClient_t3_619 * __this, AsyncCompletedEventHandler_t3_621 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
extern "C" void WebClient_add_DownloadProgressChanged_m3_4934 (WebClient_t3_619 * __this, DownloadProgressChangedEventHandler_t3_622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
extern "C" void WebClient_remove_DownloadProgressChanged_m3_4935 (WebClient_t3_619 * __this, DownloadProgressChangedEventHandler_t3_622 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_DownloadStringCompleted(System.Net.DownloadStringCompletedEventHandler)
extern "C" void WebClient_add_DownloadStringCompleted_m3_4936 (WebClient_t3_619 * __this, DownloadStringCompletedEventHandler_t3_623 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_DownloadStringCompleted(System.Net.DownloadStringCompletedEventHandler)
extern "C" void WebClient_remove_DownloadStringCompleted_m3_4937 (WebClient_t3_619 * __this, DownloadStringCompletedEventHandler_t3_623 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_OpenReadCompleted(System.Net.OpenReadCompletedEventHandler)
extern "C" void WebClient_add_OpenReadCompleted_m3_4938 (WebClient_t3_619 * __this, OpenReadCompletedEventHandler_t3_624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_OpenReadCompleted(System.Net.OpenReadCompletedEventHandler)
extern "C" void WebClient_remove_OpenReadCompleted_m3_4939 (WebClient_t3_619 * __this, OpenReadCompletedEventHandler_t3_624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_OpenWriteCompleted(System.Net.OpenWriteCompletedEventHandler)
extern "C" void WebClient_add_OpenWriteCompleted_m3_4940 (WebClient_t3_619 * __this, OpenWriteCompletedEventHandler_t3_625 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_OpenWriteCompleted(System.Net.OpenWriteCompletedEventHandler)
extern "C" void WebClient_remove_OpenWriteCompleted_m3_4941 (WebClient_t3_619 * __this, OpenWriteCompletedEventHandler_t3_625 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_UploadDataCompleted(System.Net.UploadDataCompletedEventHandler)
extern "C" void WebClient_add_UploadDataCompleted_m3_4942 (WebClient_t3_619 * __this, UploadDataCompletedEventHandler_t3_626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_UploadDataCompleted(System.Net.UploadDataCompletedEventHandler)
extern "C" void WebClient_remove_UploadDataCompleted_m3_4943 (WebClient_t3_619 * __this, UploadDataCompletedEventHandler_t3_626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_UploadFileCompleted(System.Net.UploadFileCompletedEventHandler)
extern "C" void WebClient_add_UploadFileCompleted_m3_4944 (WebClient_t3_619 * __this, UploadFileCompletedEventHandler_t3_627 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_UploadFileCompleted(System.Net.UploadFileCompletedEventHandler)
extern "C" void WebClient_remove_UploadFileCompleted_m3_4945 (WebClient_t3_619 * __this, UploadFileCompletedEventHandler_t3_627 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_UploadProgressChanged(System.Net.UploadProgressChangedEventHandler)
extern "C" void WebClient_add_UploadProgressChanged_m3_4946 (WebClient_t3_619 * __this, UploadProgressChangedEventHandler_t3_628 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_UploadProgressChanged(System.Net.UploadProgressChangedEventHandler)
extern "C" void WebClient_remove_UploadProgressChanged_m3_4947 (WebClient_t3_619 * __this, UploadProgressChangedEventHandler_t3_628 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_UploadStringCompleted(System.Net.UploadStringCompletedEventHandler)
extern "C" void WebClient_add_UploadStringCompleted_m3_4948 (WebClient_t3_619 * __this, UploadStringCompletedEventHandler_t3_629 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_UploadStringCompleted(System.Net.UploadStringCompletedEventHandler)
extern "C" void WebClient_remove_UploadStringCompleted_m3_4949 (WebClient_t3_619 * __this, UploadStringCompletedEventHandler_t3_629 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::add_UploadValuesCompleted(System.Net.UploadValuesCompletedEventHandler)
extern "C" void WebClient_add_UploadValuesCompleted_m3_4950 (WebClient_t3_619 * __this, UploadValuesCompletedEventHandler_t3_630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::remove_UploadValuesCompleted(System.Net.UploadValuesCompletedEventHandler)
extern "C" void WebClient_remove_UploadValuesCompleted_m3_4951 (WebClient_t3_619 * __this, UploadValuesCompletedEventHandler_t3_630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::get_BaseAddress()
extern "C" String_t* WebClient_get_BaseAddress_m3_4952 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_BaseAddress(System.String)
extern "C" void WebClient_set_BaseAddress_m3_4953 (WebClient_t3_619 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebClient::GetMustImplement()
extern "C" Exception_t1_33 * WebClient_GetMustImplement_m3_4954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.WebClient::get_CachePolicy()
extern "C" RequestCachePolicy_t3_296 * WebClient_get_CachePolicy_m3_4955 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_CachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void WebClient_set_CachePolicy_m3_4956 (WebClient_t3_619 * __this, RequestCachePolicy_t3_296 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebClient::get_UseDefaultCredentials()
extern "C" bool WebClient_get_UseDefaultCredentials_m3_4957 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_UseDefaultCredentials(System.Boolean)
extern "C" void WebClient_set_UseDefaultCredentials_m3_4958 (WebClient_t3_619 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebClient::get_Credentials()
extern "C" Object_t * WebClient_get_Credentials_m3_4959 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_Credentials(System.Net.ICredentials)
extern "C" void WebClient_set_Credentials_m3_4960 (WebClient_t3_619 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebClient::get_Headers()
extern "C" WebHeaderCollection_t3_522 * WebClient_get_Headers_m3_4961 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_Headers(System.Net.WebHeaderCollection)
extern "C" void WebClient_set_Headers_m3_4962 (WebClient_t3_619 * __this, WebHeaderCollection_t3_522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.WebClient::get_QueryString()
extern "C" NameValueCollection_t3_43 * WebClient_get_QueryString_m3_4963 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_QueryString(System.Collections.Specialized.NameValueCollection)
extern "C" void WebClient_set_QueryString_m3_4964 (WebClient_t3_619 * __this, NameValueCollection_t3_43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebClient::get_ResponseHeaders()
extern "C" WebHeaderCollection_t3_522 * WebClient_get_ResponseHeaders_m3_4965 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.WebClient::get_Encoding()
extern "C" Encoding_t1_227 * WebClient_get_Encoding_m3_4966 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_Encoding(System.Text.Encoding)
extern "C" void WebClient_set_Encoding_m3_4967 (WebClient_t3_619 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebClient::get_Proxy()
extern "C" Object_t * WebClient_get_Proxy_m3_4968 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::set_Proxy(System.Net.IWebProxy)
extern "C" void WebClient_set_Proxy_m3_4969 (WebClient_t3_619 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebClient::get_IsBusy()
extern "C" bool WebClient_get_IsBusy_m3_4970 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CheckBusy()
extern "C" void WebClient_CheckBusy_m3_4971 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::SetBusy()
extern "C" void WebClient_SetBusy_m3_4972 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadData(System.String)
extern "C" ByteU5BU5D_t1_72* WebClient_DownloadData_m3_4973 (WebClient_t3_619 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadData(System.Uri)
extern "C" ByteU5BU5D_t1_72* WebClient_DownloadData_m3_4974 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadDataCore(System.Uri,System.Object)
extern "C" ByteU5BU5D_t1_72* WebClient_DownloadDataCore_m3_4975 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFile(System.String,System.String)
extern "C" void WebClient_DownloadFile_m3_4976 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFile(System.Uri,System.String)
extern "C" void WebClient_DownloadFile_m3_4977 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileCore(System.Uri,System.String,System.Object)
extern "C" void WebClient_DownloadFileCore_m3_4978 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenRead(System.String)
extern "C" Stream_t1_226 * WebClient_OpenRead_m3_4979 (WebClient_t3_619 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenRead(System.Uri)
extern "C" Stream_t1_226 * WebClient_OpenRead_m3_4980 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenWrite(System.String)
extern "C" Stream_t1_226 * WebClient_OpenWrite_m3_4981 (WebClient_t3_619 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenWrite(System.String,System.String)
extern "C" Stream_t1_226 * WebClient_OpenWrite_m3_4982 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenWrite(System.Uri)
extern "C" Stream_t1_226 * WebClient_OpenWrite_m3_4983 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebClient::OpenWrite(System.Uri,System.String)
extern "C" Stream_t1_226 * WebClient_OpenWrite_m3_4984 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::DetermineMethod(System.Uri,System.String,System.Boolean)
extern "C" String_t* WebClient_DetermineMethod_m3_4985 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, bool ___is_upload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadData(System.String,System.Byte[])
extern "C" ByteU5BU5D_t1_72* WebClient_UploadData_m3_4986 (WebClient_t3_619 * __this, String_t* ___address, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadData(System.String,System.String,System.Byte[])
extern "C" ByteU5BU5D_t1_72* WebClient_UploadData_m3_4987 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___method, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadData(System.Uri,System.Byte[])
extern "C" ByteU5BU5D_t1_72* WebClient_UploadData_m3_4988 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadData(System.Uri,System.String,System.Byte[])
extern "C" ByteU5BU5D_t1_72* WebClient_UploadData_m3_4989 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadDataCore(System.Uri,System.String,System.Byte[],System.Object)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadDataCore_m3_4990 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, ByteU5BU5D_t1_72* ___data, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadFile(System.String,System.String)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadFile_m3_4991 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadFile(System.Uri,System.String)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadFile_m3_4992 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadFile(System.String,System.String,System.String)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadFile_m3_4993 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___method, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadFile(System.Uri,System.String,System.String)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadFile_m3_4994 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadFileCore(System.Uri,System.String,System.String,System.Object)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadFileCore_m3_4995 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___fileName, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadValues(System.String,System.Collections.Specialized.NameValueCollection)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadValues_m3_4996 (WebClient_t3_619 * __this, String_t* ___address, NameValueCollection_t3_43 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadValues(System.String,System.String,System.Collections.Specialized.NameValueCollection)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadValues_m3_4997 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___method, NameValueCollection_t3_43 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadValues(System.Uri,System.Collections.Specialized.NameValueCollection)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadValues_m3_4998 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, NameValueCollection_t3_43 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadValues(System.Uri,System.String,System.Collections.Specialized.NameValueCollection)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadValues_m3_4999 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, NameValueCollection_t3_43 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::UploadValuesCore(System.Uri,System.String,System.Collections.Specialized.NameValueCollection,System.Object)
extern "C" ByteU5BU5D_t1_72* WebClient_UploadValuesCore_m3_5000 (WebClient_t3_619 * __this, Uri_t3_3 * ___uri, String_t* ___method, NameValueCollection_t3_43 * ___data, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::DownloadString(System.String)
extern "C" String_t* WebClient_DownloadString_m3_5001 (WebClient_t3_619 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::DownloadString(System.Uri)
extern "C" String_t* WebClient_DownloadString_m3_5002 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UploadString(System.String,System.String)
extern "C" String_t* WebClient_UploadString_m3_5003 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UploadString(System.String,System.String,System.String)
extern "C" String_t* WebClient_UploadString_m3_5004 (WebClient_t3_619 * __this, String_t* ___address, String_t* ___method, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UploadString(System.Uri,System.String)
extern "C" String_t* WebClient_UploadString_m3_5005 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UploadString(System.Uri,System.String,System.String)
extern "C" String_t* WebClient_UploadString_m3_5006 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::CreateUri(System.String)
extern "C" Uri_t3_3 * WebClient_CreateUri_m3_5007 (WebClient_t3_619 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::CreateUri(System.Uri)
extern "C" Uri_t3_3 * WebClient_CreateUri_m3_5008 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::GetQueryString(System.Boolean)
extern "C" String_t* WebClient_GetQueryString_m3_5009 (WebClient_t3_619 * __this, bool ___add_qmark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::MakeUri(System.String)
extern "C" Uri_t3_3 * WebClient_MakeUri_m3_5010 (WebClient_t3_619 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::SetupRequest(System.Uri)
extern "C" WebRequest_t3_8 * WebClient_SetupRequest_m3_5011 (WebClient_t3_619 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::SetupRequest(System.Uri,System.String,System.Boolean)
extern "C" WebRequest_t3_8 * WebClient_SetupRequest_m3_5012 (WebClient_t3_619 * __this, Uri_t3_3 * ___uri, String_t* ___method, bool ___is_upload, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::ReadAll(System.IO.Stream,System.Int32,System.Object)
extern "C" ByteU5BU5D_t1_72* WebClient_ReadAll_m3_5013 (WebClient_t3_619 * __this, Stream_t1_226 * ___stream, int32_t ___length, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UrlEncode(System.String)
extern "C" String_t* WebClient_UrlEncode_m3_5014 (WebClient_t3_619 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UrlEncodeAndWrite(System.IO.Stream,System.Byte[])
extern "C" void WebClient_UrlEncodeAndWrite_m3_5015 (Object_t * __this /* static, unused */, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CancelAsync()
extern "C" void WebClient_CancelAsync_m3_5016 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CompleteAsync()
extern "C" void WebClient_CompleteAsync_m3_5017 (WebClient_t3_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadDataAsync(System.Uri)
extern "C" void WebClient_DownloadDataAsync_m3_5018 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadDataAsync(System.Uri,System.Object)
extern "C" void WebClient_DownloadDataAsync_m3_5019 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileAsync(System.Uri,System.String)
extern "C" void WebClient_DownloadFileAsync_m3_5020 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadFileAsync(System.Uri,System.String,System.Object)
extern "C" void WebClient_DownloadFileAsync_m3_5021 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadStringAsync(System.Uri)
extern "C" void WebClient_DownloadStringAsync_m3_5022 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::DownloadStringAsync(System.Uri,System.Object)
extern "C" void WebClient_DownloadStringAsync_m3_5023 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OpenReadAsync(System.Uri)
extern "C" void WebClient_OpenReadAsync_m3_5024 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OpenReadAsync(System.Uri,System.Object)
extern "C" void WebClient_OpenReadAsync_m3_5025 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OpenWriteAsync(System.Uri)
extern "C" void WebClient_OpenWriteAsync_m3_5026 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OpenWriteAsync(System.Uri,System.String)
extern "C" void WebClient_OpenWriteAsync_m3_5027 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OpenWriteAsync(System.Uri,System.String,System.Object)
extern "C" void WebClient_OpenWriteAsync_m3_5028 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadDataAsync(System.Uri,System.Byte[])
extern "C" void WebClient_UploadDataAsync_m3_5029 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadDataAsync(System.Uri,System.String,System.Byte[])
extern "C" void WebClient_UploadDataAsync_m3_5030 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadDataAsync(System.Uri,System.String,System.Byte[],System.Object)
extern "C" void WebClient_UploadDataAsync_m3_5031 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, ByteU5BU5D_t1_72* ___data, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadFileAsync(System.Uri,System.String)
extern "C" void WebClient_UploadFileAsync_m3_5032 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadFileAsync(System.Uri,System.String,System.String)
extern "C" void WebClient_UploadFileAsync_m3_5033 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadFileAsync(System.Uri,System.String,System.String,System.Object)
extern "C" void WebClient_UploadFileAsync_m3_5034 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___fileName, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadStringAsync(System.Uri,System.String)
extern "C" void WebClient_UploadStringAsync_m3_5035 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadStringAsync(System.Uri,System.String,System.String)
extern "C" void WebClient_UploadStringAsync_m3_5036 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadStringAsync(System.Uri,System.String,System.String,System.Object)
extern "C" void WebClient_UploadStringAsync_m3_5037 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, String_t* ___data, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadValuesAsync(System.Uri,System.Collections.Specialized.NameValueCollection)
extern "C" void WebClient_UploadValuesAsync_m3_5038 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, NameValueCollection_t3_43 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadValuesAsync(System.Uri,System.String,System.Collections.Specialized.NameValueCollection)
extern "C" void WebClient_UploadValuesAsync_m3_5039 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, NameValueCollection_t3_43 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::UploadValuesAsync(System.Uri,System.String,System.Collections.Specialized.NameValueCollection,System.Object)
extern "C" void WebClient_UploadValuesAsync_m3_5040 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, String_t* ___method, NameValueCollection_t3_43 * ___values, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadDataCompleted(System.Net.DownloadDataCompletedEventArgs)
extern "C" void WebClient_OnDownloadDataCompleted_m3_5041 (WebClient_t3_619 * __this, DownloadDataCompletedEventArgs_t3_550 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadFileCompleted(System.ComponentModel.AsyncCompletedEventArgs)
extern "C" void WebClient_OnDownloadFileCompleted_m3_5042 (WebClient_t3_619 * __this, AsyncCompletedEventArgs_t3_73 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadProgressChanged(System.Net.DownloadProgressChangedEventArgs)
extern "C" void WebClient_OnDownloadProgressChanged_m3_5043 (WebClient_t3_619 * __this, DownloadProgressChangedEventArgs_t3_551 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadStringCompleted(System.Net.DownloadStringCompletedEventArgs)
extern "C" void WebClient_OnDownloadStringCompleted_m3_5044 (WebClient_t3_619 * __this, DownloadStringCompletedEventArgs_t3_552 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnOpenReadCompleted(System.Net.OpenReadCompletedEventArgs)
extern "C" void WebClient_OnOpenReadCompleted_m3_5045 (WebClient_t3_619 * __this, OpenReadCompletedEventArgs_t3_605 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnOpenWriteCompleted(System.Net.OpenWriteCompletedEventArgs)
extern "C" void WebClient_OnOpenWriteCompleted_m3_5046 (WebClient_t3_619 * __this, OpenWriteCompletedEventArgs_t3_606 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnUploadDataCompleted(System.Net.UploadDataCompletedEventArgs)
extern "C" void WebClient_OnUploadDataCompleted_m3_5047 (WebClient_t3_619 * __this, UploadDataCompletedEventArgs_t3_614 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnUploadFileCompleted(System.Net.UploadFileCompletedEventArgs)
extern "C" void WebClient_OnUploadFileCompleted_m3_5048 (WebClient_t3_619 * __this, UploadFileCompletedEventArgs_t3_615 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnUploadProgressChanged(System.Net.UploadProgressChangedEventArgs)
extern "C" void WebClient_OnUploadProgressChanged_m3_5049 (WebClient_t3_619 * __this, UploadProgressChangedEventArgs_t3_616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnUploadStringCompleted(System.Net.UploadStringCompletedEventArgs)
extern "C" void WebClient_OnUploadStringCompleted_m3_5050 (WebClient_t3_619 * __this, UploadStringCompletedEventArgs_t3_617 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnUploadValuesCompleted(System.Net.UploadValuesCompletedEventArgs)
extern "C" void WebClient_OnUploadValuesCompleted_m3_5051 (WebClient_t3_619 * __this, UploadValuesCompletedEventArgs_t3_618 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebClient::GetWebResponse(System.Net.WebRequest,System.IAsyncResult)
extern "C" WebResponse_t3_559 * WebClient_GetWebResponse_m3_5052 (WebClient_t3_619 * __this, WebRequest_t3_8 * ___request, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::GetWebRequest(System.Uri)
extern "C" WebRequest_t3_8 * WebClient_GetWebRequest_m3_5053 (WebClient_t3_619 * __this, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebClient::GetWebResponse(System.Net.WebRequest)
extern "C" WebResponse_t3_559 * WebClient_GetWebResponse_m3_5054 (WebClient_t3_619 * __this, WebRequest_t3_8 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<DownloadDataAsync>m__C(System.Object)
extern "C" void WebClient_U3CDownloadDataAsyncU3Em__C_m3_5055 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<DownloadFileAsync>m__D(System.Object)
extern "C" void WebClient_U3CDownloadFileAsyncU3Em__D_m3_5056 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<DownloadStringAsync>m__E(System.Object)
extern "C" void WebClient_U3CDownloadStringAsyncU3Em__E_m3_5057 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<OpenReadAsync>m__F(System.Object)
extern "C" void WebClient_U3COpenReadAsyncU3Em__F_m3_5058 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<OpenWriteAsync>m__10(System.Object)
extern "C" void WebClient_U3COpenWriteAsyncU3Em__10_m3_5059 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<UploadDataAsync>m__11(System.Object)
extern "C" void WebClient_U3CUploadDataAsyncU3Em__11_m3_5060 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<UploadFileAsync>m__12(System.Object)
extern "C" void WebClient_U3CUploadFileAsyncU3Em__12_m3_5061 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<UploadStringAsync>m__13(System.Object)
extern "C" void WebClient_U3CUploadStringAsyncU3Em__13_m3_5062 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::<UploadValuesAsync>m__14(System.Object)
extern "C" void WebClient_U3CUploadValuesAsyncU3Em__14_m3_5063 (WebClient_t3_619 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
