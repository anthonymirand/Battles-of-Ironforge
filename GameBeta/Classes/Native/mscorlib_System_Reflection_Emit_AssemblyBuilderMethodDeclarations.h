#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1_276;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1_279;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t1_348;
// System.String[]
struct StringU5BU5D_t1_206;
// System.IO.Stream
struct Stream_t1_226;
// System.Exception
struct Exception_t1_33;
// System.Reflection.AssemblyName
struct AssemblyName_t1_329;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m1_2627 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1_279* AssemblyBuilder_GetModulesInternal_m1_2628 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t1_31* AssemblyBuilder_GetTypes_m1_2629 (AssemblyBuilder_t1_276 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Emit.AssemblyBuilder::GetManifestResourceInfo(System.String)
extern "C" ManifestResourceInfo_t1_348 * AssemblyBuilder_GetManifestResourceInfo_m1_2630 (AssemblyBuilder_t1_276 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Emit.AssemblyBuilder::GetManifestResourceNames()
extern "C" StringU5BU5D_t1_206* AssemblyBuilder_GetManifestResourceNames_m1_2631 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.String)
extern "C" Stream_t1_226 * AssemblyBuilder_GetManifestResourceStream_m1_2632 (AssemblyBuilder_t1_276 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m1_2633 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t1_33 * AssemblyBuilder_not_supported_m1_2634 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1_329 * AssemblyBuilder_UnprotectedGetName_m1_2635 (AssemblyBuilder_t1_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
