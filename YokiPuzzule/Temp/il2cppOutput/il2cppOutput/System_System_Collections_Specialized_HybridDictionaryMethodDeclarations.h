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

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t748;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.IDictionary
struct IDictionary_t118;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t116;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t117;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern "C" void HybridDictionary__ctor_m3836 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Int32,System.Boolean)
extern "C" void HybridDictionary__ctor_m3837 (HybridDictionary_t748 * __this, int32_t ___initialSize, bool ___caseInsensitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m3838 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Collections.Specialized.HybridDictionary::get_inner()
extern "C" Object_t * HybridDictionary_get_inner_m3839 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern "C" int32_t HybridDictionary_get_Count_m3840 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsFixedSize()
extern "C" bool HybridDictionary_get_IsFixedSize_m3841 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsReadOnly()
extern "C" bool HybridDictionary_get_IsReadOnly_m3842 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern "C" bool HybridDictionary_get_IsSynchronized_m3843 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern "C" Object_t * HybridDictionary_get_Item_m3844 (HybridDictionary_t748 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern "C" void HybridDictionary_set_Item_m3845 (HybridDictionary_t748 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Keys()
extern "C" Object_t * HybridDictionary_get_Keys_m3846 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern "C" Object_t * HybridDictionary_get_SyncRoot_m3847 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.HybridDictionary::get_Values()
extern "C" Object_t * HybridDictionary_get_Values_m3848 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern "C" void HybridDictionary_Add_m3849 (HybridDictionary_t748 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Clear()
extern "C" void HybridDictionary_Clear_m3850 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern "C" bool HybridDictionary_Contains_m3851 (HybridDictionary_t748 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern "C" void HybridDictionary_CopyTo_m3852 (HybridDictionary_t748 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern "C" Object_t * HybridDictionary_GetEnumerator_m3853 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern "C" void HybridDictionary_Remove_m3854 (HybridDictionary_t748 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Switch()
extern "C" void HybridDictionary_Switch_m3855 (HybridDictionary_t748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
