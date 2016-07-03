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

// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t3_221;
// System.Diagnostics.ProcessThread[]
struct ProcessThreadU5BU5D_t3_819;
// System.Diagnostics.ProcessThread
struct ProcessThread_t3_219;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessThreadCollection::.ctor()
extern "C" void ProcessThreadCollection__ctor_m3_1702 (ProcessThreadCollection_t3_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::.ctor(System.Diagnostics.ProcessThread[])
extern "C" void ProcessThreadCollection__ctor_m3_1703 (ProcessThreadCollection_t3_221 * __this, ProcessThreadU5BU5D_t3_819* ___processThreads, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThreadCollection System.Diagnostics.ProcessThreadCollection::GetEmpty()
extern "C" ProcessThreadCollection_t3_221 * ProcessThreadCollection_GetEmpty_m3_1704 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThread System.Diagnostics.ProcessThreadCollection::get_Item(System.Int32)
extern "C" ProcessThread_t3_219 * ProcessThreadCollection_get_Item_m3_1705 (ProcessThreadCollection_t3_221 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollection::Add(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollection_Add_m3_1706 (ProcessThreadCollection_t3_221 * __this, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessThreadCollection::Contains(System.Diagnostics.ProcessThread)
extern "C" bool ProcessThreadCollection_Contains_m3_1707 (ProcessThreadCollection_t3_221 * __this, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::CopyTo(System.Diagnostics.ProcessThread[],System.Int32)
extern "C" void ProcessThreadCollection_CopyTo_m3_1708 (ProcessThreadCollection_t3_221 * __this, ProcessThreadU5BU5D_t3_819* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollection::IndexOf(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollection_IndexOf_m3_1709 (ProcessThreadCollection_t3_221 * __this, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::Insert(System.Int32,System.Diagnostics.ProcessThread)
extern "C" void ProcessThreadCollection_Insert_m3_1710 (ProcessThreadCollection_t3_221 * __this, int32_t ___index, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::Remove(System.Diagnostics.ProcessThread)
extern "C" void ProcessThreadCollection_Remove_m3_1711 (ProcessThreadCollection_t3_221 * __this, ProcessThread_t3_219 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
