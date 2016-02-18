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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2054;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13770_gshared (Enumerator_t2059 * __this, Dictionary_2_t2054 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13770(__this, ___dictionary, method) (( void (*) (Enumerator_t2059 *, Dictionary_2_t2054 *, const MethodInfo*))Enumerator__ctor_m13770_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13771_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13771(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13772_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13772(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13772_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t158  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13773_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13773(__this, method) (( DictionaryEntry_t158  (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13774_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13774(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13774_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13775_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13775(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13776_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13776(__this, method) (( bool (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_MoveNext_m13776_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_Current()
extern "C" KeyValuePair_2_t2046  Enumerator_get_Current_m13777_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13777(__this, method) (( KeyValuePair_2_t2046  (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_Current_m13777_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13778_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13778(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_CurrentKey_m13778_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::get_CurrentValue()
extern "C" ArrayMetadata_t60  Enumerator_get_CurrentValue_m13779_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13779(__this, method) (( ArrayMetadata_t60  (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_CurrentValue_m13779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Reset()
extern "C" void Enumerator_Reset_m13780_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13780(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_Reset_m13780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m13781_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13781(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_VerifyState_m13781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13782_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13782(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_VerifyCurrent_m13782_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.ArrayMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m13783_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13783(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_Dispose_m13783_gshared)(__this, method)
