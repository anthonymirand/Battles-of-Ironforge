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

// System.Net.ServicePointManager
struct ServicePointManager_t3_2;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t3_9;
// System.Exception
struct Exception_t1_33;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;
// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.Uri
struct Uri_t3_3;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t3_562;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.ctor()
extern "C" void ServicePointManager__ctor_m3_4855 (ServicePointManager_t3_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::.cctor()
extern "C" void ServicePointManager__cctor_m3_4856 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C" Object_t * ServicePointManager_get_CertificatePolicy_m3_4 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_CertificatePolicy(System.Net.ICertificatePolicy)
extern "C" void ServicePointManager_set_CertificatePolicy_m3_4857 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" bool ServicePointManager_get_CheckCertificateRevocationList_m3_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_CheckCertificateRevocationList(System.Boolean)
extern "C" void ServicePointManager_set_CheckCertificateRevocationList_m3_4858 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_DefaultConnectionLimit()
extern "C" int32_t ServicePointManager_get_DefaultConnectionLimit_m3_4859 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_DefaultConnectionLimit(System.Int32)
extern "C" void ServicePointManager_set_DefaultConnectionLimit_m3_4860 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.ServicePointManager::GetMustImplement()
extern "C" Exception_t1_33 * ServicePointManager_GetMustImplement_m3_4861 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_DnsRefreshTimeout()
extern "C" int32_t ServicePointManager_get_DnsRefreshTimeout_m3_4862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_DnsRefreshTimeout(System.Int32)
extern "C" void ServicePointManager_set_DnsRefreshTimeout_m3_4863 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_EnableDnsRoundRobin()
extern "C" bool ServicePointManager_get_EnableDnsRoundRobin_m3_4864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_EnableDnsRoundRobin(System.Boolean)
extern "C" void ServicePointManager_set_EnableDnsRoundRobin_m3_4865 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_MaxServicePointIdleTime()
extern "C" int32_t ServicePointManager_get_MaxServicePointIdleTime_m3_4866 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_MaxServicePointIdleTime(System.Int32)
extern "C" void ServicePointManager_set_MaxServicePointIdleTime_m3_4867 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_MaxServicePoints()
extern "C" int32_t ServicePointManager_get_MaxServicePoints_m3_4868 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_MaxServicePoints(System.Int32)
extern "C" void ServicePointManager_set_MaxServicePoints_m3_4869 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C" int32_t ServicePointManager_get_SecurityProtocol_m3_3 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_SecurityProtocol(System.Net.SecurityProtocolType)
extern "C" void ServicePointManager_set_SecurityProtocol_m3_4870 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C" RemoteCertificateValidationCallback_t3_5 * ServicePointManager_get_ServerCertificateValidationCallback_m3_6 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C" void ServicePointManager_set_ServerCertificateValidationCallback_m3_4871 (Object_t * __this /* static, unused */, RemoteCertificateValidationCallback_t3_5 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_Expect100Continue()
extern "C" bool ServicePointManager_get_Expect100Continue_m3_4872 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_Expect100Continue(System.Boolean)
extern "C" void ServicePointManager_set_Expect100Continue_m3_4873 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_UseNagleAlgorithm()
extern "C" bool ServicePointManager_get_UseNagleAlgorithm_m3_4874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePointManager_set_UseNagleAlgorithm_m3_4875 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri)
extern "C" ServicePoint_t3_4 * ServicePointManager_FindServicePoint_m3_4876 (Object_t * __this /* static, unused */, Uri_t3_3 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.String,System.Net.IWebProxy)
extern "C" ServicePoint_t3_4 * ServicePointManager_FindServicePoint_m3_4877 (Object_t * __this /* static, unused */, String_t* ___uriString, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C" ServicePoint_t3_4 * ServicePointManager_FindServicePoint_m3_4878 (Object_t * __this /* static, unused */, Uri_t3_3 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C" void ServicePointManager_RecycleServicePoints_m3_4879 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
