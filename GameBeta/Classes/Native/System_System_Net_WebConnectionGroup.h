#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ServicePoint
struct ServicePoint_t3_4;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Random
struct Random_t1_804;
// System.Collections.Queue
struct Queue_t1_183;

#include "mscorlib_System_Object.h"

// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t3_634  : public Object_t
{
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t3_4 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.ArrayList System.Net.WebConnectionGroup::connections
	ArrayList_t1_114 * ___connections_2;
	// System.Random System.Net.WebConnectionGroup::rnd
	Random_t1_804 * ___rnd_3;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t1_183 * ___queue_4;
};
