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

// System.Resources.ResourceReader/ResourceEnumerator
struct ResourceEnumerator_t1_379;
// System.Resources.ResourceReader
struct ResourceReader_t1_380;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Resources.ResourceReader/ResourceEnumerator::.ctor(System.Resources.ResourceReader)
extern "C" void ResourceEnumerator__ctor_m1_3252 (ResourceEnumerator_t1_379 * __this, ResourceReader_t1_380 * ___readerToEnumerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Resources.ResourceReader/ResourceEnumerator::get_Entry()
extern "C" DictionaryEntry_t1_168  ResourceEnumerator_get_Entry_m1_3253 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Key()
extern "C" Object_t * ResourceEnumerator_get_Key_m1_3254 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Value()
extern "C" Object_t * ResourceEnumerator_get_Value_m1_3255 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceReader/ResourceEnumerator::get_Current()
extern "C" Object_t * ResourceEnumerator_get_Current_m1_3256 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::MoveNext()
extern "C" bool ResourceEnumerator_MoveNext_m1_3257 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::Reset()
extern "C" void ResourceEnumerator_Reset_m1_3258 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceReader/ResourceEnumerator::FillCache()
extern "C" void ResourceEnumerator_FillCache_m1_3259 (ResourceEnumerator_t1_379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
