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

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t3_761;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3_841;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C" void CharacterClass__ctor_m3_6251 (CharacterClass_t3_761 * __this, bool ___negate, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass__ctor_m3_6252 (CharacterClass_t3_761 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern "C" void CharacterClass__cctor_m3_6253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::get_Negate()
extern "C" bool CharacterClass_get_Negate_m3_6254 (CharacterClass_t3_761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::set_Negate(System.Boolean)
extern "C" void CharacterClass_set_Negate_m3_6255 (CharacterClass_t3_761 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::get_IgnoreCase()
extern "C" bool CharacterClass_get_IgnoreCase_m3_6256 (CharacterClass_t3_761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::set_IgnoreCase(System.Boolean)
extern "C" void CharacterClass_set_IgnoreCase_m3_6257 (CharacterClass_t3_761 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m3_6258 (CharacterClass_t3_761 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C" void CharacterClass_AddCharacter_m3_6259 (CharacterClass_t3_761 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C" void CharacterClass_AddRange_m3_6260 (CharacterClass_t3_761 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CharacterClass_Compile_m3_6261 (CharacterClass_t3_761 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C" void CharacterClass_GetWidth_m3_6262 (CharacterClass_t3_761 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C" bool CharacterClass_IsComplex_m3_6263 (CharacterClass_t3_761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C" double CharacterClass_GetIntervalCost_m3_6264 (Object_t * __this /* static, unused */, Interval_t3_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
