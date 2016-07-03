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

// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1_85;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo[]
struct CultureInfoU5BU5D_t1_862;
// System.Globalization.CompareInfo
struct CompareInfo_t1_167;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1_212;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureTypes.h"

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C" void CultureInfo__ctor_m1_2044 (CultureInfo_t1_163 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C" void CultureInfo__ctor_m1_2045 (CultureInfo_t1_163 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m1_2046 (CultureInfo_t1_163 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" void CultureInfo__ctor_m1_2047 (CultureInfo_t1_163 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean)
extern "C" void CultureInfo__ctor_m1_2048 (CultureInfo_t1_163 * __this, String_t* ___name, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C" void CultureInfo__ctor_m1_2049 (CultureInfo_t1_163 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C" void CultureInfo__ctor_m1_2050 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C" void CultureInfo__cctor_m1_2051 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" CultureInfo_t1_163 * CultureInfo_get_InvariantCulture_m1_2052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" CultureInfo_t1_163 * CultureInfo_get_CurrentCulture_m1_2053 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" CultureInfo_t1_163 * CultureInfo_get_CurrentUICulture_m1_2054 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C" CultureInfo_t1_163 * CultureInfo_ConstructCurrentCulture_m1_2055 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C" CultureInfo_t1_163 * CultureInfo_ConstructCurrentUICulture_m1_2056 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C" int32_t CultureInfo_get_LCID_m1_2057 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C" String_t* CultureInfo_get_Name_m1_2058 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C" CultureInfo_t1_163 * CultureInfo_get_Parent_m1_2059 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C" TextInfo_t1_85 * CultureInfo_get_TextInfo_m1_2060 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C" String_t* CultureInfo_get_IcuName_m1_2061 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::Clone()
extern "C" Object_t * CultureInfo_Clone_m1_2062 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C" bool CultureInfo_Equals_m1_2063 (CultureInfo_t1_163 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo[] System.Globalization.CultureInfo::GetCultures(System.Globalization.CultureTypes)
extern "C" CultureInfoU5BU5D_t1_862* CultureInfo_GetCultures_m1_2064 (Object_t * __this /* static, unused */, int32_t ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C" int32_t CultureInfo_GetHashCode_m1_2065 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C" String_t* CultureInfo_ToString_m1_2066 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C" CompareInfo_t1_167 * CultureInfo_get_CompareInfo_m1_2067 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C" bool CultureInfo_get_IsNeutralCulture_m1_2068 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C" void CultureInfo_CheckNeutral_m1_2069 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C" NumberFormatInfo_t1_211 * CultureInfo_get_NumberFormat_m1_2070 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_NumberFormat(System.Globalization.NumberFormatInfo)
extern "C" void CultureInfo_set_NumberFormat_m1_2071 (CultureInfo_t1_163 * __this, NumberFormatInfo_t1_211 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C" DateTimeFormatInfo_t1_212 * CultureInfo_get_DateTimeFormat_m1_2072 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_DateTimeFormat(System.Globalization.DateTimeFormatInfo)
extern "C" void CultureInfo_set_DateTimeFormat_m1_2073 (CultureInfo_t1_163 * __this, DateTimeFormatInfo_t1_212 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_DisplayName()
extern "C" String_t* CultureInfo_get_DisplayName_m1_2074 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C" bool CultureInfo_get_IsReadOnly_m1_2075 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C" Object_t * CultureInfo_GetFormat_m1_2076 (CultureInfo_t1_163 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C" void CultureInfo_Construct_m1_2077 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C" bool CultureInfo_ConstructInternalLocaleFromName_m1_2078 (CultureInfo_t1_163 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C" bool CultureInfo_ConstructInternalLocaleFromLcid_m1_2079 (CultureInfo_t1_163 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m1_2080 (Object_t * __this /* static, unused */, CultureInfo_t1_163 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C" bool CultureInfo_construct_internal_locale_from_lcid_m1_2081 (CultureInfo_t1_163 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C" bool CultureInfo_construct_internal_locale_from_name_m1_2082 (CultureInfo_t1_163 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C" bool CultureInfo_construct_internal_locale_from_current_locale_m1_2083 (Object_t * __this /* static, unused */, CultureInfo_t1_163 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo[] System.Globalization.CultureInfo::internal_get_cultures(System.Boolean,System.Boolean,System.Boolean)
extern "C" CultureInfoU5BU5D_t1_862* CultureInfo_internal_get_cultures_m1_2084 (Object_t * __this /* static, unused */, bool ___neutral, bool ___specific, bool ___installed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C" void CultureInfo_construct_datetime_format_m1_2085 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C" void CultureInfo_construct_number_format_m1_2086 (CultureInfo_t1_163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C" void CultureInfo_ConstructInvariant_m1_2087 (CultureInfo_t1_163 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C" TextInfo_t1_85 * CultureInfo_CreateTextInfo_m1_2088 (CultureInfo_t1_163 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C" CultureInfo_t1_163 * CultureInfo_CreateCulture_m1_2089 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
