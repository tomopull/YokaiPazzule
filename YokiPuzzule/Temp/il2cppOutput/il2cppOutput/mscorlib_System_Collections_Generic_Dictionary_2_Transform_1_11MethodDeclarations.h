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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>
struct Transform_1_t2060;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharp_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13784_gshared (Transform_1_t2060 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13784(__this, ___object, ___method, method) (( void (*) (Transform_1_t2060 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13784_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m13785_gshared (Transform_1_t2060 * __this, Object_t * ___key, ArrayMetadata_t60  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13785(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2060 *, Object_t *, ArrayMetadata_t60 , const MethodInfo*))Transform_1_Invoke_m13785_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13786_gshared (Transform_1_t2060 * __this, Object_t * ___key, ArrayMetadata_t60  ___value, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13786(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2060 *, Object_t *, ArrayMetadata_t60 , AsyncCallback_t34 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13786_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13787_gshared (Transform_1_t2060 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13787(__this, ___result, method) (( Object_t * (*) (Transform_1_t2060 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13787_gshared)(__this, ___result, method)
