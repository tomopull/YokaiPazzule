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

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t1576;
// System.Byte[]
struct ByteU5BU5D_t581;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t801;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C" void DSASignatureFormatter__ctor_m9522 (DSASignatureFormatter_t1576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t581* DSASignatureFormatter_CreateSignature_m9523 (DSASignatureFormatter_t1576 * __this, ByteU5BU5D_t581* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void DSASignatureFormatter_SetHashAlgorithm_m9524 (DSASignatureFormatter_t1576 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void DSASignatureFormatter_SetKey_m9525 (DSASignatureFormatter_t1576 * __this, AsymmetricAlgorithm_t801 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
