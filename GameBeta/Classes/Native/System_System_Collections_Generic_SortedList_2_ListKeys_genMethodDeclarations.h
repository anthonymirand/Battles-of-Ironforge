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

// System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>
struct ListKeys_t3_870;
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t3_869;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_960;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ListKeys__ctor_m3_6959_gshared (ListKeys_t3_870 * __this, SortedList_2_t3_869 * ___host, const MethodInfo* method);
#define ListKeys__ctor_m3_6959(__this, ___host, method) (( void (*) (ListKeys_t3_870 *, SortedList_2_t3_869 *, const MethodInfo*))ListKeys__ctor_m3_6959_gshared)(__this, ___host, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListKeys_System_Collections_IEnumerable_GetEnumerator_m3_6960_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_System_Collections_IEnumerable_GetEnumerator_m3_6960(__this, method) (( Object_t * (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_System_Collections_IEnumerable_GetEnumerator_m3_6960_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::Add(TKey)
extern "C" void ListKeys_Add_m3_6961_gshared (ListKeys_t3_870 * __this, Object_t * ___item, const MethodInfo* method);
#define ListKeys_Add_m3_6961(__this, ___item, method) (( void (*) (ListKeys_t3_870 *, Object_t *, const MethodInfo*))ListKeys_Add_m3_6961_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::Remove(TKey)
extern "C" bool ListKeys_Remove_m3_6962_gshared (ListKeys_t3_870 * __this, Object_t * ___key, const MethodInfo* method);
#define ListKeys_Remove_m3_6962(__this, ___key, method) (( bool (*) (ListKeys_t3_870 *, Object_t *, const MethodInfo*))ListKeys_Remove_m3_6962_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::Clear()
extern "C" void ListKeys_Clear_m3_6963_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_Clear_m3_6963(__this, method) (( void (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_Clear_m3_6963_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void ListKeys_CopyTo_m3_6964_gshared (ListKeys_t3_870 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListKeys_CopyTo_m3_6964(__this, ___array, ___arrayIndex, method) (( void (*) (ListKeys_t3_870 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))ListKeys_CopyTo_m3_6964_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::Contains(TKey)
extern "C" bool ListKeys_Contains_m3_6965_gshared (ListKeys_t3_870 * __this, Object_t * ___item, const MethodInfo* method);
#define ListKeys_Contains_m3_6965(__this, ___item, method) (( bool (*) (ListKeys_t3_870 *, Object_t *, const MethodInfo*))ListKeys_Contains_m3_6965_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::IndexOf(TKey)
extern "C" int32_t ListKeys_IndexOf_m3_6966_gshared (ListKeys_t3_870 * __this, Object_t * ___item, const MethodInfo* method);
#define ListKeys_IndexOf_m3_6966(__this, ___item, method) (( int32_t (*) (ListKeys_t3_870 *, Object_t *, const MethodInfo*))ListKeys_IndexOf_m3_6966_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::Insert(System.Int32,TKey)
extern "C" void ListKeys_Insert_m3_6967_gshared (ListKeys_t3_870 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ListKeys_Insert_m3_6967(__this, ___index, ___item, method) (( void (*) (ListKeys_t3_870 *, int32_t, Object_t *, const MethodInfo*))ListKeys_Insert_m3_6967_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void ListKeys_RemoveAt_m3_6968_gshared (ListKeys_t3_870 * __this, int32_t ___index, const MethodInfo* method);
#define ListKeys_RemoveAt_m3_6968(__this, ___index, method) (( void (*) (ListKeys_t3_870 *, int32_t, const MethodInfo*))ListKeys_RemoveAt_m3_6968_gshared)(__this, ___index, method)
// TKey System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::get_Item(System.Int32)
extern "C" Object_t * ListKeys_get_Item_m3_6969_gshared (ListKeys_t3_870 * __this, int32_t ___index, const MethodInfo* method);
#define ListKeys_get_Item_m3_6969(__this, ___index, method) (( Object_t * (*) (ListKeys_t3_870 *, int32_t, const MethodInfo*))ListKeys_get_Item_m3_6969_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::set_Item(System.Int32,TKey)
extern "C" void ListKeys_set_Item_m3_6970_gshared (ListKeys_t3_870 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ListKeys_set_Item_m3_6970(__this, ___index, ___value, method) (( void (*) (ListKeys_t3_870 *, int32_t, Object_t *, const MethodInfo*))ListKeys_set_Item_m3_6970_gshared)(__this, ___index, ___value, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ListKeys_GetEnumerator_m3_6971_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_GetEnumerator_m3_6971(__this, method) (( Object_t* (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_GetEnumerator_m3_6971_gshared)(__this, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::get_Count()
extern "C" int32_t ListKeys_get_Count_m3_6972_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_get_Count_m3_6972(__this, method) (( int32_t (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_get_Count_m3_6972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::get_IsSynchronized()
extern "C" bool ListKeys_get_IsSynchronized_m3_6973_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_get_IsSynchronized_m3_6973(__this, method) (( bool (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_get_IsSynchronized_m3_6973_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ListKeys_get_IsReadOnly_m3_6974_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_get_IsReadOnly_m3_6974(__this, method) (( bool (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_get_IsReadOnly_m3_6974_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::get_SyncRoot()
extern "C" Object_t * ListKeys_get_SyncRoot_m3_6975_gshared (ListKeys_t3_870 * __this, const MethodInfo* method);
#define ListKeys_get_SyncRoot_m3_6975(__this, method) (( Object_t * (*) (ListKeys_t3_870 *, const MethodInfo*))ListKeys_get_SyncRoot_m3_6975_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>::CopyTo(System.Array,System.Int32)
extern "C" void ListKeys_CopyTo_m3_6976_gshared (ListKeys_t3_870 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListKeys_CopyTo_m3_6976(__this, ___array, ___arrayIndex, method) (( void (*) (ListKeys_t3_870 *, Array_t *, int32_t, const MethodInfo*))ListKeys_CopyTo_m3_6976_gshared)(__this, ___array, ___arrayIndex, method)
