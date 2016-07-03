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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_1028;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1_1183;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_2282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2280;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1_1668;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1_1671;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_2328;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1_1672;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1_6246_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1__ctor_m1_6246(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1__ctor_m1_6246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_6208_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_6208(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1__ctor_m1_6208_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_11821_gshared (List_1_t1_1028 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_11821(__this, ___capacity, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1__ctor_m1_11821_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m1_11822_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_11822(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_11822_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11823_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11823(__this, method) (( Object_t* (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11823_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_11824_gshared (List_1_t1_1028 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_11824(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1028 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_11824_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_11825_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_11825(__this, method) (( Object_t * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_11825_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_11826_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_11826(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_11826_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_11827_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_11827(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_11827_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_11828_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_11828(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_11828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_11829_gshared (List_1_t1_1028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_11829(__this, ___index, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_11829_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_11830_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_11830(__this, ___item, method) (( void (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_11830_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11831_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11831(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_11832_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_11832(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_11832_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_11833_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_11833(__this, method) (( Object_t * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_11833_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_11834_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_11834(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_11834_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_11835_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_11835(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_11835_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_11836_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_11836(__this, ___index, method) (( Object_t * (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_11836_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_11837_gshared (List_1_t1_1028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_11837(__this, ___index, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_11837_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m1_11838_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m1_11838(__this, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Add_m1_11838_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_11839_gshared (List_1_t1_1028 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_11839(__this, ___newCount, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_11839_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m1_11840_gshared (List_1_t1_1028 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m1_11840(__this, ___idx, ___count, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m1_11840_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_11841_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_11841(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_11841_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_11842_gshared (List_1_t1_1028 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_11842(__this, ___enumerable, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_11842_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_6423_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_6423(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_6423_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1668 * List_1_AsReadOnly_m1_11843_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_11843(__this, method) (( ReadOnlyCollection_1_t1_1668 * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_AsReadOnly_m1_11843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m1_11844_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Clear_m1_11844(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Clear_m1_11844_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m1_11845_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_11845(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Contains_m1_11845_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_11846_gshared (List_1_t1_1028 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_11846(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1028 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))List_1_CopyTo_m1_11846_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m1_11847_gshared (List_1_t1_1028 * __this, Predicate_1_t1_1671 * ___match, const MethodInfo* method);
#define List_1_Find_m1_11847(__this, ___match, method) (( int32_t (*) (List_1_t1_1028 *, Predicate_1_t1_1671 *, const MethodInfo*))List_1_Find_m1_11847_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_11848_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1671 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_11848(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1671 *, const MethodInfo*))List_1_CheckMatch_m1_11848_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m1_11849_gshared (List_1_t1_1028 * __this, Predicate_1_t1_1671 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m1_11849(__this, ___match, method) (( int32_t (*) (List_1_t1_1028 *, Predicate_1_t1_1671 *, const MethodInfo*))List_1_FindIndex_m1_11849_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_11850_gshared (List_1_t1_1028 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1671 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_11850(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, int32_t, Predicate_1_t1_1671 *, const MethodInfo*))List_1_GetIndex_m1_11850_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1123  List_1_GetEnumerator_m1_6209_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_6209(__this, method) (( Enumerator_t1_1123  (*) (List_1_t1_1028 *, const MethodInfo*))List_1_GetEnumerator_m1_6209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_11851_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_11851(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_IndexOf_m1_11851_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_11852_gshared (List_1_t1_1028 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_11852(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_11852_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_11853_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_11853(__this, ___index, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_11853_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_11854_gshared (List_1_t1_1028 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_11854(__this, ___index, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m1_11854_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_11855_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_11855(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_11855_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m1_11856_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_11856(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Remove_m1_11856_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_11857_gshared (List_1_t1_1028 * __this, Predicate_1_t1_1671 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_11857(__this, ___match, method) (( int32_t (*) (List_1_t1_1028 *, Predicate_1_t1_1671 *, const MethodInfo*))List_1_RemoveAll_m1_11857_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_11858_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_11858(__this, ___index, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_11858_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m1_11859_gshared (List_1_t1_1028 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m1_11859(__this, ___index, ___count, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m1_11859_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m1_11860_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_11860(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Reverse_m1_11860_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m1_11861_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Sort_m1_11861(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Sort_m1_11861_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m1_11862_gshared (List_1_t1_1028 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m1_11862(__this, ___comparer, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_Sort_m1_11862_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_11863_gshared (List_1_t1_1028 * __this, Comparison_1_t1_1672 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_11863(__this, ___comparison, method) (( void (*) (List_1_t1_1028 *, Comparison_1_t1_1672 *, const MethodInfo*))List_1_Sort_m1_11863_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1_161* List_1_ToArray_m1_11864_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_11864(__this, method) (( Int32U5BU5D_t1_161* (*) (List_1_t1_1028 *, const MethodInfo*))List_1_ToArray_m1_11864_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_11865_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_11865(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_TrimExcess_m1_11865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_11866_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_11866(__this, method) (( int32_t (*) (List_1_t1_1028 *, const MethodInfo*))List_1_get_Capacity_m1_11866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_11867_gshared (List_1_t1_1028 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_11867(__this, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_11867_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m1_11868_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_11868(__this, method) (( int32_t (*) (List_1_t1_1028 *, const MethodInfo*))List_1_get_Count_m1_11868_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m1_11869_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_11869(__this, ___index, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_get_Item_m1_11869_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_11870_gshared (List_1_t1_1028 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_11870(__this, ___index, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m1_11870_gshared)(__this, ___index, ___value, method)
