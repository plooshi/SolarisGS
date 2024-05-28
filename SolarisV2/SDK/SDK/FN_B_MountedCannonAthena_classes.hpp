#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xE60 - 0xE49)
// BlueprintGeneratedClass B_MountedCannonAthena.B_MountedCannonAthena_C
class AB_MountedCannonAthena_C : public AB_Ranged_GenericMountedCannon_C
{
public:
	uint8                                        Pad_44A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_FiringDelay;                                     // 0xE58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_MountedCannonAthena_C* GetDefaultObj();

	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnFinishedCooling();
	void ExecuteUbergraph_B_MountedCannonAthena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue_1, class AFortAthenaSKPushCannon* K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon, bool K2Node_DynamicCast_bSuccess_2, class AFortAthenaSKPushCannon* K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon_1, bool K2Node_DynamicCast_bSuccess_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3);
};

}


