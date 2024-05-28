#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1B0 - 0x1A0)
// BlueprintGeneratedClass GCN_Athena_Ostrich_Dash.GCN_Athena_Ostrich_Dash_C
class UGCN_Athena_Ostrich_Dash_C : public UFortGameplayCueNotify_Burst
{
public:
	class USkeletalMeshComponent*                MechMesh;                                          // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATestMechVehicle_C*                    Mech;                                              // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_Athena_Ostrich_Dash_C* GetDefaultObj();

	void MeterFlare(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, class ATestMechVehicle_C* K2Node_DynamicCast_AsTest_Mech_Vehicle, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable_1, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class FName Temp_name_Variable_14, int32 Temp_int_Variable, class FName K2Node_Select_Default, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


