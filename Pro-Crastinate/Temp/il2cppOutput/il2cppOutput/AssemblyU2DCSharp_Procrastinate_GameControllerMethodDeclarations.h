﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Procrastinate.GameController
struct GameController_t225;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t5;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Procrastinate.UserData
#include "AssemblyU2DCSharp_Procrastinate_UserData.h"

// System.Void Procrastinate.GameController::.ctor()
extern "C" void GameController__ctor_m792 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Procrastinate.GameController::get_TotalDevTimeWasted()
extern "C" float GameController_get_TotalDevTimeWasted_m793 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameController::get_Chance()
extern "C" bool GameController_get_Chance_m794 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameController::ChanceGiven(Procrastinate.UserData)
extern "C" bool GameController_ChanceGiven_m795 (GameController_t225 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Procrastinate.GameController::get_velocity()
extern "C" Vector2_t42  GameController_get_velocity_m796 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameController::get_isFirstPlay()
extern "C" bool GameController_get_isFirstPlay_m797 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::StartSingletons()
extern "C" void GameController_StartSingletons_m798 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::StartDesktop()
extern "C" void GameController_StartDesktop_m799 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::StartMobile()
extern "C" void GameController_StartMobile_m800 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::PreStart()
extern "C" void GameController_PreStart_m801 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::PostStart()
extern "C" void GameController_PostStart_m802 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::OnApplicationFocus(System.Boolean)
extern "C" void GameController_OnApplicationFocus_m803 (GameController_t225 * __this, bool ___focusStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::OnApplicationPause(System.Boolean)
extern "C" void GameController_OnApplicationPause_m804 (GameController_t225 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::PauseGame(System.Boolean)
extern "C" void GameController_PauseGame_m805 (GameController_t225 * __this, bool ___Pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::CheckForAnomalies()
extern "C" void GameController_CheckForAnomalies_m806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::Patch()
extern "C" void GameController_Patch_m807 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameController::get_isPaused()
extern "C" bool GameController_get_isPaused_m808 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::PauseGame(System.Boolean,System.Object)
extern "C" void GameController_PauseGame_m809 (GameController_t225 * __this, bool ___pause, Object_t * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Procrastinate.GameController::IsDebugging(System.Enum)
extern "C" bool GameController_IsDebugging_m810 (GameController_t225 * __this, Enum_t5 * ___feature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Procrastinate.GameController::Update()
extern "C" void GameController_Update_m811 (GameController_t225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;