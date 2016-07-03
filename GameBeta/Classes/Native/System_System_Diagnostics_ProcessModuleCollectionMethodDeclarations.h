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

// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t3_212;
// System.Diagnostics.ProcessModule[]
struct ProcessModuleU5BU5D_t3_817;
// System.Diagnostics.ProcessModule
struct ProcessModule_t3_216;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessModuleCollection::.ctor()
extern "C" void ProcessModuleCollection__ctor_m3_1632 (ProcessModuleCollection_t3_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessModuleCollection::.ctor(System.Diagnostics.ProcessModule[])
extern "C" void ProcessModuleCollection__ctor_m3_1633 (ProcessModuleCollection_t3_212 * __this, ProcessModuleU5BU5D_t3_817* ___processModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessModule System.Diagnostics.ProcessModuleCollection::get_Item(System.Int32)
extern "C" ProcessModule_t3_216 * ProcessModuleCollection_get_Item_m3_1634 (ProcessModuleCollection_t3_212 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessModuleCollection::Contains(System.Diagnostics.ProcessModule)
extern "C" bool ProcessModuleCollection_Contains_m3_1635 (ProcessModuleCollection_t3_212 * __this, ProcessModule_t3_216 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessModuleCollection::CopyTo(System.Diagnostics.ProcessModule[],System.Int32)
extern "C" void ProcessModuleCollection_CopyTo_m3_1636 (ProcessModuleCollection_t3_212 * __this, ProcessModuleU5BU5D_t3_817* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessModuleCollection::IndexOf(System.Diagnostics.ProcessModule)
extern "C" int32_t ProcessModuleCollection_IndexOf_m3_1637 (ProcessModuleCollection_t3_212 * __this, ProcessModule_t3_216 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
