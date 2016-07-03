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

// Vuforia.ImageImpl
struct ImageImpl_t6_80;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// UnityEngine.Texture2D
struct Texture2D_t5_50;
// UnityEngine.Color32[]
struct Color32U5BU5D_t5_327;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"

// System.Int32 Vuforia.ImageImpl::get_Width()
extern "C" int32_t ImageImpl_get_Width_m6_494 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Width(System.Int32)
extern "C" void ImageImpl_set_Width_m6_495 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Height()
extern "C" int32_t ImageImpl_get_Height_m6_496 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Height(System.Int32)
extern "C" void ImageImpl_set_Height_m6_497 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Stride()
extern "C" int32_t ImageImpl_get_Stride_m6_498 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Stride(System.Int32)
extern "C" void ImageImpl_set_Stride_m6_499 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferWidth()
extern "C" int32_t ImageImpl_get_BufferWidth_m6_500 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferWidth(System.Int32)
extern "C" void ImageImpl_set_BufferWidth_m6_501 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferHeight()
extern "C" int32_t ImageImpl_get_BufferHeight_m6_502 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferHeight(System.Int32)
extern "C" void ImageImpl_set_BufferHeight_m6_503 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::get_PixelFormat()
extern "C" int32_t ImageImpl_get_PixelFormat_m6_504 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C" void ImageImpl_set_PixelFormat_m6_505 (ImageImpl_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.ImageImpl::get_Pixels()
extern "C" ByteU5BU5D_t1_72* ImageImpl_get_Pixels_m6_506 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Pixels(System.Byte[])
extern "C" void ImageImpl_set_Pixels_m6_507 (ImageImpl_t6_80 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C" IntPtr_t ImageImpl_get_UnmanagedData_m6_508 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C" void ImageImpl_set_UnmanagedData_m6_509 (ImageImpl_t6_80 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C" void ImageImpl__ctor_m6_510 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::Finalize()
extern "C" void ImageImpl_Finalize_m6_511 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageImpl::IsValid()
extern "C" bool ImageImpl_IsValid_m6_512 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyToTexture(UnityEngine.Texture2D)
extern "C" void ImageImpl_CopyToTexture_m6_513 (ImageImpl_t6_80 * __this, Texture2D_t5_50 * ___texture2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C" void ImageImpl_CopyPixelsFromUnmanagedBuffer_m6_514 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C" Color32U5BU5D_t5_327* ImageImpl_GetPixels32_m6_515 (ImageImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat Vuforia.ImageImpl::ConvertPixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C" int32_t ImageImpl_ConvertPixelFormat_m6_516 (ImageImpl_t6_80 * __this, int32_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
