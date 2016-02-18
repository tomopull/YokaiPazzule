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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>
struct KeyCollection_t2057;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2054;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t140;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object[]
struct ObjectU5BU5D_t164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_9.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13750_gshared (KeyCollection_t2057 * __this, Dictionary_2_t2054 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m13750(__this, ___dictionary, method) (( void (*) (KeyCollection_t2057 *, Dictionary_2_t2054 *, const MethodInfo*))KeyCollection__ctor_m13750_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13751_gshared (KeyCollection_t2057 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13751(__this, ___item, method) (( void (*) (KeyCollection_t2057 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13751_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13752_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13752(__this, method) (( void (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13752_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13753_gshared (KeyCollection_t2057 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13753(__this, ___item, method) (( bool (*) (KeyCollection_t2057 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13753_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13754_gshared (KeyCollection_t2057 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13754(__this, ___item, method) (( bool (*) (KeyCollection_t2057 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13754_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13755_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13755(__this, method) (( Object_t* (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13755_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13756_gshared (KeyCollection_t2057 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m13756(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2057 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m13756_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13757_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13757(__this, method) (( Object_t * (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13758_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13758(__this, method) (( bool (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13758_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13759_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13759(__this, method) (( bool (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13759_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13760_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m13760(__this, method) (( Object_t * (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m13760_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13761_gshared (KeyCollection_t2057 * __this, ObjectU5BU5D_t164* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m13761(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2057 *, ObjectU5BU5D_t164*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m13761_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2058  KeyCollection_GetEnumerator_m13762_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m13762(__this, method) (( Enumerator_t2058  (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_GetEnumerator_m13762_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13763_gshared (KeyCollection_t2057 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m13763(__this, method) (( int32_t (*) (KeyCollection_t2057 *, const MethodInfo*))KeyCollection_get_Count_m13763_gshared)(__this, method)
