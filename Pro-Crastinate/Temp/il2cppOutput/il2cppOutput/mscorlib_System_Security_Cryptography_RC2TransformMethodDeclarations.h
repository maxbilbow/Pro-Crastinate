﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t1686;
// System.Security.Cryptography.RC2
struct RC2_t1059;
// System.Byte[]
struct ByteU5BU5D_t616;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m9607 (RC2Transform_t1686 * __this, RC2_t1059 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t616* ___key, ByteU5BU5D_t616* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m9608 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m9609 (RC2Transform_t1686 * __this, ByteU5BU5D_t616* ___input, ByteU5BU5D_t616* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;