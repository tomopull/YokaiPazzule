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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1105;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t801;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t581;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C" void DSASignatureDeformatter__ctor_m9518 (DSASignatureDeformatter_t1105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter__ctor_m5857 (DSASignatureDeformatter_t1105 * __this, AsymmetricAlgorithm_t801 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureDeformatter_SetHashAlgorithm_m9519 (DSASignatureDeformatter_t1105 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureDeformatter_SetKey_m9520 (DSASignatureDeformatter_t1105 * __this, AsymmetricAlgorithm_t801 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSASignatureDeformatter_VerifySignature_m9521 (DSASignatureDeformatter_t1105 * __this, ByteU5BU5D_t581* ___rgbHash, ByteU5BU5D_t581* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
