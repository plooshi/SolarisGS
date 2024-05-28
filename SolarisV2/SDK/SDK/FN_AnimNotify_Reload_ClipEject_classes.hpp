#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass AnimNotify_Reload_ClipEject.AnimNotify_Reload_ClipEject_C
class UAnimNotify_Reload_ClipEject_C : public UAnimNotify
{
public:
	class UParticleSystem*                       Shell_Eject_Particle;                              // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_Reload_ClipEject_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


