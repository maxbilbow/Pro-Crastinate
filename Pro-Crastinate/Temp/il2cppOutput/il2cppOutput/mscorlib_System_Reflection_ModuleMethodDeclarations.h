﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Module
struct Module_t1455;
// System.Reflection.Assembly
struct Assembly_t1243;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t809;
// System.Type[]
struct TypeU5BU5D_t702;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.Module::.ctor()
extern "C" void Module__ctor_m8723 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C" void Module__cctor_m8724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t1243 * Module_get_Assembly_m8725 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m8726 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t146* Module_GetCustomAttributes_m8727 (Module_t1455 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Module_GetObjectData_m8728 (Module_t1455 * __this, SerializationInfo_t809 * ___info, StreamingContext_t810  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::InternalGetTypes()
extern "C" TypeU5BU5D_t702* Module_InternalGetTypes_m8729 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::GetTypes()
extern "C" TypeU5BU5D_t702* Module_GetTypes_m8730 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C" bool Module_IsDefined_m8731 (Module_t1455 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m8732 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C" String_t* Module_ToString_m8733 (Module_t1455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m8734 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m8735 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;