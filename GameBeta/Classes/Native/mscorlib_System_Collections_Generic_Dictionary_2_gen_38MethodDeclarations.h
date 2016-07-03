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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1563;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2277;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1_2305;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_2304;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_2306;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1567;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1571;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_10565_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10565(__this, method) (( void (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2__ctor_m1_10565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10566_gshared (Dictionary_2_t1_1563 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10566(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10566_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_10568_gshared (Dictionary_2_t1_1563 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10568(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1563 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_10568_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_10570_gshared (Dictionary_2_t1_1563 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10570(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1563 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_10570_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10572_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10572(__this, method) (( Object_t* (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10572_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10574_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10574(__this, method) (( Object_t* (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10574_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10576_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10576(__this, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10576_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_10578_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_10578(__this, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_10578_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10580_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10580(__this, method) (( bool (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10582_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10582(__this, method) (( bool (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10582_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_10584_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_10584(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_10584_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_10586_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_10586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_10586_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_10588_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_10588(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_10588_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_10590_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_10590(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_10590_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_10592_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_10592(__this, ___key, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_10592_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10594_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10594(__this, method) (( bool (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10594_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10596_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10596(__this, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10596_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10598_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10598(__this, method) (( bool (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10598_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10600_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2_t1_1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10600(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1563 *, KeyValuePair_2_t1_1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10600_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10602_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2_t1_1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10602(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1563 *, KeyValuePair_2_t1_1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10602_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10604_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2U5BU5D_t1_2304* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10604(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1563 *, KeyValuePair_2U5BU5D_t1_2304*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10604_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10606_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2_t1_1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10606(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1563 *, KeyValuePair_2_t1_1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10606_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_10608_gshared (Dictionary_2_t1_1563 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_10608(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1563 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_10608_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10610_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10610(__this, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10610_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10612_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10612(__this, method) (( Object_t* (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10612_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10614_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10614(__this, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10614_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_10616_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_10616(__this, method) (( int32_t (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_get_Count_m1_10616_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_10618_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_10618(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_10618_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_10620_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_10620(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_10620_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_10622_gshared (Dictionary_2_t1_1563 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_10622(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1563 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_10622_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_10624_gshared (Dictionary_2_t1_1563 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_10624(__this, ___size, method) (( void (*) (Dictionary_2_t1_1563 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_10624_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_10626_gshared (Dictionary_2_t1_1563 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_10626(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1563 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_10626_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1565  Dictionary_2_make_pair_m1_10628_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_10628(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1565  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_10628_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_10630_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_10630(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m1_10630_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_10632_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_10632(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_10632_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_10634_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2U5BU5D_t1_2304* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_10634(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1563 *, KeyValuePair_2U5BU5D_t1_2304*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_10634_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_10636_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_10636(__this, method) (( void (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_Resize_m1_10636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_10638_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_10638(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_10638_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_10640_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_10640(__this, method) (( void (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_Clear_m1_10640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_10642_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_10642(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_10642_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_10644_gshared (Dictionary_2_t1_1563 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_10644(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1563 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_10644_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_10646_gshared (Dictionary_2_t1_1563 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_10646(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1563 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_10646_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_10648_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_10648(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_10648_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_10650_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_10650(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_10650_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_10652_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_10652(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_10652_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1_1567 * Dictionary_2_get_Keys_m1_10654_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_10654(__this, method) (( KeyCollection_t1_1567 * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_get_Keys_m1_10654_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1571 * Dictionary_2_get_Values_m1_10656_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_10656(__this, method) (( ValueCollection_t1_1571 * (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_get_Values_m1_10656_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_10658_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_10658(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_10658_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_10660_gshared (Dictionary_2_t1_1563 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_10660(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1563 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_10660_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_10662_gshared (Dictionary_2_t1_1563 * __this, KeyValuePair_2_t1_1565  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_10662(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1563 *, KeyValuePair_2_t1_1565 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_10662_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1569  Dictionary_2_GetEnumerator_m1_10664_gshared (Dictionary_2_t1_1563 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_10664(__this, method) (( Enumerator_t1_1569  (*) (Dictionary_2_t1_1563 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_10664_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_10666_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_10666(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_10666_gshared)(__this /* static, unused */, ___key, ___value, method)
