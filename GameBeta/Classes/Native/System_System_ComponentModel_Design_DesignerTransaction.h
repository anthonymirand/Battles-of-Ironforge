#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t3_60  : public Object_t
{
	// System.String System.ComponentModel.Design.DesignerTransaction::description
	String_t* ___description_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_1;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_2;
};
