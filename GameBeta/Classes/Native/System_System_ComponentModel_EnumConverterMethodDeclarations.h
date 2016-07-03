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

// System.ComponentModel.EnumConverter
struct EnumConverter_t3_123;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3_101;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.ArgumentException
struct ArgumentException_t1_686;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern "C" void EnumConverter__ctor_m3_739 (EnumConverter_t3_123 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool EnumConverter_CanConvertTo_m3_740 (EnumConverter_t3_123 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * EnumConverter_ConvertTo_m3_741 (EnumConverter_t3_123 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool EnumConverter_CanConvertFrom_m3_742 (EnumConverter_t3_123 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.EnumConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * EnumConverter_ConvertFrom_m3_743 (EnumConverter_t3_123 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool EnumConverter_IsValid_m3_744 (EnumConverter_t3_123 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesSupported_m3_745 (EnumConverter_t3_123 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool EnumConverter_GetStandardValuesExclusive_m3_746 (EnumConverter_t3_123 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t3_101 * EnumConverter_GetStandardValues_m3_747 (EnumConverter_t3_123 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.EnumConverter::get_Comparer()
extern "C" Object_t * EnumConverter_get_Comparer_m3_748 (EnumConverter_t3_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.EnumConverter::get_EnumType()
extern "C" Type_t * EnumConverter_get_EnumType_m3_749 (EnumConverter_t3_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::get_Values()
extern "C" StandardValuesCollection_t3_101 * EnumConverter_get_Values_m3_750 (EnumConverter_t3_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EnumConverter::set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection)
extern "C" void EnumConverter_set_Values_m3_751 (EnumConverter_t3_123 * __this, StandardValuesCollection_t3_101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.ComponentModel.EnumConverter::CreateValueNotValidException(System.Object)
extern "C" ArgumentException_t1_686 * EnumConverter_CreateValueNotValidException_m3_752 (EnumConverter_t3_123 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.EnumConverter::get_IsFlags()
extern "C" bool EnumConverter_get_IsFlags_m3_753 (EnumConverter_t3_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
