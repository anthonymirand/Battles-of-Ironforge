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

// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.Uri
struct Uri_t3_3;
// System.Exception
struct Exception_t1_33;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t3_609;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.String
struct String_t;
// System.Version
struct Version_t1_331;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Net.IPHostEntry
struct IPHostEntry_t3_544;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3_634;
// System.EventHandler
struct EventHandler_t1_275;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_0;
// System.Net.Sockets.Socket
struct Socket_t3_483;
// System.Net.IPEndPoint
struct IPEndPoint_t3_442;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m3_4797 (ServicePoint_t3_4 * __this, Uri_t3_3 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t3_3 * ServicePoint_get_Address_m3_4798 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.ServicePoint::GetMustImplement()
extern "C" Exception_t1_33 * ServicePoint_GetMustImplement_m3_4799 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.BindIPEndPoint System.Net.ServicePoint::get_BindIPEndPointDelegate()
extern "C" BindIPEndPoint_t3_609 * ServicePoint_get_BindIPEndPointDelegate_m3_4800 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_BindIPEndPointDelegate(System.Net.BindIPEndPoint)
extern "C" void ServicePoint_set_BindIPEndPointDelegate_m3_4801 (ServicePoint_t3_4 * __this, BindIPEndPoint_t3_609 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::get_Certificate()
extern "C" X509Certificate_t1_572 * ServicePoint_get_Certificate_m3_4802 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * ServicePoint_get_ClientCertificate_m3_4803 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLeaseTimeout()
extern "C" int32_t ServicePoint_get_ConnectionLeaseTimeout_m3_4804 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ConnectionLeaseTimeout(System.Int32)
extern "C" void ServicePoint_set_ConnectionLeaseTimeout_m3_4805 (ServicePoint_t3_4 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m3_4806 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ConnectionLimit(System.Int32)
extern "C" void ServicePoint_set_ConnectionLimit_m3_4807 (ServicePoint_t3_4 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePoint::get_ConnectionName()
extern "C" String_t* ServicePoint_get_ConnectionName_m3_4808 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m3_4809 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t1_128  ServicePoint_get_IdleSince_m3_4810 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m3_4811 (ServicePoint_t3_4 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_MaxIdleTime()
extern "C" int32_t ServicePoint_get_MaxIdleTime_m3_4812 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_MaxIdleTime(System.Int32)
extern "C" void ServicePoint_set_MaxIdleTime_m3_4813 (ServicePoint_t3_4 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t1_331 * ServicePoint_get_ProtocolVersion_m3_4814 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ReceiveBufferSize()
extern "C" int32_t ServicePoint_get_ReceiveBufferSize_m3_4815 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ReceiveBufferSize(System.Int32)
extern "C" void ServicePoint_set_ReceiveBufferSize_m3_4816 (ServicePoint_t3_4 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SupportsPipelining()
extern "C" bool ServicePoint_get_SupportsPipelining_m3_4817 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_Expect100Continue()
extern "C" bool ServicePoint_get_Expect100Continue_m3_4818 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m3_4819 (ServicePoint_t3_4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m3_4820 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m3_4821 (ServicePoint_t3_4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m3_4822 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m3_4823 (ServicePoint_t3_4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m3_4824 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m3_4825 (ServicePoint_t3_4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m3_4826 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m3_4827 (ServicePoint_t3_4 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m3_4828 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1_173 * ServicePoint_get_Groups_m3_4829 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t3_544 * ServicePoint_get_HostEntry_m3_4830 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m3_4831 (ServicePoint_t3_4 * __this, Version_t1_331 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t3_634 * ServicePoint_GetConnectionGroup_m3_4832 (ServicePoint_t3_4 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t1_275 * ServicePoint_SendRequest_m3_4833 (ServicePoint_t3_4 * __this, HttpWebRequest_t3_0 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CloseConnectionGroup(System.String)
extern "C" bool ServicePoint_CloseConnectionGroup_m3_4834 (ServicePoint_t3_4 * __this, String_t* ___connectionGroupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::IncrementConnection()
extern "C" void ServicePoint_IncrementConnection_m3_4835 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::DecrementConnection()
extern "C" void ServicePoint_DecrementConnection_m3_4836 (ServicePoint_t3_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m3_4837 (ServicePoint_t3_4 * __this, X509Certificate_t1_572 * ___client, X509Certificate_t1_572 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m3_4838 (ServicePoint_t3_4 * __this, Socket_t3_483 * ___sock, IPEndPoint_t3_442 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
