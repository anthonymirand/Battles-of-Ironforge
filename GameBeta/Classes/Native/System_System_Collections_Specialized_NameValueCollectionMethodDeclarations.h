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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3_43;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1_179;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.String[]
struct StringU5BU5D_t1_206;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m3_213 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
extern "C" void NameValueCollection__ctor_m3_214 (NameValueCollection_t3_43 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection__ctor_m3_215 (NameValueCollection_t3_43 * __this, NameValueCollection_t3_43 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameValueCollection__ctor_m3_216 (NameValueCollection_t3_43 * __this, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection__ctor_m3_217 (NameValueCollection_t3_43 * __this, int32_t ___capacity, NameValueCollection_t3_43 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m3_218 (NameValueCollection_t3_43 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameValueCollection__ctor_m3_219 (NameValueCollection_t3_43 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.IEqualityComparer)
extern "C" void NameValueCollection__ctor_m3_220 (NameValueCollection_t3_43 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void NameValueCollection__ctor_m3_221 (NameValueCollection_t3_43 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
extern "C" StringU5BU5D_t1_206* NameValueCollection_get_AllKeys_m3_222 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.Int32)
extern "C" String_t* NameValueCollection_get_Item_m3_223 (NameValueCollection_t3_43 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C" String_t* NameValueCollection_get_Item_m3_224 (NameValueCollection_t3_43 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C" void NameValueCollection_set_Item_m3_225 (NameValueCollection_t3_43 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection_Add_m3_226 (NameValueCollection_t3_43 * __this, NameValueCollection_t3_43 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C" void NameValueCollection_Add_m3_227 (NameValueCollection_t3_43 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Clear()
extern "C" void NameValueCollection_Clear_m3_228 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::CopyTo(System.Array,System.Int32)
extern "C" void NameValueCollection_CopyTo_m3_229 (NameValueCollection_t3_43 * __this, Array_t * ___dest, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::RefreshCachedAll()
extern "C" void NameValueCollection_RefreshCachedAll_m3_230 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C" String_t* NameValueCollection_Get_m3_231 (NameValueCollection_t3_43 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C" String_t* NameValueCollection_Get_m3_232 (NameValueCollection_t3_43 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C" String_t* NameValueCollection_AsSingleString_m3_233 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m3_234 (NameValueCollection_t3_43 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
extern "C" StringU5BU5D_t1_206* NameValueCollection_GetValues_m3_235 (NameValueCollection_t3_43 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C" StringU5BU5D_t1_206* NameValueCollection_GetValues_m3_236 (NameValueCollection_t3_43 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C" StringU5BU5D_t1_206* NameValueCollection_AsStringArray_m3_237 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameValueCollection::HasKeys()
extern "C" bool NameValueCollection_HasKeys_m3_238 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C" void NameValueCollection_Remove_m3_239 (NameValueCollection_t3_43 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C" void NameValueCollection_Set_m3_240 (NameValueCollection_t3_43 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m3_241 (NameValueCollection_t3_43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
