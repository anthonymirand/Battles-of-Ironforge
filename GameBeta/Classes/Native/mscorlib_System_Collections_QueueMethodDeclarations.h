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

// System.Collections.Queue
struct Queue_t1_183;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Queue::.ctor()
extern "C" void Queue__ctor_m1_1843 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C" void Queue__ctor_m1_1844 (Queue_t1_183 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C" void Queue__ctor_m1_1845 (Queue_t1_183 * __this, int32_t ___capacity, float ___growFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C" int32_t Queue_get_Count_m1_1846 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
extern "C" bool Queue_get_IsSynchronized_m1_1847 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C" Object_t * Queue_get_SyncRoot_m1_1848 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C" void Queue_CopyTo_m1_1849 (Queue_t1_183 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C" Object_t * Queue_GetEnumerator_m1_1850 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Clone()
extern "C" Object_t * Queue_Clone_m1_1851 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
extern "C" void Queue_Clear_m1_1852 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
extern "C" Object_t * Queue_Dequeue_m1_1853 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
extern "C" void Queue_Enqueue_m1_1854 (Queue_t1_183 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
extern "C" Object_t * Queue_Peek_m1_1855 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
extern "C" ObjectU5BU5D_t1_158* Queue_ToArray_m1_1856 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
extern "C" void Queue_grow_m1_1857 (Queue_t1_183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
