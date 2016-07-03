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

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_t10_21;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t10_16;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t10_19;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
extern "C" void VirtualInput__ctor_m10_183 (VirtualInput_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
extern "C" Vector3_t5_68  VirtualInput_get_virtualMousePosition_m10_184 (VirtualInput_t10_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
extern "C" void VirtualInput_set_virtualMousePosition_m10_185 (VirtualInput_t10_21 * __this, Vector3_t5_68  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
extern "C" bool VirtualInput_AxisExists_m10_186 (VirtualInput_t10_21 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
extern "C" bool VirtualInput_ButtonExists_m10_187 (VirtualInput_t10_21 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
extern "C" void VirtualInput_RegisterVirtualAxis_m10_188 (VirtualInput_t10_21 * __this, VirtualAxis_t10_16 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
extern "C" void VirtualInput_RegisterVirtualButton_m10_189 (VirtualInput_t10_21 * __this, VirtualButton_t10_19 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
extern "C" void VirtualInput_UnRegisterVirtualAxis_m10_190 (VirtualInput_t10_21 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
extern "C" void VirtualInput_UnRegisterVirtualButton_m10_191 (VirtualInput_t10_21 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
extern "C" VirtualAxis_t10_16 * VirtualInput_VirtualAxisReference_m10_192 (VirtualInput_t10_21 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionX_m10_193 (VirtualInput_t10_21 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionY_m10_194 (VirtualInput_t10_21 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
extern "C" void VirtualInput_SetVirtualMousePositionZ_m10_195 (VirtualInput_t10_21 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
