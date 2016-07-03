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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1326;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2277;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1443;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_2285;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1_1330;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1_1334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7181_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7181(__this, method) (( void (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2__ctor_m1_7181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7182_gshared (Dictionary_2_t1_1326 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7182(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7182_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7183_gshared (Dictionary_2_t1_1326 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7183(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1326 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7183_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7184_gshared (Dictionary_2_t1_1326 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7184(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1326 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_7184_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7185_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7185(__this, method) (( Object_t* (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7185_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7186_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7186(__this, method) (( Object_t* (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7186_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_7187_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_7187(__this, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_7187_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_7188_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_7188(__this, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_7188_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_7189_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_7189(__this, method) (( bool (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_7189_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_7190_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_7190(__this, method) (( bool (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_7190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7191_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7191(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7191_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7192_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7192(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7192_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7193_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7193(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7193_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7194_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7194(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7194_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7195_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7195(__this, ___key, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7195_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7196_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7196(__this, method) (( bool (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7196_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7197_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7197(__this, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7197_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7198_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7198(__this, method) (( bool (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7198_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7199_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2_t1_1328  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7199(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1326 *, KeyValuePair_2_t1_1328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7199_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7200_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2_t1_1328  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7200(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1326 *, KeyValuePair_2_t1_1328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7200_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7201_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2U5BU5D_t1_1443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7201(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1326 *, KeyValuePair_2U5BU5D_t1_1443*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7201_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7202_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2_t1_1328  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7202(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1326 *, KeyValuePair_2_t1_1328 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7202_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7203_gshared (Dictionary_2_t1_1326 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7203(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1326 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7203_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7204_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7204(__this, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7204_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7205_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7205(__this, method) (( Object_t* (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7205_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7206_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7206(__this, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7206_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7207_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7207(__this, method) (( int32_t (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_get_Count_m1_7207_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_7208_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7208(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7208_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7209_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7209(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_7209_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7210_gshared (Dictionary_2_t1_1326 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7210(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1326 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7210_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7211_gshared (Dictionary_2_t1_1326 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7211(__this, ___size, method) (( void (*) (Dictionary_2_t1_1326 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7211_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7212_gshared (Dictionary_2_t1_1326 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7212(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1326 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7212_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1328  Dictionary_2_make_pair_m1_7213_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7213(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1328  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_7213_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_7214_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_7214(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_7214_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_7215_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7215(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_7215_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7216_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2U5BU5D_t1_1443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7216(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1326 *, KeyValuePair_2U5BU5D_t1_1443*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7216_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_7217_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7217(__this, method) (( void (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_Resize_m1_7217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7218_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7218(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_7218_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_7219_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7219(__this, method) (( void (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_Clear_m1_7219_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7220_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7220(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7220_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7221_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7221(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_7221_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7222_gshared (Dictionary_2_t1_1326 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7222(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1326 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7222_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7223_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7223(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7223_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7224_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7224(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7224_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7225_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7225(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1326 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_7225_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1330 * Dictionary_2_get_Keys_m1_7226_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_7226(__this, method) (( KeyCollection_t1_1330 * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_get_Keys_m1_7226_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1_1334 * Dictionary_2_get_Values_m1_7227_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7227(__this, method) (( ValueCollection_t1_1334 * (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_get_Values_m1_7227_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7228_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7228(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7228_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_7229_gshared (Dictionary_2_t1_1326 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7229(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1326 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7229_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7230_gshared (Dictionary_2_t1_1326 * __this, KeyValuePair_2_t1_1328  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7230(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1326 *, KeyValuePair_2_t1_1328 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7230_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1332  Dictionary_2_GetEnumerator_m1_7231_gshared (Dictionary_2_t1_1326 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7231(__this, method) (( Enumerator_t1_1332  (*) (Dictionary_2_t1_1326 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7231_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_7232_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7232(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7232_gshared)(__this /* static, unused */, ___key, ___value, method)
