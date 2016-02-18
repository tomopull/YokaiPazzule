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

// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t2120;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14658_gshared (Enumerator_t2124 * __this, Dictionary_2_t2120 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14658(__this, ___dictionary, method) (( void (*) (Enumerator_t2124 *, Dictionary_2_t2120 *, const MethodInfo*))Enumerator__ctor_m14658_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14659_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14659(__this, method) (( Object_t * (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m14660_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m14660(__this, method) (( void (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m14660_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t158  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14661_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14661(__this, method) (( DictionaryEntry_t158  (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14662_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14662(__this, method) (( Object_t * (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14663_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14663(__this, method) (( Object_t * (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14663_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14664_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14664(__this, method) (( bool (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_MoveNext_m14664_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_Current()
extern "C" KeyValuePair_2_t2044  Enumerator_get_Current_m14665_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14665(__this, method) (( KeyValuePair_2_t2044  (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_get_Current_m14665_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14666_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14666(__this, method) (( Object_t * (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_get_CurrentKey_m14666_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_CurrentValue()
extern "C" PropertyMetadata_t59  Enumerator_get_CurrentValue_m14667_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14667(__this, method) (( PropertyMetadata_t59  (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_get_CurrentValue_m14667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::Reset()
extern "C" void Enumerator_Reset_m14668_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_Reset_m14668(__this, method) (( void (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_Reset_m14668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m14669_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14669(__this, method) (( void (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_VerifyState_m14669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14670_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14670(__this, method) (( void (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_VerifyCurrent_m14670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m14671_gshared (Enumerator_t2124 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14671(__this, method) (( void (*) (Enumerator_t2124 *, const MethodInfo*))Enumerator_Dispose_m14671_gshared)(__this, method)
