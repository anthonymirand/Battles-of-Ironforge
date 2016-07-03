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

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t3_862;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1442;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3_26;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
extern "C" void NodeHelper__ctor_m3_6886_gshared (NodeHelper_t3_862 * __this, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper__ctor_m3_6886(__this, ___cmp, method) (( void (*) (NodeHelper_t3_862 *, Object_t*, const MethodInfo*))NodeHelper__ctor_m3_6886_gshared)(__this, ___cmp, method)
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::.cctor()
extern "C" void NodeHelper__cctor_m3_6887_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define NodeHelper__cctor_m3_6887(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))NodeHelper__cctor_m3_6887_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::Compare(TKey,System.Collections.Generic.RBTree/Node)
extern "C" int32_t NodeHelper_Compare_m3_6888_gshared (NodeHelper_t3_862 * __this, Object_t * ___key, Node_t3_26 * ___node, const MethodInfo* method);
#define NodeHelper_Compare_m3_6888(__this, ___key, ___node, method) (( int32_t (*) (NodeHelper_t3_862 *, Object_t *, Node_t3_26 *, const MethodInfo*))NodeHelper_Compare_m3_6888_gshared)(__this, ___key, ___node, method)
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::CreateNode(TKey)
extern "C" Node_t3_26 * NodeHelper_CreateNode_m3_6889_gshared (NodeHelper_t3_862 * __this, Object_t * ___key, const MethodInfo* method);
#define NodeHelper_CreateNode_m3_6889(__this, ___key, method) (( Node_t3_26 * (*) (NodeHelper_t3_862 *, Object_t *, const MethodInfo*))NodeHelper_CreateNode_m3_6889_gshared)(__this, ___key, method)
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
extern "C" NodeHelper_t3_862 * NodeHelper_GetHelper_m3_6890_gshared (Object_t * __this /* static, unused */, Object_t* ___cmp, const MethodInfo* method);
#define NodeHelper_GetHelper_m3_6890(__this /* static, unused */, ___cmp, method) (( NodeHelper_t3_862 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))NodeHelper_GetHelper_m3_6890_gshared)(__this /* static, unused */, ___cmp, method)
