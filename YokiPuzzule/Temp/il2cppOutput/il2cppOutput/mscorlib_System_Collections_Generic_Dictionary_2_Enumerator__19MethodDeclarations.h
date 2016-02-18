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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2165;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15269_gshared (Enumerator_t2169 * __this, Dictionary_2_t2165 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15269(__this, ___dictionary, method) (( void (*) (Enumerator_t2169 *, Dictionary_2_t2165 *, const MethodInfo*))Enumerator__ctor_m15269_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15270_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15270(__this, method) (( Object_t * (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15270_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15271_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15271(__this, method) (( void (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15271_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t158  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15272_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15272(__this, method) (( DictionaryEntry_t158  (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15273_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15273(__this, method) (( Object_t * (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15274_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15274(__this, method) (( Object_t * (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15275_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15275(__this, method) (( bool (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_MoveNext_m15275_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2159  Enumerator_get_Current_m15276_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15276(__this, method) (( KeyValuePair_2_t2159  (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_get_Current_m15276_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15277_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15277(__this, method) (( int32_t (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_get_CurrentKey_m15277_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15278_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15278(__this, method) (( Object_t * (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_get_CurrentValue_m15278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m15279_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15279(__this, method) (( void (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_Reset_m15279_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15280_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15280(__this, method) (( void (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_VerifyState_m15280_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15281_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15281(__this, method) (( void (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_VerifyCurrent_m15281_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15282_gshared (Enumerator_t2169 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15282(__this, method) (( void (*) (Enumerator_t2169 *, const MethodInfo*))Enumerator_Dispose_m15282_gshared)(__this, method)
