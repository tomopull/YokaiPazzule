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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>
struct Transform_1_t2039;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t21;
// System.AsyncCallback
struct AsyncCallback_t22;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13764_gshared (Transform_1_t2039 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13764(__this, ___object, ___method, method) (( void (*) (Transform_1_t2039 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13764_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::Invoke(TKey,TValue)
extern "C" PropertyMetadata_t47  Transform_1_Invoke_m13765_gshared (Transform_1_t2039 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13765(__this, ___key, ___value, method) (( PropertyMetadata_t47  (*) (Transform_1_t2039 *, Object_t *, PropertyMetadata_t47 , const MethodInfo*))Transform_1_Invoke_m13765_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13766_gshared (Transform_1_t2039 * __this, Object_t * ___key, PropertyMetadata_t47  ___value, AsyncCallback_t22 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13766(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2039 *, Object_t *, PropertyMetadata_t47 , AsyncCallback_t22 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13766_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C" PropertyMetadata_t47  Transform_1_EndInvoke_m13767_gshared (Transform_1_t2039 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13767(__this, ___result, method) (( PropertyMetadata_t47  (*) (Transform_1_t2039 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13767_gshared)(__this, ___result, method)
