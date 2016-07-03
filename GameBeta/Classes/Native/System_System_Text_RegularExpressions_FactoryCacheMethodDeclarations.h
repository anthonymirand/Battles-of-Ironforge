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

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t3_707;
// System.String
struct String_t;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t3_708;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
extern "C" void FactoryCache__ctor_m3_5930 (FactoryCache_t3_707 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
extern "C" void FactoryCache_Add_m3_5931 (FactoryCache_t3_707 * __this, String_t* ___pattern, int32_t ___options, Object_t * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
extern "C" void FactoryCache_Cleanup_m3_5932 (FactoryCache_t3_707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * FactoryCache_Lookup_m3_5933 (FactoryCache_t3_707 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache::get_Capacity()
extern "C" int32_t FactoryCache_get_Capacity_m3_5934 (FactoryCache_t3_707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.FactoryCache::set_Capacity(System.Int32)
extern "C" void FactoryCache_set_Capacity_m3_5935 (FactoryCache_t3_707 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
