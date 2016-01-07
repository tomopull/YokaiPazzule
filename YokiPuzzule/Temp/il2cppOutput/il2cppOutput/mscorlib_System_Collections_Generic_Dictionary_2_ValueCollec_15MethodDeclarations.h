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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t1998;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1991;
// System.Collections.Generic.IEnumerator`1<LitJson.ObjectMetadata>
struct IEnumerator_1_t2638;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t1989;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_16.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13199_gshared (ValueCollection_t1998 * __this, Dictionary_2_t1991 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13199(__this, ___dictionary, method) (( void (*) (ValueCollection_t1998 *, Dictionary_2_t1991 *, const MethodInfo*))ValueCollection__ctor_m13199_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13200_gshared (ValueCollection_t1998 * __this, ObjectMetadata_t49  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13200(__this, ___item, method) (( void (*) (ValueCollection_t1998 *, ObjectMetadata_t49 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13200_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13201_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13201(__this, method) (( void (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13202_gshared (ValueCollection_t1998 * __this, ObjectMetadata_t49  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13202(__this, ___item, method) (( bool (*) (ValueCollection_t1998 *, ObjectMetadata_t49 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13202_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13203_gshared (ValueCollection_t1998 * __this, ObjectMetadata_t49  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13203(__this, ___item, method) (( bool (*) (ValueCollection_t1998 *, ObjectMetadata_t49 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13203_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13204_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13204(__this, method) (( Object_t* (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13204_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13205_gshared (ValueCollection_t1998 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13205(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1998 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13205_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13206_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13206(__this, method) (( Object_t * (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13206_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13207_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13207(__this, method) (( bool (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13207_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13208_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13208(__this, method) (( bool (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13208_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13209_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13209(__this, method) (( Object_t * (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13209_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13210_gshared (ValueCollection_t1998 * __this, ObjectMetadataU5BU5D_t1989* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13210(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1998 *, ObjectMetadataU5BU5D_t1989*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13210_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t1999  ValueCollection_GetEnumerator_m13211_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13211(__this, method) (( Enumerator_t1999  (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_GetEnumerator_m13211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13212_gshared (ValueCollection_t1998 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13212(__this, method) (( int32_t (*) (ValueCollection_t1998 *, const MethodInfo*))ValueCollection_get_Count_m13212_gshared)(__this, method)
