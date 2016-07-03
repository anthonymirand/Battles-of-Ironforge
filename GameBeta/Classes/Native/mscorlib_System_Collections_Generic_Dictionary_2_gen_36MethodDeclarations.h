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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1296;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1298;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2277;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2280;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_2279;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_2281;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1_1302;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_1306;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6889_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6889(__this, method) (( void (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2__ctor_m1_6889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6891_gshared (Dictionary_2_t1_1296 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6891(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6891_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6892_gshared (Dictionary_2_t1_1296 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6892(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1296 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6892_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6894_gshared (Dictionary_2_t1_1296 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6894(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1296 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_6894_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6896_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6896(__this, method) (( Object_t* (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6896_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6898_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6898(__this, method) (( Object_t* (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6898_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6900_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6900(__this, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6900_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_6902_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_6902(__this, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_6902_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6904_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6904(__this, method) (( bool (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6906_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6906(__this, method) (( bool (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6908_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6908(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6908_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6910_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6910(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6910_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6912_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6912_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6914_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6914(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6914_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6916_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6916(__this, ___key, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6916_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6918_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6918(__this, method) (( bool (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6920_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6920(__this, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6922_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6922(__this, method) (( bool (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6924_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2_t1_1299  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6924(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1296 *, KeyValuePair_2_t1_1299 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6924_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6926_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2_t1_1299  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6926(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1296 *, KeyValuePair_2_t1_1299 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6926_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6928_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2U5BU5D_t1_2279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6928(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1296 *, KeyValuePair_2U5BU5D_t1_2279*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6928_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6930_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2_t1_1299  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6930(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1296 *, KeyValuePair_2_t1_1299 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6930_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6932_gshared (Dictionary_2_t1_1296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6932_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6934_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6934(__this, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6934_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6936_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6936(__this, method) (( Object_t* (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6936_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6938_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6938(__this, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6940_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6940(__this, method) (( int32_t (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_get_Count_m1_6940_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_6942_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6942(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6942_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6944_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6944(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_6944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6946_gshared (Dictionary_2_t1_1296 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6946(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1296 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6946_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6948_gshared (Dictionary_2_t1_1296 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6948(__this, ___size, method) (( void (*) (Dictionary_2_t1_1296 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6948_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6950_gshared (Dictionary_2_t1_1296 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1296 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6950_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1299  Dictionary_2_make_pair_m1_6952_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6952(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1299  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_6952_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_6954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_6954(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1_6954_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_6956_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6956(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_6956_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6958_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2U5BU5D_t1_2279* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1296 *, KeyValuePair_2U5BU5D_t1_2279*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6958_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_6960_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6960(__this, method) (( void (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_Resize_m1_6960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6962_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6962(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_6962_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_6964_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6964(__this, method) (( void (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_Clear_m1_6964_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6966_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6966(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6966_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6968_gshared (Dictionary_2_t1_1296 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6968(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1296 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_6968_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6970_gshared (Dictionary_2_t1_1296 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6970(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1296 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6970_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6972_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6972(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6972_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6974_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6974(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6974_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6976_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6976(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1296 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6976_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1_1302 * Dictionary_2_get_Keys_m1_6978_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_6978(__this, method) (( KeyCollection_t1_1302 * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_get_Keys_m1_6978_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1306 * Dictionary_2_get_Values_m1_6980_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6980(__this, method) (( ValueCollection_t1_1306 * (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_get_Values_m1_6980_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6982_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6982(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6982_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_6984_gshared (Dictionary_2_t1_1296 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6984(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_1296 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6984_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6986_gshared (Dictionary_2_t1_1296 * __this, KeyValuePair_2_t1_1299  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6986(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1296 *, KeyValuePair_2_t1_1299 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6986_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1304  Dictionary_2_GetEnumerator_m1_6988_gshared (Dictionary_2_t1_1296 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6988(__this, method) (( Enumerator_t1_1304  (*) (Dictionary_2_t1_1296 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6988_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_6990_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6990(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6990_gshared)(__this /* static, unused */, ___key, ___value, method)
