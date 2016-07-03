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

// System.Text.RegularExpressions.CategoryUtils
struct CategoryUtils_t3_725;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category.h"
#include "mscorlib_System_Globalization_UnicodeCategory.h"

// System.Void System.Text.RegularExpressions.CategoryUtils::.ctor()
extern "C" void CategoryUtils__ctor_m3_5940 (CategoryUtils_t3_725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
extern "C" uint16_t CategoryUtils_CategoryFromName_m3_5941 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
extern "C" bool CategoryUtils_IsCategory_m3_5942 (Object_t * __this /* static, unused */, uint16_t ___cat, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
extern "C" bool CategoryUtils_IsCategory_m3_5943 (Object_t * __this /* static, unused */, int32_t ___uc, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
