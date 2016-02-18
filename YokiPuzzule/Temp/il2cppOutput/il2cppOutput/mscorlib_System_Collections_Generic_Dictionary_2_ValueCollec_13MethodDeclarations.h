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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>
struct ValueCollection_t2061;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2054;
// System.Collections.Generic.IEnumerator`1<LitJson.ArrayMetadata>
struct IEnumerator_1_t2766;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t41;
// System.Object
struct Object_t;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t2051;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13788_gshared (ValueCollection_t2061 * __this, Dictionary_2_t2054 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13788(__this, ___dictionary, method) (( void (*) (ValueCollection_t2061 *, Dictionary_2_t2054 *, const MethodInfo*))ValueCollection__ctor_m13788_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13789_gshared (ValueCollection_t2061 * __this, ArrayMetadata_t60  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13789(__this, ___item, method) (( void (*) (ValueCollection_t2061 *, ArrayMetadata_t60 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13789_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13790_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13790(__this, method) (( void (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13790_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13791_gshared (ValueCollection_t2061 * __this, ArrayMetadata_t60  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13791(__this, ___item, method) (( bool (*) (ValueCollection_t2061 *, ArrayMetadata_t60 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13791_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13792_gshared (ValueCollection_t2061 * __this, ArrayMetadata_t60  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13792(__this, ___item, method) (( bool (*) (ValueCollection_t2061 *, ArrayMetadata_t60 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13792_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13793_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13793(__this, method) (( Object_t* (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13793_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13794_gshared (ValueCollection_t2061 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13794(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2061 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13794_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13795_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13795(__this, method) (( Object_t * (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13796_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13796(__this, method) (( bool (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13797_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13797(__this, method) (( bool (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13798_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13798(__this, method) (( Object_t * (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13799_gshared (ValueCollection_t2061 * __this, ArrayMetadataU5BU5D_t2051* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13799(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2061 *, ArrayMetadataU5BU5D_t2051*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13799_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::GetEnumerator()
extern "C" Enumerator_t2062  ValueCollection_GetEnumerator_m13800_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13800(__this, method) (( Enumerator_t2062  (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_GetEnumerator_m13800_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ArrayMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13801_gshared (ValueCollection_t2061 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13801(__this, method) (( int32_t (*) (ValueCollection_t2061 *, const MethodInfo*))ValueCollection_get_Count_m13801_gshared)(__this, method)
