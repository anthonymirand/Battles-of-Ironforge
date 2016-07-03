#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;

#include "mscorlib_System_Object.h"

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t3_47  : public Object_t
{
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::list
	ArrayList_t1_114 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::hash
	Hashtable_t1_173 * ___hash_1;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::readOnly
	bool ___readOnly_2;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::initialCapacity
	int32_t ___initialCapacity_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::serializationInfo
	SerializationInfo_t1_178 * ___serializationInfo_4;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::comparer
	Object_t * ___comparer_5;
};
