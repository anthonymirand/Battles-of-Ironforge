﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Collections.ICollection
struct ICollection_t1_861;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList::.ctor()
extern "C" void ArrayList__ctor_m1_1634 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C" void ArrayList__ctor_m1_1635 (ArrayList_t1_114 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C" void ArrayList__ctor_m1_1636 (ArrayList_t1_114 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C" void ArrayList__ctor_m1_1637 (ArrayList_t1_114 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C" void ArrayList__cctor_m1_1638 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C" Object_t * ArrayList_get_Item_m1_1639 (ArrayList_t1_114 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C" void ArrayList_set_Item_m1_1640 (ArrayList_t1_114 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C" int32_t ArrayList_get_Count_m1_1641 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C" int32_t ArrayList_get_Capacity_m1_1642 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C" void ArrayList_set_Capacity_m1_1643 (ArrayList_t1_114 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C" bool ArrayList_get_IsFixedSize_m1_1644 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C" bool ArrayList_get_IsReadOnly_m1_1645 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C" bool ArrayList_get_IsSynchronized_m1_1646 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C" Object_t * ArrayList_get_SyncRoot_m1_1647 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C" void ArrayList_EnsureCapacity_m1_1648 (ArrayList_t1_114 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C" void ArrayList_Shift_m1_1649 (ArrayList_t1_114 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C" int32_t ArrayList_Add_m1_1650 (ArrayList_t1_114 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C" void ArrayList_Clear_m1_1651 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C" bool ArrayList_Contains_m1_1652 (ArrayList_t1_114 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C" int32_t ArrayList_IndexOf_m1_1653 (ArrayList_t1_114 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m1_1654 (ArrayList_t1_114 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m1_1655 (ArrayList_t1_114 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C" void ArrayList_Insert_m1_1656 (ArrayList_t1_114 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayList_InsertRange_m1_1657 (ArrayList_t1_114 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C" void ArrayList_Remove_m1_1658 (ArrayList_t1_114 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C" void ArrayList_RemoveAt_m1_1659 (ArrayList_t1_114 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C" void ArrayList_CopyTo_m1_1660 (ArrayList_t1_114 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C" void ArrayList_CopyTo_m1_1661 (ArrayList_t1_114 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayList_CopyTo_m1_1662 (ArrayList_t1_114 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C" Object_t * ArrayList_GetEnumerator_m1_1663 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C" void ArrayList_AddRange_m1_1664 (ArrayList_t1_114 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C" void ArrayList_Sort_m1_1665 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C" void ArrayList_Sort_m1_1666 (ArrayList_t1_114 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C" ObjectU5BU5D_t1_158* ArrayList_ToArray_m1_1667 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C" Array_t * ArrayList_ToArray_m1_1668 (ArrayList_t1_114 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C" Object_t * ArrayList_Clone_m1_1669 (ArrayList_t1_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C" void ArrayList_ThrowNewArgumentOutOfRangeException_m1_1670 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C" ArrayList_t1_114 * ArrayList_Synchronized_m1_1671 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C" ArrayList_t1_114 * ArrayList_ReadOnly_m1_1672 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;