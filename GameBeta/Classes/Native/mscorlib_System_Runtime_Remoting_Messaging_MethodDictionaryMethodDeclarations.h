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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1_463;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1_471;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m1_3567 (MethodDictionary_t1_463 * __this, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m1_3568 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m1_3569 (MethodDictionary_t1_463 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m1_3570 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m1_3571 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C" bool MethodDictionary_IsOverridenKey_m1_3572 (MethodDictionary_t1_463 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsFixedSize()
extern "C" bool MethodDictionary_get_IsFixedSize_m1_3573 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsReadOnly()
extern "C" bool MethodDictionary_get_IsReadOnly_m1_3574 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C" Object_t * MethodDictionary_get_Item_m1_3575 (MethodDictionary_t1_463 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m1_3576 (MethodDictionary_t1_463 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C" Object_t * MethodDictionary_GetMethodProperty_m1_3577 (MethodDictionary_t1_463 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C" void MethodDictionary_SetMethodProperty_m1_3578 (MethodDictionary_t1_463 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern "C" Object_t * MethodDictionary_get_Keys_m1_3579 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C" Object_t * MethodDictionary_get_Values_m1_3580 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C" void MethodDictionary_Add_m1_3581 (MethodDictionary_t1_463 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
extern "C" void MethodDictionary_Clear_m1_3582 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern "C" bool MethodDictionary_Contains_m1_3583 (MethodDictionary_t1_463 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C" void MethodDictionary_Remove_m1_3584 (MethodDictionary_t1_463 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C" int32_t MethodDictionary_get_Count_m1_3585 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m1_3586 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m1_3587 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C" void MethodDictionary_CopyTo_m1_3588 (MethodDictionary_t1_463 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C" Object_t * MethodDictionary_GetEnumerator_m1_3589 (MethodDictionary_t1_463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
