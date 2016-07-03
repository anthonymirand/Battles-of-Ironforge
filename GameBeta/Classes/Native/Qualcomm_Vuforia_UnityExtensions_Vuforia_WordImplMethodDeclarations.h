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

// Vuforia.WordImpl
struct WordImpl_t6_140;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t6_79;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t6_141;
// Vuforia.ImageImpl
struct ImageImpl_t6_80;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__6.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C" void WordImpl__ctor_m6_708 (WordImpl_t6_140 * __this, int32_t ___id, String_t* ___text, Vector2_t5_67  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C" String_t* WordImpl_get_StringValue_m6_709 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C" Vector2_t5_67  WordImpl_get_Size_m6_710 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C" Image_t6_79 * WordImpl_GetLetterMask_m6_711 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C" RectangleDataU5BU5D_t6_141* WordImpl_GetLetterBoundingBoxes_m6_712 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C" void WordImpl_InitImageHeader_m6_713 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C" void WordImpl_CreateLetterMask_m6_714 (WordImpl_t6_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C" void WordImpl_SetImageValues_m6_715 (Object_t * __this /* static, unused */, ImageHeaderData_t6_107  ___imageHeader, ImageImpl_t6_80 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C" void WordImpl_AllocateImage_m6_716 (Object_t * __this /* static, unused */, ImageImpl_t6_80 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
