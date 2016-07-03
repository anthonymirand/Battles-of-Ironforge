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

// System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator
struct OrderedCollectionEnumerator_t3_45;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::.ctor(System.Collections.IEnumerator,System.Boolean)
extern "C" void OrderedCollectionEnumerator__ctor_m3_249 (OrderedCollectionEnumerator_t3_45 * __this, Object_t * ___listEnumerator, bool ___isKeyList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::get_Current()
extern "C" Object_t * OrderedCollectionEnumerator_get_Current_m3_250 (OrderedCollectionEnumerator_t3_45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::MoveNext()
extern "C" bool OrderedCollectionEnumerator_MoveNext_m3_251 (OrderedCollectionEnumerator_t3_45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedCollection/OrderedCollectionEnumerator::Reset()
extern "C" void OrderedCollectionEnumerator_Reset_m3_252 (OrderedCollectionEnumerator_t3_45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
