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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t1991;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13181_gshared (Enumerator_t1996 * __this, Dictionary_2_t1991 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13181(__this, ___dictionary, method) (( void (*) (Enumerator_t1996 *, Dictionary_2_t1991 *, const MethodInfo*))Enumerator__ctor_m13181_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13182_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13182(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13183_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13183(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13183_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t120  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13184_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13184(__this, method) (( DictionaryEntry_t120  (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13184_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13185_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13185(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13185_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13186_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13186(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13187_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13187(__this, method) (( bool (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_MoveNext_m13187_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t1959  Enumerator_get_Current_m13188_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13188(__this, method) (( KeyValuePair_2_t1959  (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_Current_m13188_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13189_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13189(__this, method) (( Object_t * (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_CurrentKey_m13189_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t49  Enumerator_get_CurrentValue_m13190_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13190(__this, method) (( ObjectMetadata_t49  (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_get_CurrentValue_m13190_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m13191_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13191(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_Reset_m13191_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m13192_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13192(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_VerifyState_m13192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13193_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13193(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_VerifyCurrent_m13193_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m13194_gshared (Enumerator_t1996 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13194(__this, method) (( void (*) (Enumerator_t1996 *, const MethodInfo*))Enumerator_Dispose_m13194_gshared)(__this, method)
