#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Net_Cache_RequestCachePolicy.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Net_Cache_HttpRequestCacheLevel.h"
#include "mscorlib_System_TimeSpan.h"

// System.Net.Cache.HttpRequestCachePolicy
struct  HttpRequestCachePolicy_t3_295  : public RequestCachePolicy_t3_296
{
	// System.DateTime System.Net.Cache.HttpRequestCachePolicy::cacheSyncDate
	DateTime_t1_128  ___cacheSyncDate_1;
	// System.Net.Cache.HttpRequestCacheLevel System.Net.Cache.HttpRequestCachePolicy::level
	int32_t ___level_2;
	// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::maxAge
	TimeSpan_t1_218  ___maxAge_3;
	// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::maxStale
	TimeSpan_t1_218  ___maxStale_4;
	// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::minFresh
	TimeSpan_t1_218  ___minFresh_5;
};
