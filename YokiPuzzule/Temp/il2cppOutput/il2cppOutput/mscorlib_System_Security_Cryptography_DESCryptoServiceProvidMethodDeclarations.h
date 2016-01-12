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

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1575;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t975;
// System.Byte[]
struct ByteU5BU5D_t581;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m9497 (DESCryptoServiceProvider_t1575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m9498 (DESCryptoServiceProvider_t1575 * __this, ByteU5BU5D_t581* ___rgbKey, ByteU5BU5D_t581* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m9499 (DESCryptoServiceProvider_t1575 * __this, ByteU5BU5D_t581* ___rgbKey, ByteU5BU5D_t581* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m9500 (DESCryptoServiceProvider_t1575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m9501 (DESCryptoServiceProvider_t1575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
