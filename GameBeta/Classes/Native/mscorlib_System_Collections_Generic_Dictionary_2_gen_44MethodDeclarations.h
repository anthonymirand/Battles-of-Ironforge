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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t1_1900;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2277;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1_2372;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t1_2371;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t1_2373;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1_1904;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t1_1908;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m1_15654_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15654(__this, method) (( void (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2__ctor_m1_15654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_15656_gshared (Dictionary_2_t1_1900 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15656(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_15656_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_15658_gshared (Dictionary_2_t1_1900 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15658(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1900 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_15658_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_15660_gshared (Dictionary_2_t1_1900 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15660(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1900 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_15660_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15662_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15662(__this, method) (( Object_t* (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15662_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15664_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15664(__this, method) (( Object_t* (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15664_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15666_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15666(__this, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15666_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_15668_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_15668(__this, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_15668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15670_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15670(__this, method) (( bool (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15670_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15672_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15672(__this, method) (( bool (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15672_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_15674_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_15674(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_15674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_15676_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_15676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_15676_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_15678_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_15678(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_15678_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_15680_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_15680(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_15680_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_15682_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_15682(__this, ___key, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_15682_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15684_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15684(__this, method) (( bool (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15686_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15686(__this, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15686_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15688_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15688(__this, method) (( bool (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15690_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2_t1_1902  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15690(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1900 *, KeyValuePair_2_t1_1902 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15690_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15692_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2_t1_1902  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15692(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1900 *, KeyValuePair_2_t1_1902 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15692_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15694_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2U5BU5D_t1_2371* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1900 *, KeyValuePair_2U5BU5D_t1_2371*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15694_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15696_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2_t1_1902  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15696(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1900 *, KeyValuePair_2_t1_1902 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15696_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_15698_gshared (Dictionary_2_t1_1900 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_15698(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1900 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_15698_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15700_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15700(__this, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15700_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15702_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15702(__this, method) (( Object_t* (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15702_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15704_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15704(__this, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15704_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_15706_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_15706(__this, method) (( int32_t (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_get_Count_m1_15706_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m1_15708_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_15708(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_15708_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_15710_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_15710(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m1_15710_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_15712_gshared (Dictionary_2_t1_1900 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_15712(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1900 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_15712_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_15714_gshared (Dictionary_2_t1_1900 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_15714(__this, ___size, method) (( void (*) (Dictionary_2_t1_1900 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_15714_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_15716_gshared (Dictionary_2_t1_1900 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_15716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1900 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_15716_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1902  Dictionary_2_make_pair_m1_15718_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_15718(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1902  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m1_15718_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_15720_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_15720(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m1_15720_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m1_15722_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_15722(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m1_15722_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_15724_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2U5BU5D_t1_2371* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_15724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1900 *, KeyValuePair_2U5BU5D_t1_2371*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_15724_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m1_15726_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_15726(__this, method) (( void (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_Resize_m1_15726_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_15728_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_15728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m1_15728_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m1_15730_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_15730(__this, method) (( void (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_Clear_m1_15730_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_15732_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_15732(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_15732_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_15734_gshared (Dictionary_2_t1_1900 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_15734(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1900 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_15734_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_15736_gshared (Dictionary_2_t1_1900 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_15736(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1900 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_15736_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_15738_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_15738(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_15738_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_15740_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_15740(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_15740_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_15742_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_15742(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1900 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_15742_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t1_1904 * Dictionary_2_get_Keys_m1_15744_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_15744(__this, method) (( KeyCollection_t1_1904 * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_get_Keys_m1_15744_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t1_1908 * Dictionary_2_get_Values_m1_15746_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_15746(__this, method) (( ValueCollection_t1_1908 * (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_get_Values_m1_15746_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_15748_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_15748(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_15748_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m1_15750_gshared (Dictionary_2_t1_1900 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_15750(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t1_1900 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_15750_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_15752_gshared (Dictionary_2_t1_1900 * __this, KeyValuePair_2_t1_1902  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_15752(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1900 *, KeyValuePair_2_t1_1902 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_15752_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1906  Dictionary_2_GetEnumerator_m1_15754_gshared (Dictionary_2_t1_1900 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_15754(__this, method) (( Enumerator_t1_1906  (*) (Dictionary_2_t1_1900 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_15754_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_15756_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_15756(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_15756_gshared)(__this /* static, unused */, ___key, ___value, method)
