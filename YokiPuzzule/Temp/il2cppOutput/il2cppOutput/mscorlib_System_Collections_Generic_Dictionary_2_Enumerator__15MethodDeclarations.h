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
struct Dictionary_2_t2031;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13726_gshared (Enumerator_t2035 * __this, Dictionary_2_t2031 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13726(__this, ___dictionary, method) (( void (*) (Enumerator_t2035 *, Dictionary_2_t2031 *, const MethodInfo*))Enumerator__ctor_m13726_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13727_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13727(__this, method) (( Object_t * (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13728_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13728(__this, method) (( void (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13728_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t120  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13729_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13729(__this, method) (( DictionaryEntry_t120  (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13729_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13730_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13730(__this, method) (( Object_t * (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13730_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13731_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13731(__this, method) (( Object_t * (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13731_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13732_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13732(__this, method) (( bool (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_MoveNext_m13732_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_Current()
extern "C" KeyValuePair_2_t1955  Enumerator_get_Current_m13733_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13733(__this, method) (( KeyValuePair_2_t1955  (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_get_Current_m13733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m13734_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13734(__this, method) (( Object_t * (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_get_CurrentKey_m13734_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::get_CurrentValue()
extern "C" PropertyMetadata_t47  Enumerator_get_CurrentValue_m13735_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13735(__this, method) (( PropertyMetadata_t47  (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_get_CurrentValue_m13735_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::Reset()
extern "C" void Enumerator_Reset_m13736_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13736(__this, method) (( void (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_Reset_m13736_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::VerifyState()
extern "C" void Enumerator_VerifyState_m13737_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13737(__this, method) (( void (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_VerifyState_m13737_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13738_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13738(__this, method) (( void (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_VerifyCurrent_m13738_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,LitJson.PropertyMetadata>::Dispose()
extern "C" void Enumerator_Dispose_m13739_gshared (Enumerator_t2035 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13739(__this, method) (( void (*) (Enumerator_t2035 *, const MethodInfo*))Enumerator_Dispose_m13739_gshared)(__this, method)
