#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t3_33;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t3_9;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3_5;

#include "mscorlib_System_Object.h"
#include "System_System_Net_SecurityProtocolType.h"

// System.Net.ServicePointManager
struct  ServicePointManager_t3_2  : public Object_t
{
};
struct ServicePointManager_t3_2_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t3_33 * ___servicePoints_2;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	Object_t * ___policy_3;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_4;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_5;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_6;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_7;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_8;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_9;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_10;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::server_cert_cb
	RemoteCertificateValidationCallback_t3_5 * ___server_cert_cb_11;
};
