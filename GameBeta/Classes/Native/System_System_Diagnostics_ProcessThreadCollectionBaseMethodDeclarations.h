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

// System.Diagnostics.ProcessThreadCollectionBase
struct ProcessThreadCollectionBase_t3_220;
// System.Diagnostics.ProcessThread
struct ProcessThread_t3_219;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessThreadCollectionBase::.ctor()
extern "C" void ProcessThreadCollectionBase__ctor_m3_1699 (ProcessThreadCollectionBase_t3_220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThreadCollectionBase System.Diagnostics.ProcessThreadCollectionBase::get_InnerList()
extern "C" ProcessThreadCollectionBase_t3_220 * ProcessThreadCollectionBase_get_InnerList_m3_1700 (ProcessThreadCollectionBase_t3_220 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollectionBase::Add(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollectionBase_Add_m3_1701 (ProcessThreadCollectionBase_t3_220 * __this, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
