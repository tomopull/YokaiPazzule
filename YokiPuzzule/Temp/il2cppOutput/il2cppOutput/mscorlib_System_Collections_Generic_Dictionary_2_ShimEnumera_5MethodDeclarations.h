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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2495;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2482;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19964_gshared (ShimEnumerator_t2495 * __this, Dictionary_2_t2482 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19964(__this, ___host, method) (( void (*) (ShimEnumerator_t2495 *, Dictionary_2_t2482 *, const MethodInfo*))ShimEnumerator__ctor_m19964_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19965_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19965(__this, method) (( bool (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_MoveNext_m19965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t120  ShimEnumerator_get_Entry_m19966_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19966(__this, method) (( DictionaryEntry_t120  (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_get_Entry_m19966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19967_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19967(__this, method) (( Object_t * (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_get_Key_m19967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19968_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19968(__this, method) (( Object_t * (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_get_Value_m19968_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19969_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19969(__this, method) (( Object_t * (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_get_Current_m19969_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m19970_gshared (ShimEnumerator_t2495 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m19970(__this, method) (( void (*) (ShimEnumerator_t2495 *, const MethodInfo*))ShimEnumerator_Reset_m19970_gshared)(__this, method)
