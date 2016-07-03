#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t1_277;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Reflection_ResourceLocation.h"

// System.Reflection.ManifestResourceInfo
struct  ManifestResourceInfo_t1_348  : public Object_t
{
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t1_277 * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;
};
