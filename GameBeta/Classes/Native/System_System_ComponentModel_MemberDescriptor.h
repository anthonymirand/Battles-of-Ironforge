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
// System.Attribute[]
struct AttributeU5BU5D_t1_937;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;
// System.Collections.IComparer
struct IComparer_t1_180;

#include "mscorlib_System_Object.h"

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3_55  : public Object_t
{
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1_937* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t3_76 * ___attrCollection_2;
};
struct MemberDescriptor_t3_55_StaticFields{
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	Object_t * ___default_comparer_3;
};
