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

// UnityEngine.Renderer
struct Renderer_t107;
// UnityEngine.Material
struct Material_t166;
// UnityEngine.Material[]
struct MaterialU5BU5D_t256;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t166 * Renderer_get_material_m975 (Renderer_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t256* Renderer_get_materials_m1309 (Renderer_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
extern "C" void Renderer_set_sortingLayerName_m1254 (Renderer_t107 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2856 (Renderer_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2857 (Renderer_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C" void Renderer_set_sortingOrder_m990 (Renderer_t107 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
