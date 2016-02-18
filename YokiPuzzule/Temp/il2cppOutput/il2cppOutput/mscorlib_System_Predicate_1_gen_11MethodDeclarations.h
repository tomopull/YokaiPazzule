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

// System.Predicate`1<LitJson.PropertyMetadata>
struct Predicate_1_t2140;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Predicate`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14897_gshared (Predicate_1_t2140 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14897(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2140 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14897_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<LitJson.PropertyMetadata>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14898_gshared (Predicate_1_t2140 * __this, PropertyMetadata_t59  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14898(__this, ___obj, method) (( bool (*) (Predicate_1_t2140 *, PropertyMetadata_t59 , const MethodInfo*))Predicate_1_Invoke_m14898_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<LitJson.PropertyMetadata>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14899_gshared (Predicate_1_t2140 * __this, PropertyMetadata_t59  ___obj, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14899(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2140 *, PropertyMetadata_t59 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14899_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14900_gshared (Predicate_1_t2140 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14900(__this, ___result, method) (( bool (*) (Predicate_1_t2140 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14900_gshared)(__this, ___result, method)
