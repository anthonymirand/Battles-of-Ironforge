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

// System.Reflection.Assembly
struct Assembly_t1_277;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Reflection.Module
struct Module_t1_298;
// System.IO.Stream
struct Stream_t1_226;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Reflection.AssemblyName
struct AssemblyName_t1_329;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1_279;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t1_348;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C" void Assembly__ctor_m1_2917 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C" String_t* Assembly_get_code_base_m1_2918 (Assembly_t1_277 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m1_2919 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m1_2920 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C" String_t* Assembly_GetCodeBase_m1_2921 (Assembly_t1_277 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m1_2922 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C" String_t* Assembly_get_Location_m1_2923 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C" bool Assembly_IsDefined_m1_2924 (Assembly_t1_277 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_158* Assembly_GetCustomAttributes_m1_2925 (Assembly_t1_277 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m1_2926 (Assembly_t1_277 * __this, String_t* ___name, int32_t* ___size, Module_t1_298 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String)
extern "C" Stream_t1_226 * Assembly_GetManifestResourceStream_m1_2927 (Assembly_t1_277 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C" TypeU5BU5D_t1_31* Assembly_GetTypes_m1_2928 (Assembly_t1_277 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C" TypeU5BU5D_t1_31* Assembly_GetTypes_m1_2929 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m1_2930 (Assembly_t1_277 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m1_2931 (Assembly_t1_277 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m1_2932 (Assembly_t1_277 * __this, Module_t1_298 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m1_2933 (Assembly_t1_277 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m1_2934 (Object_t * __this /* static, unused */, Assembly_t1_277 * ___ass, AssemblyName_t1_329 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C" AssemblyName_t1_329 * Assembly_GetName_m1_2935 (Assembly_t1_277 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C" AssemblyName_t1_329 * Assembly_GetName_m1_2936 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1_329 * Assembly_UnprotectedGetName_m1_2937 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m1_2938 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
extern "C" Assembly_t1_277 * Assembly_GetEntryAssembly_m1_2939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t1_277 * Assembly_Load_m1_2940 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" Module_t1_298 * Assembly_GetModule_m1_2941 (Assembly_t1_277 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1_279* Assembly_GetModulesInternal_m1_2942 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C" ModuleU5BU5D_t1_279* Assembly_GetModules_m1_2943 (Assembly_t1_277 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Assembly::GetManifestResourceNames()
extern "C" StringU5BU5D_t1_206* Assembly_GetManifestResourceNames_m1_2944 (Assembly_t1_277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t1_277 * Assembly_GetExecutingAssembly_m1_2945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
extern "C" Assembly_t1_277 * Assembly_GetCallingAssembly_m1_2946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::GetManifestResourceInfoInternal(System.String,System.Reflection.ManifestResourceInfo)
extern "C" bool Assembly_GetManifestResourceInfoInternal_m1_2947 (Assembly_t1_277 * __this, String_t* ___name, ManifestResourceInfo_t1_348 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Assembly::GetManifestResourceInfo(System.String)
extern "C" ManifestResourceInfo_t1_348 * Assembly_GetManifestResourceInfo_m1_2948 (Assembly_t1_277 * __this, String_t* ___resourceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
