﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.TextureRenderer
struct TextureRenderer_t6_168;
// UnityEngine.Texture
struct Texture_t5_38;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" int32_t TextureRenderer_get_Width_m6_1724 (TextureRenderer_t6_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" int32_t TextureRenderer_get_Height_m6_1725 (TextureRenderer_t6_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C" void TextureRenderer__ctor_m6_1726 (TextureRenderer_t6_168 * __this, Texture_t5_38 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t6_123  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" RenderTexture_t5_52 * TextureRenderer_Render_m6_1727 (TextureRenderer_t6_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" void TextureRenderer_Destroy_m6_1728 (TextureRenderer_t6_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
