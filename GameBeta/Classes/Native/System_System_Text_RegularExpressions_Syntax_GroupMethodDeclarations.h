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

// System.Text.RegularExpressions.Syntax.Group
struct Group_t3_747;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3_745;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t3_841;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3_762;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m3_6158 (Group_t3_747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Group::get_Expression()
extern "C" Expression_t3_745 * Group_get_Expression_m3_6159 (Group_t3_747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_set_Expression_m3_6160 (Group_t3_747 * __this, Expression_t3_745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m3_6161 (Group_t3_747 * __this, Expression_t3_745 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m3_6162 (Group_t3_747 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m3_6163 (Group_t3_747 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t3_762 * Group_GetAnchorInfo_m3_6164 (Group_t3_747 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
