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

// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_t3_47;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
extern "C" void OrderedDictionary__ctor_m3_259 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
extern "C" void OrderedDictionary__ctor_m3_260 (OrderedDictionary_t3_47 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Collections.IEqualityComparer)
extern "C" void OrderedDictionary__ctor_m3_261 (OrderedDictionary_t3_47 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void OrderedDictionary__ctor_m3_262 (OrderedDictionary_t3_47 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OrderedDictionary__ctor_m3_263 (OrderedDictionary_t3_47 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3_264 (OrderedDictionary_t3_47 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m3_265 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool OrderedDictionary_System_Collections_ICollection_get_IsSynchronized_m3_266 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m3_267 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool OrderedDictionary_System_Collections_IDictionary_get_IsFixedSize_m3_268 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
extern "C" void OrderedDictionary_OnDeserialization_m3_269 (OrderedDictionary_t3_47 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OrderedDictionary_GetObjectData_m3_270 (OrderedDictionary_t3_47 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
extern "C" int32_t OrderedDictionary_get_Count_m3_271 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
extern "C" void OrderedDictionary_CopyTo_m3_272 (OrderedDictionary_t3_47 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::get_IsReadOnly()
extern "C" bool OrderedDictionary_get_IsReadOnly_m3_273 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
extern "C" Object_t * OrderedDictionary_get_Item_m3_274 (OrderedDictionary_t3_47 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
extern "C" void OrderedDictionary_set_Item_m3_275 (OrderedDictionary_t3_47 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Int32)
extern "C" Object_t * OrderedDictionary_get_Item_m3_276 (OrderedDictionary_t3_47 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Int32,System.Object)
extern "C" void OrderedDictionary_set_Item_m3_277 (OrderedDictionary_t3_47 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Keys()
extern "C" Object_t * OrderedDictionary_get_Keys_m3_278 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
extern "C" Object_t * OrderedDictionary_get_Values_m3_279 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
extern "C" void OrderedDictionary_Add_m3_280 (OrderedDictionary_t3_47 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Clear()
extern "C" void OrderedDictionary_Clear_m3_281 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
extern "C" bool OrderedDictionary_Contains_m3_282 (OrderedDictionary_t3_47 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
extern "C" Object_t * OrderedDictionary_GetEnumerator_m3_283 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
extern "C" void OrderedDictionary_Remove_m3_284 (OrderedDictionary_t3_47 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.OrderedDictionary::FindListEntry(System.Object)
extern "C" int32_t OrderedDictionary_FindListEntry_m3_285 (OrderedDictionary_t3_47 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::WriteCheck()
extern "C" void OrderedDictionary_WriteCheck_m3_286 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.OrderedDictionary System.Collections.Specialized.OrderedDictionary::AsReadOnly()
extern "C" OrderedDictionary_t3_47 * OrderedDictionary_AsReadOnly_m3_287 (OrderedDictionary_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Insert(System.Int32,System.Object,System.Object)
extern "C" void OrderedDictionary_Insert_m3_288 (OrderedDictionary_t3_47 * __this, int32_t ___index, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::RemoveAt(System.Int32)
extern "C" void OrderedDictionary_RemoveAt_m3_289 (OrderedDictionary_t3_47 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
