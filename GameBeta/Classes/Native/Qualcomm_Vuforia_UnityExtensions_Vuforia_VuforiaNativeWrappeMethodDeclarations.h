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

// Vuforia.VuforiaNativeWrapper
struct VuforiaNativeWrapper_t6_151;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1_146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceInitCamera_m6_1251 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceDeinitCamera_m6_1252 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceStartCamera_m6_1253 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceStopCamera_m6_1254 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceGetNumVideoModes_m6_1255 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeWrapper_CameraDeviceGetVideoMode_m6_1256 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSelectVideoMode_m6_1257 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetFlashTorchMode_m6_1258 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetFocusMode_m6_1259 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetCameraConfiguration_m6_1260 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_CameraDeviceGetCameraFieldOfViewRads_m6_1261 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarSetFrameFormat_m6_1262 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetExists_m6_1263 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetLoad_m6_1264 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetNumTrackableType_m6_1265 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetTrackablesOfType_m6_1266 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetTrackableName_m6_1267 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetCreateTrackable_m6_1268 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetDestroyTrackable_m6_1269 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetHasReachedTrackableLimit_m6_1270 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNativeWrapper_GetCameraThreadID_m6_1271 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetBuilderBuild_m6_1272 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeWrapper_FrameCounterGetBenchmarkingData_m6_1273 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNativeWrapper_ImageTargetBuilderStartScan_m6_1274 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNativeWrapper_ImageTargetBuilderStopScan_m6_1275 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeWrapper_ImageTargetBuilderGetFrameQuality_m6_1276 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeWrapper_ImageTargetBuilderGetTrackableSource_m6_1277 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetCreateVirtualButton_m6_1278 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetDestroyVirtualButton_m6_1279 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonGetId_m6_1280 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetNumVirtualButtons_m6_1281 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtons_m6_1282 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtonName_m6_1283 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t1_146 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetGetDimensions_m6_1284 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetSideLength_m6_1285 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetTopDiameter_m6_1286 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetBottomDiameter_m6_1287 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTargetSetSize_m6_1288 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTargetGetSize_m6_1289 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerStart_m6_1290 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ObjectTrackerStop()
extern "C" void VuforiaNativeWrapper_ObjectTrackerStop_m6_1291 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeWrapper_ObjectTrackerCreateDataSet_m6_1292 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerDestroyDataSet_m6_1293 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerActivateDataSet_m6_1294 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerDeactivateDataSet_m6_1295 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerPersistExtendedTracking_m6_1296 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerResetExtendedTracking_m6_1297 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeWrapper_MarkerSetSize_m6_1298 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerStart_m6_1299 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::MarkerTrackerStop()
extern "C" void VuforiaNativeWrapper_MarkerTrackerStop_m6_1300 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerCreateMarker_m6_1301 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerDestroyMarker_m6_1302 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitPlatformNative()
extern "C" void VuforiaNativeWrapper_InitPlatformNative_m6_1303 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_InitFrameState_m6_1304 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_DeinitFrameState_m6_1305 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_OnSurfaceChanged_m6_1306 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnPause()
extern "C" void VuforiaNativeWrapper_OnPause_m6_1307 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnResume()
extern "C" void VuforiaNativeWrapper_OnResume_m6_1308 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeWrapper_HasSurfaceBeenRecreated_m6_1309 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_UpdateQCAR_m6_1310 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererEnd()
extern "C" void VuforiaNativeWrapper_RendererEnd_m6_1311 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarGetBufferSize_m6_1312 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_QcarAddCameraFrame_m6_1313 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererSetVideoBackgroundCfg_m6_1314 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererGetVideoBackgroundCfg_m6_1315 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererGetVideoBackgroundTextureInfo_m6_1316 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTextureID_m6_1317 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m6_1318 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_RendererGetRecommendedFps_m6_1319 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarSetHint_m6_1320 (VuforiaNativeWrapper_t6_151 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_GetProjectionGL_m6_1321 (VuforiaNativeWrapper_t6_151 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_SetApplicationEnvironment_m6_1322 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNativeWrapper_SetStateBufferSize_m6_1323 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_SmartTerrainTrackerStart_m6_1324 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNativeWrapper_SmartTerrainTrackerStop_m6_1325 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m6_1326 (VuforiaNativeWrapper_t6_151 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerInitBuilder_m6_1327 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerDeinitBuilder_m6_1328 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m6_1329 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m6_1330 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderAddReconstruction_m6_1331 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m6_1332 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m6_1333 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionStart_m6_1334 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionStop_m6_1335 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionIsReconstructing_m6_1336 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionReset_m6_1337 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeWrapper_ReconstructionSetNavMeshPadding_m6_1338 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m6_1339 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionSetMaximumArea_m6_1340 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m6_1341 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStartInit_m6_1342 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderGetInitState_m6_1343 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderDeinit_m6_1344 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStartRecognition_m6_1345 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStop_m6_1346 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_TargetFinderSetUIScanlineColor_m6_1347 (VuforiaNativeWrapper_t6_151 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_TargetFinderSetUIPointColor_m6_1348 (VuforiaNativeWrapper_t6_151 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_TargetFinderUpdate_m6_1349 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderGetResults_m6_1350 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderEnableTracking_m6_1351 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_TargetFinderGetImageTargets_m6_1352 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNativeWrapper_TargetFinderClearTrackables_m6_1353 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_TextTrackerStart_m6_1354 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerStop()
extern "C" void VuforiaNativeWrapper_TextTrackerStop_m6_1355 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TextTrackerSetRegionOfInterest_m6_1356 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNativeWrapper_TextTrackerGetRegionOfInterest_m6_1357 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListLoadWordList_m6_1358 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordsFromFile_m6_1359 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordU_m6_1360 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListRemoveWordU_m6_1361 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListContainsWordU_m6_1362 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNativeWrapper_WordListUnloadAllLists_m6_1363 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListSetFilterMode_m6_1364 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNativeWrapper_WordListGetFilterMode_m6_1365 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListLoadFilterList_m6_1366 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordToFilterListU_m6_1367 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListRemoveWordFromFilterListU_m6_1368 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNativeWrapper_WordListClearFilterList_m6_1369 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeWrapper_WordListGetFilterListWordCount_m6_1370 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_WordListGetFilterListWordU_m6_1371 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordGetLetterMask_m6_1372 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordGetLetterBoundingBoxes_m6_1373 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TrackerManagerInitTracker_m6_1374 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TrackerManagerDeinitTracker_m6_1375 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetEnabled_m6_1376 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetSensitivity_m6_1377 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetAreaRectangle_m6_1378 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNativeWrapper_QcarInit_m6_1379 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarDeinit()
extern "C" int32_t VuforiaNativeWrapper_QcarDeinit_m6_1380 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_StartExtendedTracking_m6_1381 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_StopExtendedTracking_m6_1382 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNativeWrapper_EyewearIsDeviceDetected_m6_1383 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNativeWrapper_EyewearSetHeadsetPresent_m6_1384 (VuforiaNativeWrapper_t6_151 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNativeWrapper_EyewearSetHeadsetNotPresent_m6_1385 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNativeWrapper_EyewearIsSeeThru_m6_1386 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeWrapper_EyewearGetScreenOrientation_m6_1387 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoCapable_m6_1388 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoEnabled_m6_1389 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoGLOnly_m6_1390 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNativeWrapper_EyewearSetStereo_m6_1391 (VuforiaNativeWrapper_t6_151 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNativeWrapper_EyewearIsPredictiveTrackingEnabled_m6_1392 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNativeWrapper_EyewearSetPredictiveTracking_m6_1393 (VuforiaNativeWrapper_t6_151 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_EyewearSetProjectionClippingPlanes_m6_1394 (VuforiaNativeWrapper_t6_151 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_EyewearGetProjectionMatrix_m6_1395 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetMaxCount_m6_1396 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetUsedCount_m6_1397 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMIsProfileUsed_m6_1398 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetActiveProfile_m6_1399 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetActiveProfile_m6_1400 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetProjectionMatrix_m6_1401 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetProjectionMatrix_m6_1402 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_EyewearCPMGetProfileName_m6_1403 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetProfileName_m6_1404 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMClearProfile_m6_1405 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorInit_m6_1406 (VuforiaNativeWrapper_t6_151 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m6_1407 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m6_1408 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorIsStereoStretched_m6_1409 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m6_1410 (VuforiaNativeWrapper_t6_151 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceInitCamera_m6_1411 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceDeinitCamera_m6_1412 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceStartCamera_m6_1413 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceStopCamera_m6_1414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceGetNumVideoModes_m6_1415 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeWrapper_cameraDeviceGetVideoMode_m6_1416 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSelectVideoMode_m6_1417 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetFlashTorchMode_m6_1418 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetFocusMode_m6_1419 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetCameraConfiguration_m6_1420 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceGetCameraFieldOfViewRads_m6_1421 (Object_t * __this /* static, unused */, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarSetFrameFormat_m6_1422 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetExists_m6_1423 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetLoad_m6_1424 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetNumTrackableType_m6_1425 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetTrackablesOfType_m6_1426 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetTrackableName_m6_1427 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetCreateTrackable_m6_1428 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetDestroyTrackable_m6_1429 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetHasReachedTrackableLimit_m6_1430 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getCameraThreadID()
extern "C" int32_t VuforiaNativeWrapper_getCameraThreadID_m6_1431 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_imageTargetBuilderBuild_m6_1432 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeWrapper_frameCounterGetBenchmarkingData_m6_1433 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStartScan()
extern "C" void VuforiaNativeWrapper_imageTargetBuilderStartScan_m6_1434 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStopScan()
extern "C" void VuforiaNativeWrapper_imageTargetBuilderStopScan_m6_1435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeWrapper_imageTargetBuilderGetFrameQuality_m6_1436 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeWrapper_imageTargetBuilderGetTrackableSource_m6_1437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_imageTargetCreateVirtualButton_m6_1438 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetDestroyVirtualButton_m6_1439 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonGetId_m6_1440 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetNumVirtualButtons_m6_1441 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtons_m6_1442 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtonName_m6_1443 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t1_146 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetGetDimensions_m6_1444 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetSideLength_m6_1445 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetTopDiameter_m6_1446 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetBottomDiameter_m6_1447 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTargetSetSize_m6_1448 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTargetGetSize_m6_1449 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_objectTrackerStart_m6_1450 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::objectTrackerStop()
extern "C" void VuforiaNativeWrapper_objectTrackerStop_m6_1451 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeWrapper_objectTrackerCreateDataSet_m6_1452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerDestroyDataSet_m6_1453 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerActivateDataSet_m6_1454 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerDeactivateDataSet_m6_1455 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerPersistExtendedTracking_m6_1456 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeWrapper_objectTrackerResetExtendedTracking_m6_1457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeWrapper_markerSetSize_m6_1458 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_markerTrackerStart_m6_1459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::markerTrackerStop()
extern "C" void VuforiaNativeWrapper_markerTrackerStop_m6_1460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_markerTrackerCreateMarker_m6_1461 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initPlatformNative()
extern "C" void VuforiaNativeWrapper_initPlatformNative_m6_1462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_markerTrackerDestroyMarker_m6_1463 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_initFrameState_m6_1464 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::deinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_deinitFrameState_m6_1465 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_onSurfaceChanged_m6_1466 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onPause()
extern "C" void VuforiaNativeWrapper_onPause_m6_1467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onResume()
extern "C" void VuforiaNativeWrapper_onResume_m6_1468 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::hasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeWrapper_hasSurfaceBeenRecreated_m6_1469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_updateQCAR_m6_1470 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererEnd()
extern "C" void VuforiaNativeWrapper_rendererEnd_m6_1471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarGetBufferSize_m6_1472 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_qcarAddCameraFrame_m6_1473 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererSetVideoBackgroundCfg_m6_1474 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererGetVideoBackgroundCfg_m6_1475 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererGetVideoBackgroundTextureInfo_m6_1476 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTextureID_m6_1477 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m6_1478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_rendererGetRecommendedFps_m6_1479 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarInit(System.String)
extern "C" int32_t VuforiaNativeWrapper_qcarInit_m6_1480 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarSetHint_m6_1481 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_getProjectionGL_m6_1482 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_setApplicationEnvironment_m6_1483 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setStateBufferSize(System.Int32)
extern "C" void VuforiaNativeWrapper_setStateBufferSize_m6_1484 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_smartTerrainTrackerStart_m6_1485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::smartTerrainTrackerStop()
extern "C" void VuforiaNativeWrapper_smartTerrainTrackerStop_m6_1486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m6_1487 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerInitBuilder_m6_1488 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerDeinitBuilder_m6_1489 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m6_1490 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m6_1491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderAddReconstruction_m6_1492 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderRemoveReconstruction_m6_1493 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderDestroyReconstruction_m6_1494 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionStart_m6_1495 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionStop_m6_1496 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionIsReconstructing_m6_1497 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionReset_m6_1498 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeWrapper_reconstructionSetNavMeshPadding_m6_1499 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeWrapper_reconstructionFromTargetSetInitializationTarget_m6_1500 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionSetMaximumArea_m6_1501 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m6_1502 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_targetFinderStartInit_m6_1503 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetInitState()
extern "C" int32_t VuforiaNativeWrapper_targetFinderGetInitState_m6_1504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderDeinit()
extern "C" int32_t VuforiaNativeWrapper_targetFinderDeinit_m6_1505 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartRecognition()
extern "C" int32_t VuforiaNativeWrapper_targetFinderStartRecognition_m6_1506 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStop()
extern "C" int32_t VuforiaNativeWrapper_targetFinderStop_m6_1507 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_targetFinderSetUIScanlineColor_m6_1508 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_targetFinderSetUIPointColor_m6_1509 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_targetFinderUpdate_m6_1510 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_targetFinderGetResults_m6_1511 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_targetFinderEnableTracking_m6_1512 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_targetFinderGetImageTargets_m6_1513 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderClearTrackables()
extern "C" void VuforiaNativeWrapper_targetFinderClearTrackables_m6_1514 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_textTrackerStart_m6_1515 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::textTrackerStop()
extern "C" void VuforiaNativeWrapper_textTrackerStop_m6_1516 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_textTrackerSetRegionOfInterest_m6_1517 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_textTrackerGetRegionOfInterest_m6_1518 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListLoadWordList_m6_1519 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordsFromFile_m6_1520 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordU_m6_1521 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListRemoveWordU_m6_1522 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListContainsWordU_m6_1523 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListUnloadAllLists()
extern "C" int32_t VuforiaNativeWrapper_wordListUnloadAllLists_m6_1524 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListSetFilterMode_m6_1525 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterMode()
extern "C" int32_t VuforiaNativeWrapper_wordListGetFilterMode_m6_1526 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordToFilterListU_m6_1527 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListRemoveWordFromFilterListU_m6_1528 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListClearFilterList()
extern "C" int32_t VuforiaNativeWrapper_wordListClearFilterList_m6_1529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListLoadFilterList_m6_1530 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeWrapper_wordListGetFilterListWordCount_m6_1531 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_wordListGetFilterListWordU_m6_1532 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordGetLetterMask_m6_1533 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordGetLetterBoundingBoxes_m6_1534 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_trackerManagerInitTracker_m6_1535 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_trackerManagerDeinitTracker_m6_1536 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetEnabled_m6_1537 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetSensitivity_m6_1538 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetAreaRectangle_m6_1539 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarDeinit()
extern "C" int32_t VuforiaNativeWrapper_qcarDeinit_m6_1540 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_startExtendedTracking_m6_1541 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_stopExtendedTracking_m6_1542 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsDeviceDetected()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsDeviceDetected_m6_1543 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetHeadsetPresent(System.String)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetHeadsetPresent_m6_1544 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetHeadsetNotPresent()
extern "C" int32_t VuforiaNativeWrapper_eyewearSetHeadsetNotPresent_m6_1545 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsSeeThru()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsSeeThru_m6_1546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeWrapper_eyewearGetScreenOrientation_m6_1547 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoCapable()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoCapable_m6_1548 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoEnabled()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoEnabled_m6_1549 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoGLOnly_m6_1550 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetStereo_m6_1551 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsPredictiveTrackingEnabled()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsPredictiveTrackingEnabled_m6_1552 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetPredictiveTracking(System.Boolean)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetPredictiveTracking_m6_1553 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::eyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_eyewearSetProjectionClippingPlanes_m6_1554 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_eyewearGetProjectionMatrix_m6_1555 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetMaxCount_m6_1556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetUsedCount_m6_1557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMIsProfileUsed_m6_1558 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetActiveProfile_m6_1559 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetActiveProfile_m6_1560 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetProjectionMatrix_m6_1561 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetProjectionMatrix_m6_1562 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_eyewearCPMGetProfileName_m6_1563 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetProfileName_m6_1564 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMClearProfile_m6_1565 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorInit_m6_1566 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m6_1567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m6_1568 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorIsStereoStretched_m6_1569 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m6_1570 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::.ctor()
extern "C" void VuforiaNativeWrapper__ctor_m6_1571 (VuforiaNativeWrapper_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
