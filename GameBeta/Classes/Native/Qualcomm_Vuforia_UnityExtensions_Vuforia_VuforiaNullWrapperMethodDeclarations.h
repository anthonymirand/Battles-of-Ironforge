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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t6_150;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1_146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m6_1090 (VuforiaNullWrapper_t6_150 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m6_1091 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m6_1092 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m6_1093 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m6_1094 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNullWrapper_CameraDeviceGetVideoMode_m6_1095 (VuforiaNullWrapper_t6_150 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m6_1096 (VuforiaNullWrapper_t6_150 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m6_1097 (VuforiaNullWrapper_t6_150 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m6_1098 (VuforiaNullWrapper_t6_150 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m6_1099 (VuforiaNullWrapper_t6_150 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m6_1100 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetFrameFormat_m6_1101 (VuforiaNullWrapper_t6_150 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetExists_m6_1102 (VuforiaNullWrapper_t6_150 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetLoad_m6_1103 (VuforiaNullWrapper_t6_150 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m6_1104 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m6_1105 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetGetTrackableName_m6_1106 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetCreateTrackable_m6_1107 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m6_1108 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m6_1109 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNullWrapper_GetCameraThreadID_m6_1110 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m6_1111 (VuforiaNullWrapper_t6_150 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m6_1112 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStartScan_m6_1113 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNullWrapper_ImageTargetBuilderStopScan_m6_1114 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m6_1115 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m6_1116 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m6_1117 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m6_1118 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonGetId_m6_1119 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m6_1120 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m6_1121 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m6_1122 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t1_146 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m6_1123 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m6_1124 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m6_1125 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m6_1126 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetSetSize_m6_1127 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTargetGetSize_m6_1128 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerStart_m6_1129 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ObjectTrackerStop()
extern "C" void VuforiaNullWrapper_ObjectTrackerStop_m6_1130 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m6_1131 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m6_1132 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m6_1133 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m6_1134 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m6_1135 (VuforiaNullWrapper_t6_150 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m6_1136 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerStart_m6_1137 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::MarkerTrackerStop()
extern "C" void VuforiaNullWrapper_MarkerTrackerStop_m6_1138 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_OnSurfaceChanged_m6_1139 (VuforiaNullWrapper_t6_150 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C" void VuforiaNullWrapper_OnPause_m6_1140 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C" void VuforiaNullWrapper_OnResume_m6_1141 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m6_1142 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerSetSize_m6_1143 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m6_1144 (VuforiaNullWrapper_t6_150 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m6_1145 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C" void VuforiaNullWrapper_InitPlatformNative_m6_1146 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_InitFrameState_m6_1147 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNullWrapper_DeinitFrameState_m6_1148 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_UpdateQCAR_m6_1149 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C" void VuforiaNullWrapper_RendererEnd_m6_1150 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarGetBufferSize_m6_1151 (VuforiaNullWrapper_t6_150 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_QcarAddCameraFrame_m6_1152 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m6_1153 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m6_1154 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m6_1155 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m6_1156 (VuforiaNullWrapper_t6_150 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m6_1157 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m6_1158 (VuforiaNullWrapper_t6_150 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_QcarSetHint_m6_1159 (VuforiaNullWrapper_t6_150 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_GetProjectionGL_m6_1160 (VuforiaNullWrapper_t6_150 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNullWrapper_SetApplicationEnvironment_m6_1161 (VuforiaNullWrapper_t6_150 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNullWrapper_SetStateBufferSize_m6_1162 (VuforiaNullWrapper_t6_150 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNullWrapper_SmartTerrainTrackerStart_m6_1163 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNullWrapper_SmartTerrainTrackerStop_m6_1164 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m6_1165 (VuforiaNullWrapper_t6_150 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m6_1166 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m6_1167 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m6_1168 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m6_1169 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m6_1170 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m6_1171 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m6_1172 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStart_m6_1173 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionStop_m6_1174 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionIsReconstructing_m6_1175 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionReset_m6_1176 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m6_1177 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m6_1178 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m6_1179 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m6_1180 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartInit_m6_1181 (VuforiaNullWrapper_t6_150 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetInitState_m6_1182 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNullWrapper_TargetFinderDeinit_m6_1183 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m6_1184 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNullWrapper_TargetFinderStop_m6_1185 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m6_1186 (VuforiaNullWrapper_t6_150 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNullWrapper_TargetFinderSetUIPointColor_m6_1187 (VuforiaNullWrapper_t6_150 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderUpdate_m6_1188 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TargetFinderGetResults_m6_1189 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m6_1190 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_TargetFinderGetImageTargets_m6_1191 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNullWrapper_TargetFinderClearTrackables_m6_1192 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNullWrapper_TextTrackerStart_m6_1193 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerStop()
extern "C" void VuforiaNullWrapper_TextTrackerStop_m6_1194 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m6_1195 (VuforiaNullWrapper_t6_150 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m6_1196 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadWordList_m6_1197 (VuforiaNullWrapper_t6_150 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m6_1198 (VuforiaNullWrapper_t6_150 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordU_m6_1199 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordU_m6_1200 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListContainsWordU_m6_1201 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNullWrapper_WordListUnloadAllLists_m6_1202 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListSetFilterMode_m6_1203 (VuforiaNullWrapper_t6_150 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterMode_m6_1204 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_WordListLoadFilterList_m6_1205 (VuforiaNullWrapper_t6_150 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m6_1206 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m6_1207 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNullWrapper_WordListClearFilterList_m6_1208 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m6_1209 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m6_1210 (VuforiaNullWrapper_t6_150 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterMask_m6_1211 (VuforiaNullWrapper_t6_150 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m6_1212 (VuforiaNullWrapper_t6_150 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m6_1213 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m6_1214 (VuforiaNullWrapper_t6_150 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m6_1215 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m6_1216 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m6_1217 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNullWrapper_QcarInit_m6_1218 (VuforiaNullWrapper_t6_150 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C" int32_t VuforiaNullWrapper_QcarDeinit_m6_1219 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StartExtendedTracking_m6_1220 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNullWrapper_StopExtendedTracking_m6_1221 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNullWrapper_EyewearIsDeviceDetected_m6_1222 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetPresent_m6_1223 (VuforiaNullWrapper_t6_150 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNullWrapper_EyewearSetHeadsetNotPresent_m6_1224 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNullWrapper_EyewearIsSeeThru_m6_1225 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNullWrapper_EyewearGetScreenOrientation_m6_1226 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoCapable_m6_1227 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoEnabled_m6_1228 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNullWrapper_EyewearIsStereoGLOnly_m6_1229 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetStereo_m6_1230 (VuforiaNullWrapper_t6_150 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNullWrapper_EyewearIsPredictiveTrackingEnabled_m6_1231 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNullWrapper_EyewearSetPredictiveTracking_m6_1232 (VuforiaNullWrapper_t6_150 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNullWrapper_EyewearSetProjectionClippingPlanes_m6_1233 (VuforiaNullWrapper_t6_150 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNullWrapper_EyewearGetProjectionMatrix_m6_1234 (VuforiaNullWrapper_t6_150 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m6_1235 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m6_1236 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m6_1237 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m6_1238 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m6_1239 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNullWrapper_EyewearCPMGetProjectionMatrix_m6_1240 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProjectionMatrix_m6_1241 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m6_1242 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearCPMSetProfileName_m6_1243 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearCPMClearProfile_m6_1244 (VuforiaNullWrapper_t6_150 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorInit_m6_1245 (VuforiaNullWrapper_t6_150 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m6_1246 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m6_1247 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m6_1248 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m6_1249 (VuforiaNullWrapper_t6_150 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C" void VuforiaNullWrapper__ctor_m6_1250 (VuforiaNullWrapper_t6_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
