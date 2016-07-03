#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t1_160;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t3_741;

#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t3_761  : public Expression_t3_745
{
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1_160 * ___pos_cats_4;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1_160 * ___neg_cats_5;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t3_741 * ___intervals_6;
};
struct CharacterClass_t3_761_StaticFields{
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t3_738  ___upper_case_characters_1;
};
