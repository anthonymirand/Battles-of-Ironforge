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

// UnityEngine.Camera
struct Camera_t5_100;
// UnityEngine.RenderTexture
struct RenderTexture_t5_52;
// UnityEngine.Camera[]
struct CameraU5BU5D_t5_283;
// UnityEngine.Shader
struct Shader_t5_88;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderingPath.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_DepthTextureMode.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m5_860 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m5_861 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m5_862 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern "C" void Camera_set_nearClipPlane_m5_863 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m5_864 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern "C" void Camera_set_farClipPlane_m5_865 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
extern "C" void Camera_set_renderingPath_m5_866 (Camera_t5_100 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_hdr()
extern "C" bool Camera_get_hdr_m5_867 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m5_868 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m5_869 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C" bool Camera_get_orthographic_m5_870 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" void Camera_set_orthographic_m5_871 (Camera_t5_100 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m5_872 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m5_873 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C" float Camera_get_aspect_m5_874 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern "C" void Camera_set_aspect_m5_875 (Camera_t5_100 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m5_876 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m5_877 (Camera_t5_100 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m5_878 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
extern "C" Color_t5_58  Camera_get_backgroundColor_m5_879 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m5_880 (Camera_t5_100 * __this, Color_t5_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_get_backgroundColor_m5_881 (Camera_t5_100 * __this, Color_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m5_882 (Camera_t5_100 * __this, Color_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t5_37  Camera_get_rect_m5_883 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m5_884 (Camera_t5_100 * __this, Rect_t5_37  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m5_885 (Camera_t5_100 * __this, Rect_t5_37 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m5_886 (Camera_t5_100 * __this, Rect_t5_37 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t5_37  Camera_get_pixelRect_m5_887 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_pixelRect(UnityEngine.Rect)
extern "C" void Camera_set_pixelRect_m5_888 (Camera_t5_100 * __this, Rect_t5_37  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m5_889 (Camera_t5_100 * __this, Rect_t5_37 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_pixelRect_m5_890 (Camera_t5_100 * __this, Rect_t5_37 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t5_52 * Camera_get_targetTexture_m5_891 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" void Camera_set_targetTexture_m5_892 (Camera_t5_100 * __this, RenderTexture_t5_52 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C" int32_t Camera_get_pixelWidth_m5_893 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C" int32_t Camera_get_pixelHeight_m5_894 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_cameraToWorldMatrix()
extern "C" Matrix4x4_t5_70  Camera_get_cameraToWorldMatrix_m5_895 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_cameraToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_cameraToWorldMatrix_m5_896 (Camera_t5_100 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C" Matrix4x4_t5_70  Camera_get_worldToCameraMatrix_m5_897 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
extern "C" void Camera_set_worldToCameraMatrix_m5_898 (Camera_t5_100 * __this, Matrix4x4_t5_70  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_worldToCameraMatrix_m5_899 (Camera_t5_100 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_worldToCameraMatrix_m5_900 (Camera_t5_100 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t5_70  Camera_get_projectionMatrix_m5_901 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" void Camera_set_projectionMatrix_m5_902 (Camera_t5_100 * __this, Matrix4x4_t5_70  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m5_903 (Camera_t5_100 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m5_904 (Camera_t5_100 * __this, Matrix4x4_t5_70 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m5_905 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m5_906 (Camera_t5_100 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_stereoSeparation()
extern "C" float Camera_get_stereoSeparation_m5_907 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Camera_WorldToScreenPoint_m5_908 (Camera_t5_100 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Camera_INTERNAL_CALL_WorldToScreenPoint_m5_909 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Camera_WorldToViewportPoint_m5_910 (Camera_t5_100 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Camera_INTERNAL_CALL_WorldToViewportPoint_m5_911 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Camera_ScreenToWorldPoint_m5_912 (Camera_t5_100 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Camera_INTERNAL_CALL_ScreenToWorldPoint_m5_913 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_68  Camera_ScreenToViewportPoint_m5_914 (Camera_t5_100 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5_68  Camera_INTERNAL_CALL_ScreenToViewportPoint_m5_915 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t5_73  Camera_ScreenPointToRay_m5_916 (Camera_t5_100 * __this, Vector3_t5_68  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t5_73  Camera_INTERNAL_CALL_ScreenPointToRay_m5_917 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector3_t5_68 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t5_100 * Camera_get_main_m5_918 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" Camera_t5_100 * Camera_get_current_m5_919 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m5_920 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m5_921 (Object_t * __this /* static, unused */, CameraU5BU5D_t5_283* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m5_922 (Object_t * __this /* static, unused */, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m5_923 (Object_t * __this /* static, unused */, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m5_924 (Object_t * __this /* static, unused */, Camera_t5_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::Render()
extern "C" void Camera_Render_m5_925 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern "C" void Camera_RenderWithShader_m5_926 (Camera_t5_100 * __this, Shader_t5_88 * ___shader, String_t* ___replacementTag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern "C" void Camera_set_useOcclusionCulling_m5_927 (Camera_t5_100 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" void Camera_CopyFrom_m5_928 (Camera_t5_100 * __this, Camera_t5_100 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C" int32_t Camera_get_depthTextureMode_m5_929 (Camera_t5_100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C" void Camera_set_depthTextureMode_m5_930 (Camera_t5_100 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t5_113 * Camera_RaycastTry_m5_931 (Camera_t5_100 * __this, Ray_t5_73  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t5_113 * Camera_INTERNAL_CALL_RaycastTry_m5_932 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Ray_t5_73 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t5_113 * Camera_RaycastTry2D_m5_933 (Camera_t5_100 * __this, Ray_t5_73  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t5_113 * Camera_INTERNAL_CALL_RaycastTry2D_m5_934 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Ray_t5_73 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
extern "C" Matrix4x4_t5_70  Camera_CalculateObliqueMatrix_m5_935 (Camera_t5_100 * __this, Vector4_t5_72  ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)
extern "C" Matrix4x4_t5_70  Camera_INTERNAL_CALL_CalculateObliqueMatrix_m5_936 (Object_t * __this /* static, unused */, Camera_t5_100 * ___self, Vector4_t5_72 * ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
