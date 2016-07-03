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

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t5_101;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ComputeBufferType.h"

// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer__ctor_m5_937 (ComputeBuffer_t5_101 * __this, int32_t ___count, int32_t ___stride, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C" void ComputeBuffer_Finalize_m5_938 (ComputeBuffer_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C" void ComputeBuffer_Dispose_m5_939 (ComputeBuffer_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C" void ComputeBuffer_Dispose_m5_940 (ComputeBuffer_t5_101 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C" void ComputeBuffer_InitBuffer_m5_941 (Object_t * __this /* static, unused */, ComputeBuffer_t5_101 * ___buf, int32_t ___count, int32_t ___stride, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C" void ComputeBuffer_DestroyBuffer_m5_942 (Object_t * __this /* static, unused */, ComputeBuffer_t5_101 * ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C" void ComputeBuffer_Release_m5_943 (ComputeBuffer_t5_101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern "C" void ComputeBuffer_SetData_m5_944 (ComputeBuffer_t5_101 * __this, Array_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C" void ComputeBuffer_InternalSetData_m5_945 (ComputeBuffer_t5_101 * __this, Array_t * ___data, int32_t ___elemSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C" void ComputeBuffer_CopyCount_m5_946 (Object_t * __this /* static, unused */, ComputeBuffer_t5_101 * ___src, ComputeBuffer_t5_101 * ___dst, int32_t ___dstOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
