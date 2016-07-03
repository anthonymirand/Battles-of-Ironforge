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

// UnityEngine.WebCamTexture
struct WebCamTexture_t5_164;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5_336;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C" void WebCamTexture__ctor_m5_1426 (WebCamTexture_t5_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture_Internal_CreateWebCamTexture_m5_1427 (Object_t * __this /* static, unused */, WebCamTexture_t5_164 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" void WebCamTexture_Play_m5_1428 (WebCamTexture_t5_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Play_m5_1429 (Object_t * __this /* static, unused */, WebCamTexture_t5_164 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C" void WebCamTexture_Stop_m5_1430 (WebCamTexture_t5_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Stop_m5_1431 (Object_t * __this /* static, unused */, WebCamTexture_t5_164 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C" bool WebCamTexture_get_isPlaying_m5_1432 (WebCamTexture_t5_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C" void WebCamTexture_set_deviceName_m5_1433 (WebCamTexture_t5_164 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C" void WebCamTexture_set_requestedFPS_m5_1434 (WebCamTexture_t5_164 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C" void WebCamTexture_set_requestedWidth_m5_1435 (WebCamTexture_t5_164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C" void WebCamTexture_set_requestedHeight_m5_1436 (WebCamTexture_t5_164 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" WebCamDeviceU5BU5D_t5_336* WebCamTexture_get_devices_m5_1437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C" bool WebCamTexture_get_didUpdateThisFrame_m5_1438 (WebCamTexture_t5_164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
