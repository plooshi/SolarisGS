#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEB4 (0x15AC - 0x6F8)
// BlueprintGeneratedClass B_BGA_Athena_DogSweater.B_BGA_Athena_DogSweater_C
class AB_BGA_Athena_DogSweater_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AmbientAudioInsideEdge;                            // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ShrinkBurst;                                       // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ShrinkLoop;                                        // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       NearingEnd;                                        // 0x718(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrowLoop;                                          // 0x720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientAudioOutside;                               // 0x728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientAudioInside;                                // 0x730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DeployableStorm_SphereInvertedDualLayer;        // 0x738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StormVolumeFX;                                     // 0x740(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      StormVolumeSphere;                                 // 0x748(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        WarningPulse_NewTrack_0_762A2A544EF2EB170479899E5992273D; // 0x758(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WarningPulse__Direction_762A2A544EF2EB170479899E5992273D; // 0x75C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WarningPulse;                                      // 0x760(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_CloudFade_F4E51AD0480C582C84380380C25A467B; // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_3_NewTrack_0_F4E51AD0480C582C84380380C25A467B; // 0x76C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_3__Direction_F4E51AD0480C582C84380380C25A467B; // 0x770(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_3;                                        // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_NewTrack_0_B6F13D264BB9F0520872A6A0D1AFD648; // 0x780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_B6F13D264BB9F0520872A6A0D1AFD648; // 0x784(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B95[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_NewTrack_0_444D88B54F6A832DD39212B6C164FAF2; // 0x790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_444D88B54F6A832DD39212B6C164FAF2; // 0x794(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pulse_NewTrack_0_20A40E2F49F4E4FCB83321A003131DEA; // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Pulse__Direction_20A40E2F49F4E4FCB83321A003131DEA; // 0x7A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B99[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Pulse;                                             // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestroyedDissolveTimeline_NewTrack_0_F52C56E140E6E309FD860E94A973B274; // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DestroyedDissolveTimeline__Direction_F52C56E140E6E309FD860E94A973B274; // 0x7B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DestroyedDissolveTimeline;                         // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_E518B16749B0F6B791E27E8DFCFAE48F; // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_E518B16749B0F6B791E27E8DFCFAE48F; // 0x7C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DissolveTimline_CloudFade_41BB1F2F45E998110BC4BF9E3950C8FD; // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DissolveTimline_NewTrack_0_41BB1F2F45E998110BC4BF9E3950C8FD; // 0x7D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DissolveTimline__Direction_41BB1F2F45E998110BC4BF9E3950C8FD; // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DissolveTimline;                                   // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Land_Sound;                                        // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaced;                                          // 0x7F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_B9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Impact_Loc;                                        // 0x7F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ExplosionRadiusGuide;                              // 0x800(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x80C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValidEnemy;                                      // 0x818(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B9E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PawnActors;                                        // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CueExplode;                                        // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bActivated;                                        // 0x830(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ExplosionRangeDefaultTag;                          // 0x834(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Activation_Radius;                                 // 0x83C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Ring_Restart_Delay;                                // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead_;                                           // 0x844(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_BA1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Activation_Delay;                                  // 0x848(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       Player_Owner;                                      // 0x850(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_Before_Explode__Overlap_;                    // 0x858(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionLevel;                                    // 0x85C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Ring_Sizes;                                        // 0x860(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                       Sphere_Sizes;                                      // 0x870(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                        OverlappingOtherMines;                             // 0x880(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        OverlapColliderRadius;                             // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMI;                                         // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SavedScale;                                        // 0x8A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TimelineIsPlaying;                                 // 0x8AC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_BA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TempDamageTickHandle;                              // 0x8B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag;                                          // 0x8B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        GrowSpeed;                                         // 0x8C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CylinderStorm;                                     // 0x8C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MaxSize;                                           // 0x8C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        GrowthSpeed;                                       // 0x8E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          ZoneActivateCue;                                   // 0x908(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ChargeUpCue;                                       // 0x910(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              MeshLandRotation;                                  // 0x918(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        YawOffset;                                         // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PlacementSound;                                    // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ZoneLifeTime;                                      // 0x930(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ZoneLifeTimeHandle;                                // 0x950(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDissolving;                                      // 0x958(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_BA6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x95C(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitLocation;                                      // 0x968(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Scale;                                             // 0x974(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShrinkSpeed;                                       // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoundAttenuationSettings             AttenuationInside;                                 // 0x9A0(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoundAttenuationSettings             AttenuationInsideEdge;                             // 0xC88(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoundAttenuationSettings             AttenuationOutside;                                // 0xF70(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               ZeroVector;                                        // 0x1258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          NearEndCue;                                        // 0x1264(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DissolveCue;                                       // 0x126C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        NearingEndWarningThreshold;                        // 0x1278(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSoundAttenuationSettings             AttenuationTells;                                  // 0x1298(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ArbitraryFalloffMultiplier;                        // 0x1580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DIssolvePlayRate;                                  // 0x1588(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ClientInterpSpeed;                                 // 0x15A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_BGA_Athena_DogSweater_C* GetDefaultObj();

	void OnRep_TimelineIsPlaying(bool CallFunc_IsServer_ReturnValue);
	void OnRep_IsDissolving(bool CallFunc_IsServer_ReturnValue);
	void OnRep_Scale();
	void OnRep_Location(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void OnRep_SavedScale();
	void OnRep_ExplosionRadiusGuide();
	void VFX_SetTeamColors();
	void AttachFX(bool CallFunc_IsDedicatedServer_ReturnValue);
	void DestroyFX();
	void OnRep_IsDead_();
	void OnRep_bActivated();
	void OnRep_IsPlaced();
	bool IsValidTarget(class UObject* Object, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DissolveTimline__FinishedFunc();
	void DissolveTimline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void DestroyedDissolveTimeline__FinishedFunc();
	void DestroyedDissolveTimeline__UpdateFunc();
	void Pulse__FinishedFunc();
	void Pulse__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void WarningPulse__FinishedFunc();
	void WarningPulse__UpdateFunc();
	void ReceiveBeginPlay();
	void SetExplosion(int32 Explosion_Level, float Activation_Radius, class AFortPlayerPawn* PlayerPawn);
	void SetDissolve();
	void DeadEvent(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Start();
	void Grow();
	void Multicast(const struct FVector& NewParam);
	void CheckTick();
	void StartTimeline();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetRotation(const struct FRotator& PlayerYaw, float YawOffset);
	void StopGrowth();
	void DestroyedDissolve();
	void ClientStartDissolve();
	void MoveUp();
	void SetAttenuation();
	void StartDissolve();
	void StopGrowingAudio();
	void Destroy();
	void AddLocalLoopingCue(const struct FGameplayTag& Cue_Tag, const struct FGameplayCueParameters& Cue_Params);
	void PlayNearingEndSound();
	void ReceiveDestroyed();
	void RemoveLocalLoopingCue(const struct FGameplayTag& Cue_Tag, const struct FGameplayCueParameters& Cue_Params);
	void ExecuteUbergraph_B_BGA_Athena_DogSweater(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, int32 K2Node_CustomEvent_Explosion_Level, float K2Node_CustomEvent_Activation_Radius, class AFortPlayerPawn* K2Node_CustomEvent_PlayerPawn, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_NewParam, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FRotator& K2Node_CustomEvent_PlayerYaw, float K2Node_CustomEvent_YawOffset, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable_2, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_6, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_Cue_Tag_1, const struct FGameplayCueParameters& K2Node_CustomEvent_Cue_Params_1, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_2, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_3, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_7, const struct FGameplayTag& K2Node_CustomEvent_Cue_Tag, const struct FGameplayCueParameters& K2Node_CustomEvent_Cue_Params, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_10, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsServer_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float CallFunc_GetValueAtLevel_ReturnValue_8, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_9, float CallFunc_GetValueAtLevel_ReturnValue_10, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, const struct FVector& CallFunc_ClampVectorSize_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_6, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue_1, float CallFunc_VSize_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3);
};

}


