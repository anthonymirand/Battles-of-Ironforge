#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3_177;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "System_System_ComponentModel_CustomTypeDescriptor.h"

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t3_181  : public CustomTypeDescriptor_t3_102
{
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::owner
	TypeDescriptionProvider_t3_177 * ___owner_1;
	// System.Type System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::objectType
	Type_t * ___objectType_2;
	// System.Object System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::instance
	Object_t * ___instance_3;
};
