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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t3_237;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Diagnostics.TraceListener
struct TraceListener_t3_203;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t3_236;
// System.Collections.IList
struct IList_t1_429;
// System.Diagnostics.TraceListener[]
struct TraceListenerU5BU5D_t3_820;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C" void TraceListenerCollection__ctor_m3_1892 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C" void TraceListenerCollection__ctor_m3_1893 (TraceListenerCollection_t3_237 * __this, bool ___addDefault, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * TraceListenerCollection_System_Collections_IList_get_Item_m3_1894 (TraceListenerCollection_t3_237 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_set_Item_m3_1895 (TraceListenerCollection_t3_237 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m3_1896 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m3_1897 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m3_1898 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m3_1899 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void TraceListenerCollection_System_Collections_ICollection_CopyTo_m3_1900 (TraceListenerCollection_t3_237 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_Add_m3_1901 (TraceListenerCollection_t3_237 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool TraceListenerCollection_System_Collections_IList_Contains_m3_1902 (TraceListenerCollection_t3_237 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m3_1903 (TraceListenerCollection_t3_237 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Insert_m3_1904 (TraceListenerCollection_t3_237 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Remove_m3_1905 (TraceListenerCollection_t3_237 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C" int32_t TraceListenerCollection_get_Count_m3_1906 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C" TraceListener_t3_203 * TraceListenerCollection_get_Item_m3_1907 (TraceListenerCollection_t3_237 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.Int32)
extern "C" TraceListener_t3_203 * TraceListenerCollection_get_Item_m3_1908 (TraceListenerCollection_t3_237 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_set_Item_m3_1909 (TraceListenerCollection_t3_237 * __this, int32_t ___index, TraceListener_t3_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C" int32_t TraceListenerCollection_Add_m3_1910 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C" void TraceListenerCollection_Add_m3_1911 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, TraceImplSettings_t3_236 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_InitializeListener_m3_1912 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeRange(System.Collections.IList)
extern "C" void TraceListenerCollection_InitializeRange_m3_1913 (TraceListenerCollection_t3_237 * __this, Object_t * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::AddRange(System.Diagnostics.TraceListener[])
extern "C" void TraceListenerCollection_AddRange_m3_1914 (TraceListenerCollection_t3_237 * __this, TraceListenerU5BU5D_t3_820* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::AddRange(System.Diagnostics.TraceListenerCollection)
extern "C" void TraceListenerCollection_AddRange_m3_1915 (TraceListenerCollection_t3_237 * __this, TraceListenerCollection_t3_237 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C" void TraceListenerCollection_Clear_m3_1916 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::Contains(System.Diagnostics.TraceListener)
extern "C" bool TraceListenerCollection_Contains_m3_1917 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::CopyTo(System.Diagnostics.TraceListener[],System.Int32)
extern "C" void TraceListenerCollection_CopyTo_m3_1918 (TraceListenerCollection_t3_237 * __this, TraceListenerU5BU5D_t3_820* ___listeners, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C" Object_t * TraceListenerCollection_GetEnumerator_m3_1919 (TraceListenerCollection_t3_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::IndexOf(System.Diagnostics.TraceListener)
extern "C" int32_t TraceListenerCollection_IndexOf_m3_1920 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_Insert_m3_1921 (TraceListenerCollection_t3_237 * __this, int32_t ___index, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C" void TraceListenerCollection_Remove_m3_1922 (TraceListenerCollection_t3_237 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_Remove_m3_1923 (TraceListenerCollection_t3_237 * __this, TraceListener_t3_203 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C" void TraceListenerCollection_RemoveAt_m3_1924 (TraceListenerCollection_t3_237 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
