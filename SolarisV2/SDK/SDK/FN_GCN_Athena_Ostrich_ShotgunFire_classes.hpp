#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1B0 - 0x1A0)
// BlueprintGeneratedClass GCN_Athena_Ostrich_ShotgunFire.GCN_Athena_Ostrich_ShotgunFire_C
class UGCN_Athena_Ostrich_ShotgunFire_C : public UFortGameplayCueNotify_Burst
{
public:
	class USkeletalMeshComponent*                MechMesh;                                          // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATestMechVehicle_C*                    Mech;                                              // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGCN_Athena_Ostrich_ShotgunFire_C* GetDefaultObj();

	void MeterFlare(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};

}


