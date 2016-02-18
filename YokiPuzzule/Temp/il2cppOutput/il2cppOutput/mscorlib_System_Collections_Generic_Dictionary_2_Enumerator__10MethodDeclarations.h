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
struct Dictionary_2_t2080;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "AssemblyU2DCSharp_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14113_gshared (Enumerator_t2085 * __this, Dictionary_2_t2080 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14113(__this, ___dictionary, method) (( void (*) (Enumerator_t2085 *, Dictionary_2_t2080 *, const MethodInfo*))Enumerator__ctor_m14113_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14114_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14114(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14115_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14115(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14115_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t158  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14116_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14116(__this, method) (( DictionaryEntry_t158  (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14116_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14117_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14117(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14117_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14118_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14118(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14119_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14119(__this, method) (( bool (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_MoveNext_m14119_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_Current()
extern "C" KeyValuePair_2_t2048  Enumerator_get_Current_m14120_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14120(__this, method) (( KeyValuePair_2_t2048  (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_Current_m14120_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14121_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14121(__this, method) (( Object_t * (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_CurrentKey_m14121_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::get_CurrentValue()
extern "C" ObjectMetadata_t61  Enumerator_get_CurrentValue_m14122_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14122(__this, method) (( ObjectMetadata_t61  (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_get_CurrentValue_m14122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Reset()
extern "C" void Enumerator_Reset_m14123_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14123(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_Reset_m14123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m14124_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14124(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_VerifyState_m14124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14125_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14125(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_VerifyCurrent_m14125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ObjectMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m14126_gshared (Enumerator_t2085 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14126(__this, method) (( void (*) (Enumerator_t2085 *, const MethodInfo*))Enumerator_Dispose_m14126_gshared)(__this, method)
