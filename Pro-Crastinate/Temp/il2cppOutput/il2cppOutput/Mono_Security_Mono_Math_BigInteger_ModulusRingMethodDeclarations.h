﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t901;
// Mono.Math.BigInteger
struct BigInteger_t900;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4209 (ModulusRing_t901 * __this, BigInteger_t900 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4210 (ModulusRing_t901 * __this, BigInteger_t900 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t900 * ModulusRing_Multiply_m4211 (ModulusRing_t901 * __this, BigInteger_t900 * ___a, BigInteger_t900 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t900 * ModulusRing_Difference_m4212 (ModulusRing_t901 * __this, BigInteger_t900 * ___a, BigInteger_t900 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t900 * ModulusRing_Pow_m4213 (ModulusRing_t901 * __this, BigInteger_t900 * ___a, BigInteger_t900 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t900 * ModulusRing_Pow_m4214 (ModulusRing_t901 * __this, uint32_t ___b, BigInteger_t900 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;