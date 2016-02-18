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
struct Transform_1_t2128;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_PropertyMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14696_gshared (Transform_1_t2128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m14696(__this, ___object, ___method, method) (( void (*) (Transform_1_t2128 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m14696_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::Invoke(TKey,TValue)
extern "C" PropertyMetadata_t59  Transform_1_Invoke_m14697_gshared (Transform_1_t2128 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m14697(__this, ___key, ___value, method) (( PropertyMetadata_t59  (*) (Transform_1_t2128 *, Object_t *, PropertyMetadata_t59 , const MethodInfo*))Transform_1_Invoke_m14697_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14698_gshared (Transform_1_t2128 * __this, Object_t * ___key, PropertyMetadata_t59  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m14698(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2128 *, Object_t *, PropertyMetadata_t59 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m14698_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,LitJson.PropertyMetadata>::EndInvoke(System.IAsyncResult)
extern "C" PropertyMetadata_t59  Transform_1_EndInvoke_m14699_gshared (Transform_1_t2128 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m14699(__this, ___result, method) (( PropertyMetadata_t59  (*) (Transform_1_t2128 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m14699_gshared)(__this, ___result, method)
