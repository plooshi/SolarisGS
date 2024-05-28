#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xC90 - 0xC7A)
// BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_PlaysetGrenadeWithTrajectory_C
{
public:
	uint8                                        Pad_4D5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Throw_Loop_Sound;                                  // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C* GetDefaultObj();

	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData, class UFortWorldItemDefinition* CallFunc_GetCurrentSourceItemDefinition_ReturnValue, class UFortPlaysetGrenadeItemDefinition* K2Node_DynamicCast_AsFort_Playset_Grenade_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference);
	void SetActivePlaysetOnPlayer();
	void ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int32 EntryPoint, class UFortPlaysetItemDefinition* CallFunc_GetActivePlaysetData_OutData, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortProjectileBase* K2Node_Event_Projectile_Reference, class AB_Prj_Athena_PlaysetGrenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UFortPlaysetItemDefinition* CallFunc_GetActivePlaysetData_OutData_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


