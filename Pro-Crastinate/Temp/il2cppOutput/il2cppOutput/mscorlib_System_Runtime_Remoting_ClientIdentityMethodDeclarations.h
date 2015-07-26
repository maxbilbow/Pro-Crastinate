﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1613;
// System.MarshalByRefObject
struct MarshalByRefObject_t1122;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1611;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m9187 (ClientIdentity_t1613 * __this, String_t* ___objectUri, ObjRef_t1611 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t1122 * ClientIdentity_get_ClientProxy_m9188 (ClientIdentity_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m9189 (ClientIdentity_t1613 * __this, MarshalByRefObject_t1122 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1611 * ClientIdentity_CreateObjRef_m9190 (ClientIdentity_t1613 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m9191 (ClientIdentity_t1613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;