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

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1_164;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Globalization.TextInfo
struct TextInfo_t1_85;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m1_1699 (CaseInsensitiveHashCodeProvider_t1_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C" void CaseInsensitiveHashCodeProvider__ctor_m1_1700 (CaseInsensitiveHashCodeProvider_t1_164 * __this, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C" void CaseInsensitiveHashCodeProvider__cctor_m1_1701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_Default()
extern "C" CaseInsensitiveHashCodeProvider_t1_164 * CaseInsensitiveHashCodeProvider_get_Default_m1_1702 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m1_1703 (Object_t * __this /* static, unused */, CultureInfo_t1_163 * ___a, CultureInfo_t1_163 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C" bool CaseInsensitiveHashCodeProvider_AreEqual_m1_1704 (Object_t * __this /* static, unused */, TextInfo_t1_85 * ___info, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C" CaseInsensitiveHashCodeProvider_t1_164 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m1_1705 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C" int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m1_1706 (CaseInsensitiveHashCodeProvider_t1_164 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
