﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3_34;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t3_35;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C" void ListDictionary__ctor_m3_142 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C" void ListDictionary__ctor_m3_143 (ListDictionary_t3_34 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m3_144 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C" DictionaryNode_t3_35 * ListDictionary_FindEntry_m3_145 (ListDictionary_t3_34 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C" DictionaryNode_t3_35 * ListDictionary_FindEntry_m3_146 (ListDictionary_t3_34 * __this, Object_t * ___key, DictionaryNode_t3_35 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C" void ListDictionary_AddImpl_m3_147 (ListDictionary_t3_34 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t3_35 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C" int32_t ListDictionary_get_Count_m3_148 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C" bool ListDictionary_get_IsSynchronized_m3_149 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C" Object_t * ListDictionary_get_SyncRoot_m3_150 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C" void ListDictionary_CopyTo_m3_151 (ListDictionary_t3_34 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsFixedSize()
extern "C" bool ListDictionary_get_IsFixedSize_m3_152 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsReadOnly()
extern "C" bool ListDictionary_get_IsReadOnly_m3_153 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C" Object_t * ListDictionary_get_Item_m3_154 (ListDictionary_t3_34 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C" void ListDictionary_set_Item_m3_155 (ListDictionary_t3_34 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C" Object_t * ListDictionary_get_Keys_m3_156 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Values()
extern "C" Object_t * ListDictionary_get_Values_m3_157 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C" void ListDictionary_Add_m3_158 (ListDictionary_t3_34 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C" void ListDictionary_Clear_m3_159 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C" bool ListDictionary_Contains_m3_160 (ListDictionary_t3_34 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C" Object_t * ListDictionary_GetEnumerator_m3_161 (ListDictionary_t3_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C" void ListDictionary_Remove_m3_162 (ListDictionary_t3_34 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
