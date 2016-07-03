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

// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t3_78;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3_79;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t3_80;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t3_81;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t3_74;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_828;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t3_117;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t3_156;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t3_166;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BackgroundWorker::.ctor()
extern "C" void BackgroundWorker__ctor_m3_492 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C" void BackgroundWorker_add_DoWork_m3_493 (BackgroundWorker_t3_78 * __this, DoWorkEventHandler_t3_79 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C" void BackgroundWorker_remove_DoWork_m3_494 (BackgroundWorker_t3_78 * __this, DoWorkEventHandler_t3_79 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C" void BackgroundWorker_add_ProgressChanged_m3_495 (BackgroundWorker_t3_78 * __this, ProgressChangedEventHandler_t3_80 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C" void BackgroundWorker_remove_ProgressChanged_m3_496 (BackgroundWorker_t3_78 * __this, ProgressChangedEventHandler_t3_80 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C" void BackgroundWorker_add_RunWorkerCompleted_m3_497 (BackgroundWorker_t3_78 * __this, RunWorkerCompletedEventHandler_t3_81 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C" void BackgroundWorker_remove_RunWorkerCompleted_m3_498 (BackgroundWorker_t3_78 * __this, RunWorkerCompletedEventHandler_t3_81 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_CancellationPending()
extern "C" bool BackgroundWorker_get_CancellationPending_m3_499 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_IsBusy()
extern "C" bool BackgroundWorker_get_IsBusy_m3_500 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerReportsProgress()
extern "C" bool BackgroundWorker_get_WorkerReportsProgress_m3_501 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerReportsProgress(System.Boolean)
extern "C" void BackgroundWorker_set_WorkerReportsProgress_m3_502 (BackgroundWorker_t3_78 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerSupportsCancellation()
extern "C" bool BackgroundWorker_get_WorkerSupportsCancellation_m3_503 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerSupportsCancellation(System.Boolean)
extern "C" void BackgroundWorker_set_WorkerSupportsCancellation_m3_504 (BackgroundWorker_t3_78 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CancelAsync()
extern "C" void BackgroundWorker_CancelAsync_m3_505 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32)
extern "C" void BackgroundWorker_ReportProgress_m3_506 (BackgroundWorker_t3_78 * __this, int32_t ___percentProgress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32,System.Object)
extern "C" void BackgroundWorker_ReportProgress_m3_507 (BackgroundWorker_t3_78 * __this, int32_t ___percentProgress, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync()
extern "C" void BackgroundWorker_RunWorkerAsync_m3_508 (BackgroundWorker_t3_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ProcessWorker(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C" void BackgroundWorker_ProcessWorker_m3_509 (BackgroundWorker_t3_78 * __this, Object_t * ___argument, AsyncOperation_t3_74 * ___async, SendOrPostCallback_t1_828 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CompleteWorker(System.Object)
extern "C" void BackgroundWorker_CompleteWorker_m3_510 (BackgroundWorker_t3_78 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync(System.Object)
extern "C" void BackgroundWorker_RunWorkerAsync_m3_511 (BackgroundWorker_t3_78 * __this, Object_t * ___argument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnDoWork(System.ComponentModel.DoWorkEventArgs)
extern "C" void BackgroundWorker_OnDoWork_m3_512 (BackgroundWorker_t3_78 * __this, DoWorkEventArgs_t3_117 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnProgressChanged(System.ComponentModel.ProgressChangedEventArgs)
extern "C" void BackgroundWorker_OnProgressChanged_m3_513 (BackgroundWorker_t3_78 * __this, ProgressChangedEventArgs_t3_156 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnRunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C" void BackgroundWorker_OnRunWorkerCompleted_m3_514 (BackgroundWorker_t3_78 * __this, RunWorkerCompletedEventArgs_t3_166 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<ReportProgress>m__0(System.Object)
extern "C" void BackgroundWorker_U3CReportProgressU3Em__0_m3_515 (BackgroundWorker_t3_78 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<CompleteWorker>m__1(System.Object)
extern "C" void BackgroundWorker_U3CCompleteWorkerU3Em__1_m3_516 (BackgroundWorker_t3_78 * __this, Object_t * ___darg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
