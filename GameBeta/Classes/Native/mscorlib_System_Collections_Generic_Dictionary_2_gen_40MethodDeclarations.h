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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1734;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1590;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2280;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2277;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_2340;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_2341;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1738;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1742;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_12799_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12799(__this, method) (( void (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2__ctor_m1_12799_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_12801_gshared (Dictionary_2_t1_1734 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12801(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1734 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_12801_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_12803_gshared (Dictionary_2_t1_1734 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12803(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1734 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_12803_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_12805_gshared (Dictionary_2_t1_1734 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12805(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1734 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_12805_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12807_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12807(__this, method) (( Object_t* (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12807_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12809_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12809(__this, method) (( Object_t* (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12809_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12811_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12811(__this, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12811_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_12813_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_12813(__this, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_12813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12815_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12815(__this, method) (( bool (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12817_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12817(__this, method) (( bool (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_12819_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_12819(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_12819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_12821_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_12821(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1734 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_12821_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_12823_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_12823(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1734 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_12823_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_12825_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_12825(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_12825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_12827_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_12827(__this, ___key, method) (( void (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_12827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12829_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12829(__this, method) (( bool (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12831_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12831(__this, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12833_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12833(__this, method) (( bool (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12835_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2_t1_1736  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12835(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1734 *, KeyValuePair_2_t1_1736 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12835_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12837_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2_t1_1736  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12837(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1734 *, KeyValuePair_2_t1_1736 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12837_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12839_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2U5BU5D_t1_2340* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12839(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1734 *, KeyValuePair_2U5BU5D_t1_2340*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12839_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12841_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2_t1_1736  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12841(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1734 *, KeyValuePair_2_t1_1736 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12841_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_12843_gshared (Dictionary_2_t1_1734 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_12843(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1734 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_12843_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12845_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12845(__this, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12845_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12847_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12847(__this, method) (( Object_t* (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12847_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12849_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12849(__this, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12849_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_12851_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_12851(__this, method) (( int32_t (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_get_Count_m1_12851_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_12853_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_12853(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_12853_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_12855_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_12855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1734 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_12855_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_12857_gshared (Dictionary_2_t1_1734 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_12857(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1734 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_12857_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_12859_gshared (Dictionary_2_t1_1734 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_12859(__this, ___size, method) (( void (*) (Dictionary_2_t1_1734 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_12859_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_12861_gshared (Dictionary_2_t1_1734 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_12861(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1734 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_12861_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1736  Dictionary_2_make_pair_m1_12863_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_12863(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1736  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_12863_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m1_12865_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_12865(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_12865_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_12867_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_12867(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_12867_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_12869_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2U5BU5D_t1_2340* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_12869(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1734 *, KeyValuePair_2U5BU5D_t1_2340*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_12869_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_12871_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_12871(__this, method) (( void (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_Resize_m1_12871_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_12873_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_12873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1734 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_12873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_12875_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_12875(__this, method) (( void (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_Clear_m1_12875_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_12877_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_12877(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1734 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_12877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_12879_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_12879(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_12879_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_12881_gshared (Dictionary_2_t1_1734 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_12881(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1734 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_12881_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_12883_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_12883(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_12883_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_12885_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_12885(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1734 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_12885_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_12887_gshared (Dictionary_2_t1_1734 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_12887(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1734 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_12887_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1738 * Dictionary_2_get_Keys_m1_12889_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_12889(__this, method) (( KeyCollection_t1_1738 * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_get_Keys_m1_12889_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1742 * Dictionary_2_get_Values_m1_12891_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_12891(__this, method) (( ValueCollection_t1_1742 * (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_get_Values_m1_12891_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_12893_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_12893(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_12893_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_12895_gshared (Dictionary_2_t1_1734 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_12895(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1734 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_12895_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_12897_gshared (Dictionary_2_t1_1734 * __this, KeyValuePair_2_t1_1736  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_12897(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1734 *, KeyValuePair_2_t1_1736 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_12897_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1740  Dictionary_2_GetEnumerator_m1_12899_gshared (Dictionary_2_t1_1734 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_12899(__this, method) (( Enumerator_t1_1740  (*) (Dictionary_2_t1_1734 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_12899_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_12901_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_12901(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_12901_gshared)(__this /* static, unused */, ___key, ___value, method)
