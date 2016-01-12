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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1861;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1848;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t100;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object[]
struct ObjectU5BU5D_t129;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m11285_gshared (ValueCollection_t1861 * __this, Dictionary_2_t1848 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m11285(__this, ___dictionary, method) (( void (*) (ValueCollection_t1861 *, Dictionary_2_t1848 *, const MethodInfo*))ValueCollection__ctor_m11285_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11286_gshared (ValueCollection_t1861 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11286(__this, ___item, method) (( void (*) (ValueCollection_t1861 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11286_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11287_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11287(__this, method) (( void (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11287_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11288_gshared (ValueCollection_t1861 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11288(__this, ___item, method) (( bool (*) (ValueCollection_t1861 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11288_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11289_gshared (ValueCollection_t1861 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11289(__this, ___item, method) (( bool (*) (ValueCollection_t1861 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11289_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11290_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11290(__this, method) (( Object_t* (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m11291_gshared (ValueCollection_t1861 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m11291(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1861 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m11291_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11292_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11292(__this, method) (( Object_t * (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11293_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11293(__this, method) (( bool (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11294_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11294(__this, method) (( bool (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m11294_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m11295_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11295(__this, method) (( Object_t * (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m11295_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m11296_gshared (ValueCollection_t1861 * __this, ObjectU5BU5D_t129* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m11296(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1861 *, ObjectU5BU5D_t129*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m11296_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1862  ValueCollection_GetEnumerator_m11297_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m11297(__this, method) (( Enumerator_t1862  (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_GetEnumerator_m11297_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m11298_gshared (ValueCollection_t1861 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m11298(__this, method) (( int32_t (*) (ValueCollection_t1861 *, const MethodInfo*))ValueCollection_get_Count_m11298_gshared)(__this, method)
