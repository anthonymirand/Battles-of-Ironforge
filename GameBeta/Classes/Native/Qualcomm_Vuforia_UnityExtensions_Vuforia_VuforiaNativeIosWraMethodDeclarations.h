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

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t6_149;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1_146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m6_769 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m6_770 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m6_771 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m6_772 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m6_773 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m6_774 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m6_775 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m6_776 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m6_777 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m6_778 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m6_779 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m6_780 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetExists_m6_781 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetLoad_m6_782 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m6_783 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m6_784 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m6_785 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m6_786 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m6_787 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m6_788 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m6_789 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m6_790 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m6_791 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m6_792 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m6_793 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m6_794 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m6_795 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m6_796 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m6_797 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m6_798 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m6_799 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m6_800 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m6_801 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t1_146 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m6_802 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m6_803 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m6_804 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m6_805 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m6_806 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m6_807 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerStart_m6_808 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStop()
extern "C" void VuforiaNativeIosWrapper_ObjectTrackerStop_m6_809 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m6_810 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m6_811 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m6_812 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m6_813 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m6_814 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m6_815 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerSetSize_m6_816 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerStart_m6_817 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStop()
extern "C" void VuforiaNativeIosWrapper_MarkerTrackerStop_m6_818 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerCreateMarker_m6_819 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerDestroyMarker_m6_820 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C" void VuforiaNativeIosWrapper_InitPlatformNative_m6_821 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_InitFrameState_m6_822 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_DeinitFrameState_m6_823 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_OnSurfaceChanged_m6_824 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C" void VuforiaNativeIosWrapper_OnPause_m6_825 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C" void VuforiaNativeIosWrapper_OnResume_m6_826 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m6_827 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_UpdateQCAR_m6_828 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C" void VuforiaNativeIosWrapper_RendererEnd_m6_829 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m6_830 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_QcarAddCameraFrame_m6_831 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m6_832 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m6_833 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m6_834 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m6_835 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m6_836 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m6_837 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarSetHint_m6_838 (VuforiaNativeIosWrapper_t6_149 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_GetProjectionGL_m6_839 (VuforiaNativeIosWrapper_t6_149 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_SetApplicationEnvironment_m6_840 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNativeIosWrapper_SetStateBufferSize_m6_841 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerStart_m6_842 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNativeIosWrapper_SmartTerrainTrackerStop_m6_843 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m6_844 (VuforiaNativeIosWrapper_t6_149 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m6_845 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m6_846 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m6_847 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m6_848 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m6_849 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m6_850 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m6_851 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionStart_m6_852 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionStop_m6_853 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m6_854 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionReset_m6_855 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m6_856 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m6_857 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m6_858 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m6_859 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m6_860 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m6_861 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m6_862 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m6_863 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStop_m6_864 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_TargetFinderSetUIScanlineColor_m6_865 (VuforiaNativeIosWrapper_t6_149 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_TargetFinderSetUIPointColor_m6_866 (VuforiaNativeIosWrapper_t6_149 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_TargetFinderUpdate_m6_867 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m6_868 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m6_869 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m6_870 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m6_871 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_TextTrackerStart_m6_872 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerStop()
extern "C" void VuforiaNativeIosWrapper_TextTrackerStop_m6_873 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m6_874 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m6_875 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m6_876 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m6_877 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordU_m6_878 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m6_879 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m6_880 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m6_881 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m6_882 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m6_883 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m6_884 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m6_885 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m6_886 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m6_887 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m6_888 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m6_889 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m6_890 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m6_891 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m6_892 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m6_893 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m6_894 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m6_895 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m6_896 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_QcarInit_m6_897 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_QcarDeinit_m6_898 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m6_899 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m6_900 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsDeviceDetected_m6_901 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetHeadsetPresent_m6_902 (VuforiaNativeIosWrapper_t6_149 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNativeIosWrapper_EyewearSetHeadsetNotPresent_m6_903 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsSeeThru_m6_904 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearGetScreenOrientation_m6_905 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoCapable_m6_906 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoEnabled_m6_907 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoGLOnly_m6_908 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetStereo_m6_909 (VuforiaNativeIosWrapper_t6_149 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsPredictiveTrackingEnabled_m6_910 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetPredictiveTracking_m6_911 (VuforiaNativeIosWrapper_t6_149 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_EyewearSetProjectionClippingPlanes_m6_912 (VuforiaNativeIosWrapper_t6_149 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_EyewearGetProjectionMatrix_m6_913 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m6_914 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m6_915 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m6_916 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m6_917 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m6_918 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetProjectionMatrix_m6_919 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetProjectionMatrix_m6_920 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m6_921 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m6_922 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMClearProfile_m6_923 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m6_924 (VuforiaNativeIosWrapper_t6_149 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m6_925 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m6_926 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m6_927 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m6_928 (VuforiaNativeIosWrapper_t6_149 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_smartTerrainTrackerStart_m6_929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStop()
extern "C" void VuforiaNativeIosWrapper_smartTerrainTrackerStop_m6_930 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m6_931 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m6_932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m6_933 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m6_934 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m6_935 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m6_936 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m6_937 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m6_938 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionStart_m6_939 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionStop_m6_940 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionIsReconstructing_m6_941 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionReset_m6_942 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m6_943 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m6_944 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m6_945 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m6_946 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m6_947 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m6_948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m6_949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m6_950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m6_951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m6_952 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m6_953 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m6_954 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m6_955 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m6_956 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m6_957 (Object_t * __this /* static, unused */, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m6_958 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetExists_m6_959 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetLoad_m6_960 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m6_961 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m6_962 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m6_963 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m6_964 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t1_146 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m6_965 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m6_966 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C" int32_t VuforiaNativeIosWrapper_getCameraThreadID_m6_967 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m6_968 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m6_969 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C" void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m6_970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C" void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m6_971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m6_972 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m6_973 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m6_974 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m6_975 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m6_976 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m6_977 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m6_978 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m6_979 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t1_146 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m6_980 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m6_981 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m6_982 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m6_983 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m6_984 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m6_985 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerStart_m6_986 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::objectTrackerStop()
extern "C" void VuforiaNativeIosWrapper_objectTrackerStop_m6_987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m6_988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m6_989 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m6_990 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m6_991 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m6_992 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m6_993 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_markerSetSize_m6_994 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerStart_m6_995 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::markerTrackerStop()
extern "C" void VuforiaNativeIosWrapper_markerTrackerStop_m6_996 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerCreateMarker_m6_997 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerDestroyMarker_m6_998 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C" void VuforiaNativeIosWrapper_initPlatformNative_m6_999 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_initFrameState_m6_1000 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_deinitFrameState_m6_1001 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_onSurfaceChanged_m6_1002 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C" void VuforiaNativeIosWrapper_onPause_m6_1003 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C" void VuforiaNativeIosWrapper_onResume_m6_1004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m6_1005 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_updateQCAR_m6_1006 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C" void VuforiaNativeIosWrapper_rendererEnd_m6_1007 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m6_1008 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_qcarAddCameraFrame_m6_1009 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m6_1010 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m6_1011 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m6_1012 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m6_1013 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m6_1014 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m6_1015 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_qcarInit_m6_1016 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarSetHint_m6_1017 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_getProjectionGL_m6_1018 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_setApplicationEnvironment_m6_1019 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C" void VuforiaNativeIosWrapper_setStateBufferSize_m6_1020 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m6_1021 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m6_1022 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m6_1023 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m6_1024 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStop_m6_1025 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_targetFinderSetUIScanlineColor_m6_1026 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_targetFinderSetUIPointColor_m6_1027 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_targetFinderUpdate_m6_1028 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m6_1029 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m6_1030 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m6_1031 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C" void VuforiaNativeIosWrapper_targetFinderClearTrackables_m6_1032 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerStart_m6_1033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerStop()
extern "C" void VuforiaNativeIosWrapper_textTrackerStop_m6_1034 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m6_1035 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m6_1036 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m6_1037 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m6_1038 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordU_m6_1039 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m6_1040 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m6_1041 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C" int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m6_1042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m6_1043 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C" int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m6_1044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m6_1045 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m6_1046 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C" int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m6_1047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m6_1048 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m6_1049 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m6_1050 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m6_1051 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m6_1052 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m6_1053 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m6_1054 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m6_1055 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m6_1056 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m6_1057 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_qcarDeinit_m6_1058 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_startExtendedTracking_m6_1059 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m6_1060 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsDeviceDetected()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsDeviceDetected_m6_1061 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetPresent(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetPresent_m6_1062 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetNotPresent()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetNotPresent_m6_1063 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsSeeThru()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsSeeThru_m6_1064 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearGetScreenOrientation_m6_1065 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoCapable()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoCapable_m6_1066 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoEnabled()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoEnabled_m6_1067 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoGLOnly_m6_1068 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetStereo_m6_1069 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsPredictiveTrackingEnabled()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsPredictiveTrackingEnabled_m6_1070 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetPredictiveTracking(System.Boolean)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetPredictiveTracking_m6_1071 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_eyewearSetProjectionClippingPlanes_m6_1072 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_eyewearGetProjectionMatrix_m6_1073 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m6_1074 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m6_1075 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m6_1076 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m6_1077 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m6_1078 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetProjectionMatrix_m6_1079 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetProjectionMatrix_m6_1080 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m6_1081 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m6_1082 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m6_1083 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m6_1084 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m6_1085 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m6_1086 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m6_1087 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m6_1088 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C" void VuforiaNativeIosWrapper__ctor_m6_1089 (VuforiaNativeIosWrapper_t6_149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
