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

// System.Comparison`1<LitJson.PropertyMetadata>
struct Comparison_1_t2143;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Comparison`1<LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14907_gshared (Comparison_1_t2143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14907(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2143 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14907_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14908_gshared (Comparison_1_t2143 * __this, PropertyMetadata_t59  ___x, PropertyMetadata_t59  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14908(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2143 *, PropertyMetadata_t59 , PropertyMetadata_t59 , const MethodInfo*))Comparison_1_Invoke_m14908_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<LitJson.PropertyMetadata>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14909_gshared (Comparison_1_t2143 * __this, PropertyMetadata_t59  ___x, PropertyMetadata_t59  ___y, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14909(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2143 *, PropertyMetadata_t59 , PropertyMetadata_t59 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14909_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14910_gshared (Comparison_1_t2143 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14910(__this, ___result, method) (( int32_t (*) (Comparison_1_t2143 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14910_gshared)(__this, ___result, method)
