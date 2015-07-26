﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics2D
struct Physics2D_t177;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t502;
// UnityEngine.Collider2D
struct Collider2D_t139;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t176;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m3388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Physics2D::get_gravity()
extern "C" Vector2_t42  Physics2D_get_gravity_m919 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::set_gravity(UnityEngine.Vector2)
extern "C" void Physics2D_set_gravity_m1012 (Object_t * __this /* static, unused */, Vector2_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_get_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_get_gravity_m3389 (Object_t * __this /* static, unused */, Vector2_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_set_gravity(UnityEngine.Vector2&)
extern "C" void Physics2D_INTERNAL_set_gravity_m3390 (Object_t * __this /* static, unused */, Vector2_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m3391 (Object_t * __this /* static, unused */, Vector2_t42  ___origin, Vector2_t42  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m3392 (Object_t * __this /* static, unused */, Vector2_t42 * ___origin, Vector2_t42 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t269 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m2404 (Object_t * __this /* static, unused */, Vector2_t42  ___origin, Vector2_t42  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m945 (Object_t * __this /* static, unused */, Vector2_t42  ___origin, Vector2_t42  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t269  Physics2D_Raycast_m3393 (Object_t * __this /* static, unused */, Vector2_t42  ___origin, Vector2_t42  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t502* Physics2D_RaycastAll_m2323 (Object_t * __this /* static, unused */, Vector2_t42  ___origin, Vector2_t42  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t502* Physics2D_INTERNAL_CALL_RaycastAll_m3394 (Object_t * __this /* static, unused */, Vector2_t42 * ___origin, Vector2_t42 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2D_t139 * Physics2D_OverlapCircle_m544 (Object_t * __this /* static, unused */, Vector2_t42  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircle(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t139 * Physics2D_INTERNAL_CALL_OverlapCircle_m3395 (Object_t * __this /* static, unused */, Vector2_t42 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" Collider2DU5BU5D_t176* Physics2D_OverlapCircleAll_m538 (Object_t * __this /* static, unused */, Vector2_t42  ___point, float ___radius, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t176* Physics2D_INTERNAL_CALL_OverlapCircleAll_m3396 (Object_t * __this /* static, unused */, Vector2_t42 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;