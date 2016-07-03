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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Attribute
struct Attribute_t1_2;
// System.Array
struct Array_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C" void AttributeCollection__ctor_m3_470 (AttributeCollection_t3_76 * __this, ArrayList_t1_114 * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C" void AttributeCollection__ctor_m3_471 (AttributeCollection_t3_76 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C" void AttributeCollection__cctor_m3_472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m3_473 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m3_474 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m3_475 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C" int32_t AttributeCollection_System_Collections_ICollection_get_Count_m3_476 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::FromExisting(System.ComponentModel.AttributeCollection,System.Attribute[])
extern "C" AttributeCollection_t3_76 * AttributeCollection_FromExisting_m3_477 (Object_t * __this /* static, unused */, AttributeCollection_t3_76 * ___existing, AttributeU5BU5D_t1_937* ___newAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C" bool AttributeCollection_Contains_m3_478 (AttributeCollection_t3_76 * __this, Attribute_t1_2 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C" bool AttributeCollection_Contains_m3_479 (AttributeCollection_t3_76 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C" void AttributeCollection_CopyTo_m3_480 (AttributeCollection_t3_76 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C" Object_t * AttributeCollection_GetEnumerator_m3_481 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Matches(System.Attribute)
extern "C" bool AttributeCollection_Matches_m3_482 (AttributeCollection_t3_76 * __this, Attribute_t1_2 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Matches(System.Attribute[])
extern "C" bool AttributeCollection_Matches_m3_483 (AttributeCollection_t3_76 * __this, AttributeU5BU5D_t1_937* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C" Attribute_t1_2 * AttributeCollection_GetDefaultAttribute_m3_484 (AttributeCollection_t3_76 * __this, Type_t * ___attributeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C" int32_t AttributeCollection_get_Count_m3_485 (AttributeCollection_t3_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C" Attribute_t1_2 * AttributeCollection_get_Item_m3_486 (AttributeCollection_t3_76 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Int32)
extern "C" Attribute_t1_2 * AttributeCollection_get_Item_m3_487 (AttributeCollection_t3_76 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
