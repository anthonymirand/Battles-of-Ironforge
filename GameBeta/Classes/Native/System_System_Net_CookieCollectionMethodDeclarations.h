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

// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t1_969;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Net.Cookie[]
struct CookieU5BU5D_t3_833;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.Cookie
struct Cookie_t3_529;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieCollection::.ctor()
extern "C" void CookieCollection__ctor_m3_3885 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C" void CookieCollection__cctor_m3_3886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C" Object_t* CookieCollection_get_List_m3_3887 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C" int32_t CookieCollection_get_Count_m3_3888 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C" bool CookieCollection_get_IsSynchronized_m3_3889 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C" Object_t * CookieCollection_get_SyncRoot_m3_3890 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C" void CookieCollection_CopyTo_m3_3891 (CookieCollection_t3_531 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Net.Cookie[],System.Int32)
extern "C" void CookieCollection_CopyTo_m3_3892 (CookieCollection_t3_531 * __this, CookieU5BU5D_t3_833* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C" Object_t * CookieCollection_GetEnumerator_m3_3893 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsReadOnly()
extern "C" bool CookieCollection_get_IsReadOnly_m3_3894 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C" void CookieCollection_Add_m3_3895 (CookieCollection_t3_531 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C" void CookieCollection_Sort_m3_3896 (CookieCollection_t3_531 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C" int32_t CookieCollection_SearchCookie_m3_3897 (CookieCollection_t3_531 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.CookieCollection)
extern "C" void CookieCollection_Add_m3_3898 (CookieCollection_t3_531 * __this, CookieCollection_t3_531 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C" Cookie_t3_529 * CookieCollection_get_Item_m3_3899 (CookieCollection_t3_531 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.String)
extern "C" Cookie_t3_529 * CookieCollection_get_Item_m3_3900 (CookieCollection_t3_531 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
