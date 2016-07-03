#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3_714;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t3_715;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t3_712;

#include "System_System_Text_RegularExpressions_BaseMachine.h"
#include "System_System_Text_RegularExpressions_RxInterpreter_IntStack.h"

// System.Text.RegularExpressions.RxInterpreter
struct  RxInterpreter_t3_713  : public BaseMachine_t3_698
{
	// System.Byte[] System.Text.RegularExpressions.RxInterpreter::program
	ByteU5BU5D_t1_72* ___program_1;
	// System.String System.Text.RegularExpressions.RxInterpreter::str
	String_t* ___str_2;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_start
	int32_t ___string_start_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_end
	int32_t ___string_end_4;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::group_count
	int32_t ___group_count_5;
	// System.Int32[] System.Text.RegularExpressions.RxInterpreter::groups
	Int32U5BU5D_t1_161* ___groups_6;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreter::eval_del
	EvalDelegate_t3_714 * ___eval_del_7;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.RxInterpreter::marks
	MarkU5BU5D_t3_715* ___marks_8;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_start
	int32_t ___mark_start_9;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_end
	int32_t ___mark_end_10;
	// System.Text.RegularExpressions.RxInterpreter/IntStack System.Text.RegularExpressions.RxInterpreter::stack
	IntStack_t3_711  ___stack_11;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::repeat
	RepeatContext_t3_712 * ___repeat_12;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::deep
	RepeatContext_t3_712 * ___deep_13;
};
struct RxInterpreter_t3_713_StaticFields{
	// System.Boolean System.Text.RegularExpressions.RxInterpreter::trace_rx
	bool ___trace_rx_14;
};
