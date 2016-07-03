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

// System.ComponentModel.Design.DesignerTransactionCloseEventArgs
struct DesignerTransactionCloseEventArgs_t3_61;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.DesignerTransactionCloseEventArgs::.ctor(System.Boolean,System.Boolean)
extern "C" void DesignerTransactionCloseEventArgs__ctor_m3_389 (DesignerTransactionCloseEventArgs_t3_61 * __this, bool ___commit, bool ___lastTransaction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerTransactionCloseEventArgs::.ctor(System.Boolean)
extern "C" void DesignerTransactionCloseEventArgs__ctor_m3_390 (DesignerTransactionCloseEventArgs_t3_61 * __this, bool ___commit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.DesignerTransactionCloseEventArgs::get_LastTransaction()
extern "C" bool DesignerTransactionCloseEventArgs_get_LastTransaction_m3_391 (DesignerTransactionCloseEventArgs_t3_61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.DesignerTransactionCloseEventArgs::get_TransactionCommitted()
extern "C" bool DesignerTransactionCloseEventArgs_get_TransactionCommitted_m3_392 (DesignerTransactionCloseEventArgs_t3_61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
