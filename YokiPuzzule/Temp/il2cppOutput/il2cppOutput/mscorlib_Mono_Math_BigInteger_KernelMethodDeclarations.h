﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Math.BigInteger
struct BigInteger_t1262;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1857;
// System.UInt32[]
struct UInt32U5BU5D_t1049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1262 * Kernel_AddSameSign_m7641 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi1, BigInteger_t1262 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1262 * Kernel_Subtract_m7642 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___big, BigInteger_t1262 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m7643 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___big, BigInteger_t1262 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m7644 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi1, BigInteger_t1262 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m7645 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi1, BigInteger_t1262 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m7646 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m7647 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1857* Kernel_DwordDivMod_m7648 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1857* Kernel_multiByteDivide_m7649 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi1, BigInteger_t1262 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1262 * Kernel_LeftShift_m7650 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1262 * Kernel_RightShift_m7651 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1262 * Kernel_MultiplyByDword_m7652 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m7653 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1049* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1049* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1049* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m7654 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1049* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1049* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1049* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m7655 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1262 * Kernel_modInverse_m7656 (Object_t * __this /* static, unused */, BigInteger_t1262 * ___bi, BigInteger_t1262 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
