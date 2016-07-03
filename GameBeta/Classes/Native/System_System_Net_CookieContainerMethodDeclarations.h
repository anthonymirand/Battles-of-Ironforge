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

// System.Net.CookieContainer
struct CookieContainer_t3_532;
// System.Net.Cookie
struct Cookie_t3_529;
// System.String
struct String_t;
// System.Net.CookieCollection
struct CookieCollection_t3_531;
// System.Uri
struct Uri_t3_3;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C" void CookieContainer__ctor_m3_3901 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::.ctor(System.Int32)
extern "C" void CookieContainer__ctor_m3_3902 (CookieContainer_t3_532 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void CookieContainer__ctor_m3_3903 (CookieContainer_t3_532 * __this, int32_t ___capacity, int32_t ___perDomainCapacity, int32_t ___maxCookieSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_Count()
extern "C" int32_t CookieContainer_get_Count_m3_3904 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_Capacity()
extern "C" int32_t CookieContainer_get_Capacity_m3_3905 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_Capacity(System.Int32)
extern "C" void CookieContainer_set_Capacity_m3_3906 (CookieContainer_t3_532 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_MaxCookieSize()
extern "C" int32_t CookieContainer_get_MaxCookieSize_m3_3907 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_MaxCookieSize(System.Int32)
extern "C" void CookieContainer_set_MaxCookieSize_m3_3908 (CookieContainer_t3_532 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_PerDomainCapacity()
extern "C" int32_t CookieContainer_get_PerDomainCapacity_m3_3909 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_PerDomainCapacity(System.Int32)
extern "C" void CookieContainer_set_PerDomainCapacity_m3_3910 (CookieContainer_t3_532 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Net.Cookie)
extern "C" void CookieContainer_Add_m3_3911 (CookieContainer_t3_532 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C" void CookieContainer_AddCookie_m3_3912 (CookieContainer_t3_532 * __this, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C" int32_t CookieContainer_CountDomain_m3_3913 (CookieContainer_t3_532 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C" void CookieContainer_RemoveOldest_m3_3914 (CookieContainer_t3_532 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C" void CookieContainer_CheckExpiration_m3_3915 (CookieContainer_t3_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Net.CookieCollection)
extern "C" void CookieContainer_Add_m3_3916 (CookieContainer_t3_532 * __this, CookieCollection_t3_531 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Cook_m3_3917 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Add_m3_3918 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, Cookie_t3_529 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.CookieCollection)
extern "C" void CookieContainer_Add_m3_3919 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, CookieCollection_t3_531 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C" String_t* CookieContainer_GetCookieHeader_m3_3920 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C" bool CookieContainer_CheckDomain_m3_3921 (Object_t * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C" CookieCollection_t3_531 * CookieContainer_GetCookies_m3_3922 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::SetCookies(System.Uri,System.String)
extern "C" void CookieContainer_SetCookies_m3_3923 (CookieContainer_t3_532 * __this, Uri_t3_3 * ___uri, String_t* ___cookieHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieContainer::Parse(System.String)
extern "C" Cookie_t3_529 * CookieContainer_Parse_m3_3924 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C" bool CookieContainer_IsNullOrEmpty_m3_3925 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
