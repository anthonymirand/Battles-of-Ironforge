#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeConverter
struct TypeConverter_t3_83;
// System.Collections.Hashtable
struct Hashtable_t1_173;

#include "System_System_ComponentModel_MemberDescriptor.h"

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3_70  : public MemberDescriptor_t3_55
{
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t3_83 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1_173 * ___notifiers_5;
};
