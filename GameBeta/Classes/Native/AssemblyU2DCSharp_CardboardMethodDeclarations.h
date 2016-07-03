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

// Cardboard
struct Cardboard_t9_22;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t9_21;
// System.Action
struct Action_t4_12;
// StereoController
struct StereoController_t9_23;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// CardboardProfile
struct CardboardProfile_t9_38;
// Pose3D
struct Pose3D_t9_41;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMethod.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Cardboard::.ctor()
extern "C" void Cardboard__ctor_m9_125 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::.cctor()
extern "C" void Cardboard__cctor_m9_126 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C" void Cardboard_add_OnStereoScreenChanged_m9_127 (Cardboard_t9_22 * __this, StereoScreenChangeDelegate_t9_21 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C" void Cardboard_remove_OnStereoScreenChanged_m9_128 (Cardboard_t9_22 * __this, StereoScreenChangeDelegate_t9_21 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTrigger(System.Action)
extern "C" void Cardboard_add_OnTrigger_m9_129 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern "C" void Cardboard_remove_OnTrigger_m9_130 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTilt(System.Action)
extern "C" void Cardboard_add_OnTilt_m9_131 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTilt(System.Action)
extern "C" void Cardboard_remove_OnTilt_m9_132 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnProfileChange(System.Action)
extern "C" void Cardboard_add_OnProfileChange_m9_133 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnProfileChange(System.Action)
extern "C" void Cardboard_remove_OnProfileChange_m9_134 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnBackButton(System.Action)
extern "C" void Cardboard_add_OnBackButton_m9_135 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnBackButton(System.Action)
extern "C" void Cardboard_remove_OnBackButton_m9_136 (Cardboard_t9_22 * __this, Action_t4_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard Cardboard::get_SDK()
extern "C" Cardboard_t9_22 * Cardboard_get_SDK_m9_137 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Create()
extern "C" void Cardboard_Create_m9_138 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController Cardboard::get_Controller()
extern "C" StereoController_t9_23 * Cardboard_get_Controller_m9_139 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_UILayerEnabled()
extern "C" bool Cardboard_get_UILayerEnabled_m9_140 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_UILayerEnabled(System.Boolean)
extern "C" void Cardboard_set_UILayerEnabled_m9_141 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m9_142 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m9_143 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/DistortionCorrectionMethod Cardboard::get_DistortionCorrection()
extern "C" int32_t Cardboard_get_DistortionCorrection_m9_144 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_DistortionCorrection(Cardboard/DistortionCorrectionMethod)
extern "C" void Cardboard_set_DistortionCorrection_m9_145 (Cardboard_t9_22 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C" bool Cardboard_get_EnableAlignmentMarker_m9_146 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern "C" void Cardboard_set_EnableAlignmentMarker_m9_147 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C" bool Cardboard_get_EnableSettingsButton_m9_148 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern "C" void Cardboard_set_EnableSettingsButton_m9_149 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/BackButtonModes Cardboard::get_BackButtonMode()
extern "C" int32_t Cardboard_get_BackButtonMode_m9_150 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonMode(Cardboard/BackButtonModes)
extern "C" void Cardboard_set_BackButtonMode_m9_151 (Cardboard_t9_22 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_TapIsTrigger()
extern "C" bool Cardboard_get_TapIsTrigger_m9_152 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_TapIsTrigger(System.Boolean)
extern "C" void Cardboard_set_TapIsTrigger_m9_153 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_NeckModelScale()
extern "C" float Cardboard_get_NeckModelScale_m9_154 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern "C" void Cardboard_set_NeckModelScale_m9_155 (Cardboard_t9_22 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C" bool Cardboard_get_AutoDriftCorrection_m9_156 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern "C" void Cardboard_set_AutoDriftCorrection_m9_157 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ElectronicDisplayStabilization()
extern "C" bool Cardboard_get_ElectronicDisplayStabilization_m9_158 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ElectronicDisplayStabilization(System.Boolean)
extern "C" void Cardboard_set_ElectronicDisplayStabilization_m9_159 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern "C" bool Cardboard_get_SyncWithCardboardApp_m9_160 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern "C" void Cardboard_set_SyncWithCardboardApp_m9_161 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m9_162 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m9_163 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m9_164 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m9_165 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_StereoScreenScale()
extern "C" float Cardboard_get_StereoScreenScale_m9_166 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreenScale(System.Single)
extern "C" void Cardboard_set_StereoScreenScale_m9_167 (Cardboard_t9_22 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t5_52 * Cardboard_get_StereoScreen_m9_168 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m9_169 (Cardboard_t9_22 * __this, RenderTexture_t5_52 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile Cardboard::get_Profile()
extern "C" CardboardProfile_t9_38 * Cardboard_get_Profile_m9_170 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t9_41 * Cardboard_get_HeadPose_m9_171 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t9_41 * Cardboard_EyePose_m9_172 (Cardboard_t9_22 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t5_70  Cardboard_Projection_m9_173 (Cardboard_t9_22 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t5_37  Cardboard_Viewport_m9_174 (Cardboard_t9_22 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t5_67  Cardboard_get_ComfortableViewingRange_m9_175 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::InitDevice()
extern "C" void Cardboard_InitDevice_m9_176 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Awake()
extern "C" void Cardboard_Awake_m9_177 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Start()
extern "C" void Cardboard_Start_m9_178 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::AddCardboardCamera()
extern "C" void Cardboard_AddCardboardCamera_m9_179 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m9_180 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m9_181 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m9_182 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m9_183 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ProfileChanged()
extern "C" bool Cardboard_get_ProfileChanged_m9_184 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ProfileChanged(System.Boolean)
extern "C" void Cardboard_set_ProfileChanged_m9_185 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_BackButtonPressed()
extern "C" bool Cardboard_get_BackButtonPressed_m9_186 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonPressed(System.Boolean)
extern "C" void Cardboard_set_BackButtonPressed_m9_187 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m9_188 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m9_189 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::PostRender()
extern "C" void Cardboard_PostRender_m9_190 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m9_191 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m9_192 (Cardboard_t9_22 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::ShowSettingsDialog()
extern "C" void Cardboard_ShowSettingsDialog_m9_193 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnEnable()
extern "C" void Cardboard_OnEnable_m9_194 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDisable()
extern "C" void Cardboard_OnDisable_m9_195 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern "C" void Cardboard_OnApplicationPause_m9_196 (Cardboard_t9_22 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern "C" void Cardboard_OnApplicationFocus_m9_197 (Cardboard_t9_22 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern "C" void Cardboard_OnLevelWasLoaded_m9_198 (Cardboard_t9_22 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationQuit()
extern "C" void Cardboard_OnApplicationQuit_m9_199 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDestroy()
extern "C" void Cardboard_OnDestroy_m9_200 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern "C" bool Cardboard_get_nativeDistortionCorrection_m9_201 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_nativeDistortionCorrection_m9_202 (Cardboard_t9_22 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_InCardboard()
extern "C" bool Cardboard_get_InCardboard_m9_203 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_CardboardTriggered()
extern "C" bool Cardboard_get_CardboardTriggered_m9_204 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern "C" Matrix4x4_t5_70  Cardboard_get_HeadView_m9_205 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern "C" Quaternion_t5_69  Cardboard_get_HeadRotation_m9_206 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern "C" Vector3_t5_68  Cardboard_get_HeadPosition_m9_207 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern "C" Matrix4x4_t5_70  Cardboard_EyeView_m9_208 (Cardboard_t9_22 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern "C" Vector3_t5_68  Cardboard_EyeOffset_m9_209 (Cardboard_t9_22 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern "C" Matrix4x4_t5_70  Cardboard_UndistortedProjection_m9_210 (Cardboard_t9_22 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern "C" Rect_t5_37  Cardboard_EyeRect_m9_211 (Cardboard_t9_22 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MinimumComfortDistance()
extern "C" float Cardboard_get_MinimumComfortDistance_m9_212 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MaximumComfortDistance()
extern "C" float Cardboard_get_MaximumComfortDistance_m9_213 (Cardboard_t9_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
