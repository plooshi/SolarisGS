#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0xE91 - 0xE78)
// BlueprintGeneratedClass B_Rifle_Sniper_Weather_Athena.B_Rifle_Sniper_Weather_Athena_C
class AB_Rifle_Sniper_Weather_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        TestDebugLine;                                     // 0xE80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TestDebugLineDuration;                             // 0xE84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Scope;                                         // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUpdateWeatherTracking;                            // 0xE90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Rifle_Sniper_Weather_Athena_C* GetDefaultObj();

	void UpdateNextNextCircleDisplay(const struct FVector_NetQuantize100& NextNextCircleLoc, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float Temp_float_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_DegAtan2_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_NormalizeToRange_ReturnValue_1);
	void UserConstructionScript(TArray<struct FWeightedBlendable>& CallFunc_GetScopePostProcessMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void OnAimPassLocation(bool AimDownsights);
	void InitializeScopeVariables();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_Sniper_Weather_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_AimDownSights, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AFortInGameMapManager* CallFunc_GetUIMapManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FVector2D& CallFunc_BPWorldLocationToMapLocation_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class AActor* CallFunc_GetOwner_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IFortSafeZoneInterface> CallFunc_GetRelevantSafeZoneInterface_ReturnValue, const struct FVector& CallFunc_GetSafeZoneNextNextCenter_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_5, const struct FVector_NetQuantize100& K2Node_MakeStruct_Vector_NetQuantize100, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IFortSafeZoneInterface> CallFunc_GetRelevantSafeZoneInterface_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7);
};

}


