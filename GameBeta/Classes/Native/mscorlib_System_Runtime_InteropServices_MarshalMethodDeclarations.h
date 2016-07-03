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

// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Single[]
struct SingleU5BU5D_t1_870;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Security.SecureString
struct SecureString_t1_665;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C" void Marshal__cctor_m1_3330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C" IntPtr_t Marshal_AllocCoTaskMem_m1_3331 (Object_t * __this /* static, unused */, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
extern "C" IntPtr_t Marshal_AllocHGlobal_m1_3332 (Object_t * __this /* static, unused */, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IntPtr_t Marshal_AllocHGlobal_m1_3333 (Object_t * __this /* static, unused */, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_copy_to_unmanaged_m1_3334 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m1_3335 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_Copy_m1_3336 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m1_3337 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t1_72* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m1_3338 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t1_16* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m1_3339 (Object_t * __this /* static, unused */, IntPtr_t ___source, SingleU5BU5D_t1_870* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeBSTR(System.IntPtr)
extern "C" void Marshal_FreeBSTR_m1_3340 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" void Marshal_FreeHGlobal_m1_3341 (Object_t * __this /* static, unused */, IntPtr_t ___hglobal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" int32_t Marshal_GetLastWin32Error_m1_3342 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringAnsi_m1_3343 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringUni_m1_3344 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Object)
extern "C" void Marshal_PtrToStructure_m1_3345 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, Object_t * ___structure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" Object_t * Marshal_PtrToStructure_m1_3346 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, Type_t * ___structureType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C" uint8_t Marshal_ReadByte_m1_3347 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr)
extern "C" int32_t Marshal_ReadInt32_m1_3348 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr,System.Int32)
extern "C" int32_t Marshal_ReadInt32_m1_3349 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C" int32_t Marshal_SizeOf_m1_3350 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalAnsi(System.String)
extern "C" IntPtr_t Marshal_StringToHGlobalAnsi_m1_3351 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalAuto(System.String)
extern "C" IntPtr_t Marshal_StringToHGlobalAuto_m1_3352 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C" IntPtr_t Marshal_StringToHGlobalUni_m1_3353 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::SecureStringToBSTR(System.Security.SecureString)
extern "C" IntPtr_t Marshal_SecureStringToBSTR_m1_3354 (Object_t * __this /* static, unused */, SecureString_t1_665 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C" void Marshal_StructureToPtr_m1_3355 (Object_t * __this /* static, unused */, Object_t * ___structure, IntPtr_t ___ptr, bool ___fDeleteOld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::UnsafeAddrOfPinnedArrayElement(System.Array,System.Int32)
extern "C" IntPtr_t Marshal_UnsafeAddrOfPinnedArrayElement_m1_3356 (Object_t * __this /* static, unused */, Array_t * ___arr, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C" void Marshal_WriteByte_m1_3357 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt16(System.IntPtr,System.Int32,System.Int16)
extern "C" void Marshal_WriteInt16_m1_3358 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, int16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteInt32(System.IntPtr,System.Int32,System.Int32)
extern "C" void Marshal_WriteInt32_m1_3359 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
