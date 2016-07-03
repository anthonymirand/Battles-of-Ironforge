#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t3_124;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3_70;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3_76;

#include "mscorlib_System_Object.h"

// System.ComponentModel.Info
struct  Info_t3_186  : public Object_t
{
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.EventDescriptor System.ComponentModel.Info::_defaultEvent
	EventDescriptor_t3_124 * ____defaultEvent_1;
	// System.Boolean System.ComponentModel.Info::_gotDefaultEvent
	bool ____gotDefaultEvent_2;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::_defaultProperty
	PropertyDescriptor_t3_70 * ____defaultProperty_3;
	// System.Boolean System.ComponentModel.Info::_gotDefaultProperty
	bool ____gotDefaultProperty_4;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t3_76 * ____attributes_5;
};
