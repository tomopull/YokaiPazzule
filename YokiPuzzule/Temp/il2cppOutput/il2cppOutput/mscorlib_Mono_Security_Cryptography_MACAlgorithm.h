﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t963;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t975;
// System.Byte[]
struct ByteU5BU5D_t581;

#include "mscorlib_System_Object.h"

// Mono.Security.Cryptography.MACAlgorithm
struct  MACAlgorithm_t1191  : public Object_t
{
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.MACAlgorithm::algo
	SymmetricAlgorithm_t963 * ___algo_0;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.MACAlgorithm::enc
	Object_t * ___enc_1;
	// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::block
	ByteU5BU5D_t581* ___block_2;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockSize
	int32_t ___blockSize_3;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockCount
	int32_t ___blockCount_4;
};
