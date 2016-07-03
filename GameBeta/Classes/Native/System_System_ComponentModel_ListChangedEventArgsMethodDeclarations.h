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

// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t3_143;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_ListChangedType.h"

// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32)
extern "C" void ListChangedEventArgs__ctor_m3_891 (ListChangedEventArgs_t3_143 * __this, int32_t ___listChangedType, int32_t ___newIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.ComponentModel.PropertyDescriptor)
extern "C" void ListChangedEventArgs__ctor_m3_892 (ListChangedEventArgs_t3_143 * __this, int32_t ___listChangedType, PropertyDescriptor_t3_70 * ___propDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern "C" void ListChangedEventArgs__ctor_m3_893 (ListChangedEventArgs_t3_143 * __this, int32_t ___listChangedType, int32_t ___newIndex, int32_t ___oldIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C" void ListChangedEventArgs__ctor_m3_894 (ListChangedEventArgs_t3_143 * __this, int32_t ___listChangedType, int32_t ___newIndex, PropertyDescriptor_t3_70 * ___propDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::get_ListChangedType()
extern "C" int32_t ListChangedEventArgs_get_ListChangedType_m3_895 (ListChangedEventArgs_t3_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_OldIndex()
extern "C" int32_t ListChangedEventArgs_get_OldIndex_m3_896 (ListChangedEventArgs_t3_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_NewIndex()
extern "C" int32_t ListChangedEventArgs_get_NewIndex_m3_897 (ListChangedEventArgs_t3_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::get_PropertyDescriptor()
extern "C" PropertyDescriptor_t3_70 * ListChangedEventArgs_get_PropertyDescriptor_m3_898 (ListChangedEventArgs_t3_143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
