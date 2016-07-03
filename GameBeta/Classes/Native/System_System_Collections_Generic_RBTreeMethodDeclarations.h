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

// System.Collections.Generic.RBTree
struct RBTree_t3_28;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t1_958;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1_936;
// System.Collections.Generic.RBTree/Node
struct Node_t3_26;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
extern "C" void RBTree__ctor_m3_51 (RBTree_t3_28 * __this, Object_t * ___hlp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
extern "C" Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m3_52 (RBTree_t3_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m3_53 (RBTree_t3_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
extern "C" List_1_t1_936 * RBTree_alloc_path_m3_54 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_release_path_m3_55 (Object_t * __this /* static, unused */, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
extern "C" void RBTree_Clear_m3_56 (RBTree_t3_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
extern "C" int32_t RBTree_get_Count_m3_57 (RBTree_t3_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::get_Item(System.Int32)
extern "C" Node_t3_26 * RBTree_get_Item_m3_58 (RBTree_t3_28 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
extern "C" NodeEnumerator_t3_27  RBTree_GetEnumerator_m3_59 (RBTree_t3_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t3_26 * RBTree_do_insert_m3_60 (RBTree_t3_28 * __this, int32_t ___in_tree_cmp, Node_t3_26 * ___current, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t3_26 * RBTree_do_remove_m3_61 (RBTree_t3_28 * __this, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert_m3_62 (RBTree_t3_28 * __this, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete_m3_63 (RBTree_t3_28 * __this, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_insert__rotate_final_m3_64 (RBTree_t3_28 * __this, int32_t ___curpos, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" void RBTree_rebalance_delete__rotate_final_m3_65 (RBTree_t3_28 * __this, int32_t ___curpos, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" int32_t RBTree_ensure_sibling_black_m3_66 (RBTree_t3_28 * __this, int32_t ___curpos, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
extern "C" void RBTree_node_reparent_m3_67 (RBTree_t3_28 * __this, Node_t3_26 * ___orig_parent, Node_t3_26 * ___orig, uint32_t ___orig_size, Node_t3_26 * ___updated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
extern "C" Node_t3_26 * RBTree_right_most_m3_68 (Object_t * __this /* static, unused */, Node_t3_26 * ___current, Node_t3_26 * ___sibling, List_1_t1_936 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
