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

// UnityStandardAssets.Utility.TimedObjectActivator
struct TimedObjectActivator_t10_94;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t10_88;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Utility.TimedObjectActivator::.ctor()
extern "C" void TimedObjectActivator__ctor_m10_409 (TimedObjectActivator_t10_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.TimedObjectActivator::Awake()
extern "C" void TimedObjectActivator_Awake_m10_410 (TimedObjectActivator_t10_94 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Activate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Activate_m10_411 (TimedObjectActivator_t10_94 * __this, Entry_t10_88 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::Deactivate(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_Deactivate_m10_412 (TimedObjectActivator_t10_94 * __this, Entry_t10_88 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityStandardAssets.Utility.TimedObjectActivator::ReloadLevel(UnityStandardAssets.Utility.TimedObjectActivator/Entry)
extern "C" Object_t * TimedObjectActivator_ReloadLevel_m10_413 (TimedObjectActivator_t10_94 * __this, Entry_t10_88 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
