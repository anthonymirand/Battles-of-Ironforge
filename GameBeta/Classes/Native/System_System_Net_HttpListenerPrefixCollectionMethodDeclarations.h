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

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t3_582;
// System.Net.HttpListener
struct HttpListener_t3_581;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1_970;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpListenerPrefixCollection::.ctor(System.Net.HttpListener)
extern "C" void HttpListenerPrefixCollection__ctor_m3_4379 (HttpListenerPrefixCollection_t3_582 * __this, HttpListener_t3_581 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m3_4380 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerPrefixCollection::get_Count()
extern "C" int32_t HttpListenerPrefixCollection_get_Count_m3_4381 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern "C" bool HttpListenerPrefixCollection_get_IsReadOnly_m3_4382 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::get_IsSynchronized()
extern "C" bool HttpListenerPrefixCollection_get_IsSynchronized_m3_4383 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C" void HttpListenerPrefixCollection_Add_m3_4384 (HttpListenerPrefixCollection_t3_582 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Clear()
extern "C" void HttpListenerPrefixCollection_Clear_m3_4385 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Contains(System.String)
extern "C" bool HttpListenerPrefixCollection_Contains_m3_4386 (HttpListenerPrefixCollection_t3_582 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern "C" void HttpListenerPrefixCollection_CopyTo_m3_4387 (HttpListenerPrefixCollection_t3_582 * __this, StringU5BU5D_t1_206* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.Array,System.Int32)
extern "C" void HttpListenerPrefixCollection_CopyTo_m3_4388 (HttpListenerPrefixCollection_t3_582 * __this, Array_t * ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> System.Net.HttpListenerPrefixCollection::GetEnumerator()
extern "C" Object_t* HttpListenerPrefixCollection_GetEnumerator_m3_4389 (HttpListenerPrefixCollection_t3_582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Remove(System.String)
extern "C" bool HttpListenerPrefixCollection_Remove_m3_4390 (HttpListenerPrefixCollection_t3_582 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
