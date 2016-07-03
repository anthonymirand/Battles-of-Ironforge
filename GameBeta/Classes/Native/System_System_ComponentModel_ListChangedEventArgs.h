#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;

#include "mscorlib_System_EventArgs.h"
#include "System_System_ComponentModel_ListChangedType.h"

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t3_143  : public EventArgs_t1_105
{
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t3_70 * ___propDesc_4;
};
