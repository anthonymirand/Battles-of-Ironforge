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

// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t3_865;
// System.Object
struct Object_t;
// System.Collections.Generic.RBTree/Node
struct Node_t3_26;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey)
extern "C" void Node__ctor_m3_6861_gshared (Node_t3_865 * __this, Object_t * ___key, const MethodInfo* method);
#define Node__ctor_m3_6861(__this, ___key, method) (( void (*) (Node_t3_865 *, Object_t *, const MethodInfo*))Node__ctor_m3_6861_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void Node__ctor_m3_6862_gshared (Node_t3_865 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Node__ctor_m3_6862(__this, ___key, ___value, method) (( void (*) (Node_t3_865 *, Object_t *, Object_t *, const MethodInfo*))Node__ctor_m3_6862_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::SwapValue(System.Collections.Generic.RBTree/Node)
extern "C" void Node_SwapValue_m3_6863_gshared (Node_t3_865 * __this, Node_t3_26 * ___other, const MethodInfo* method);
#define Node_SwapValue_m3_6863(__this, ___other, method) (( void (*) (Node_t3_865 *, Node_t3_26 *, const MethodInfo*))Node_SwapValue_m3_6863_gshared)(__this, ___other, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsKV()
extern "C" KeyValuePair_2_t1_1328  Node_AsKV_m3_6864_gshared (Node_t3_865 * __this, const MethodInfo* method);
#define Node_AsKV_m3_6864(__this, method) (( KeyValuePair_2_t1_1328  (*) (Node_t3_865 *, const MethodInfo*))Node_AsKV_m3_6864_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>::AsDE()
extern "C" DictionaryEntry_t1_168  Node_AsDE_m3_6865_gshared (Node_t3_865 * __this, const MethodInfo* method);
#define Node_AsDE_m3_6865(__this, method) (( DictionaryEntry_t1_168  (*) (Node_t3_865 *, const MethodInfo*))Node_AsDE_m3_6865_gshared)(__this, method)
