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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3_41;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1_179;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3_42;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Type
struct Type_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3_39;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C" void NameObjectCollectionBase__ctor_m3_176 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
extern "C" void NameObjectCollectionBase__ctor_m3_177 (NameObjectCollectionBase_t3_41 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C" void NameObjectCollectionBase__ctor_m3_178 (NameObjectCollectionBase_t3_41 * __this, Object_t * ___equalityComparer, Object_t * ___comparer, Object_t * ___hcp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern "C" void NameObjectCollectionBase__ctor_m3_179 (NameObjectCollectionBase_t3_41 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameObjectCollectionBase__ctor_m3_180 (NameObjectCollectionBase_t3_41 * __this, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m3_181 (NameObjectCollectionBase_t3_41 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void NameObjectCollectionBase__ctor_m3_182 (NameObjectCollectionBase_t3_41 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameObjectCollectionBase__ctor_m3_183 (NameObjectCollectionBase_t3_41 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m3_184 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m3_185 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m3_186 (NameObjectCollectionBase_t3_41 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::get_EqualityComparer()
extern "C" Object_t * NameObjectCollectionBase_get_EqualityComparer_m3_187 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C" Object_t * NameObjectCollectionBase_get_Comparer_m3_188 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C" Object_t * NameObjectCollectionBase_get_HashCodeProvider_m3_189 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C" void NameObjectCollectionBase_Init_m3_190 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C" KeysCollection_t3_42 * NameObjectCollectionBase_get_Keys_m3_191 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m3_192 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase_GetObjectData_m3_193 (NameObjectCollectionBase_t3_41 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m3_194 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C" void NameObjectCollectionBase_OnDeserialization_m3_195 (NameObjectCollectionBase_t3_41 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m3_196 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::set_IsReadOnly(System.Boolean)
extern "C" void NameObjectCollectionBase_set_IsReadOnly_m3_197 (NameObjectCollectionBase_t3_41 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseAdd_m3_198 (NameObjectCollectionBase_t3_41 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C" void NameObjectCollectionBase_BaseClear_m3_199 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m3_200 (NameObjectCollectionBase_t3_41 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m3_201 (NameObjectCollectionBase_t3_41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
extern "C" StringU5BU5D_t1_206* NameObjectCollectionBase_BaseGetAllKeys_m3_202 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllValues()
extern "C" ObjectU5BU5D_t1_158* NameObjectCollectionBase_BaseGetAllValues_m3_203 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllValues(System.Type)
extern "C" ObjectU5BU5D_t1_158* NameObjectCollectionBase_BaseGetAllValues_m3_204 (NameObjectCollectionBase_t3_41 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m3_205 (NameObjectCollectionBase_t3_41 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::BaseHasKeys()
extern "C" bool NameObjectCollectionBase_BaseHasKeys_m3_206 (NameObjectCollectionBase_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C" void NameObjectCollectionBase_BaseRemove_m3_207 (NameObjectCollectionBase_t3_41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemoveAt(System.Int32)
extern "C" void NameObjectCollectionBase_BaseRemoveAt_m3_208 (NameObjectCollectionBase_t3_41 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.Int32,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m3_209 (NameObjectCollectionBase_t3_41 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m3_210 (NameObjectCollectionBase_t3_41 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C" _Item_t3_39 * NameObjectCollectionBase_FindFirstMatchedItem_m3_211 (NameObjectCollectionBase_t3_41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C" bool NameObjectCollectionBase_Equals_m3_212 (NameObjectCollectionBase_t3_41 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
