#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x528 - 0x378)
// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
class APartyDisplayManagerBP_C : public APartyDisplayManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  PrefabActorComp;                                   // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalePivot;                                        // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PivotHolder;                                       // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CelebratoryFX;                                     // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HoloMatColorPulse;                                 // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimEvolve;                                   // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleAnimLevel;                                    // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Rotation;                                          // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6130[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemToRepresent;                                   // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewRotation;                                   // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RotationAnimation;                                 // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LevelUpFX;                                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       EvolveUpFX;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXTargetLocation;                                  // 0x420(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCharacter;                                       // 0x42C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEvolve;                                          // 0x42D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6132[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       CharLevelUpFX;                                     // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CharEvolveUpFX;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              UIoverrideMID;                                     // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasResetVisuals;                                   // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem2;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CharSwapTransitionFX;                              // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCharacterVisible;                                // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       HeroPawn;                                          // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SanityChecker;                                     // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6135[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_HoloMaterial;                                  // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_1;                                     // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VertexRange;                                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_2;                                     // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_3;                                     // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_4;                                     // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_5;                                     // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_6;                                     // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_7;                                     // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_8;                                     // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_9;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HideElement_10;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ScalePivotPreScaleLocation;                        // 0x4E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StaticMeshPreScaleLocation;                        // 0x4EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SkelMeshPreScaleLocation;                          // 0x4F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PrefabPreScaleLocation;                            // 0x504(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GhostPistolVFX;                                    // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Ghost_Sword_VFX;                                   // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Ghost_Sword_Mesh;                                  // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APartyDisplayManagerBP_C* GetDefaultObj();

	void ResetPreScaleLocations(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3);
	void StorePreScaleLocations();
	void RestoreTeleportMIDsInProgress(class AFortPlayerPawn* Pawn, int32 CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex, bool CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_2, float CallFunc_K2_GetScalarParameterValue_ReturnValue_3, float CallFunc_K2_GetScalarParameterValue_ReturnValue_4, float CallFunc_K2_GetScalarParameterValue_ReturnValue_5, float CallFunc_K2_GetScalarParameterValue_ReturnValue_6, float CallFunc_K2_GetScalarParameterValue_ReturnValue_7, float CallFunc_K2_GetScalarParameterValue_ReturnValue_8, float CallFunc_K2_GetScalarParameterValue_ReturnValue_9, float CallFunc_K2_GetScalarParameterValue_ReturnValue_10, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn, int32 PlayerIndex, int32 CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex, bool CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class AActor* GetPrefabActorForCurrentDisplayedItem();
	void PostSetupPrefabVisuals();
	void GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, TScriptInterface<class ICustomCharacterPartOwnerInterface> CallFunc_GetCustomizationRootSkeletalMeshComponent_self_CastInput, class USkeletalMeshComponent* CallFunc_GetCustomizationRootSkeletalMeshComponent_ReturnValue, class AFortPlayerParachute* K2Node_DynamicCast_AsFort_Player_Parachute, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetParachuteRootMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UFortItemDefinition* K2Node_Select_Default);
	void SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, enum class EFortRarity Rarity, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue_1, int32 CallFunc_FindSubstring_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_2, int32 CallFunc_FindSubstring_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_3);
	struct FTransform GetWeaponPlacementTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	void UpdatePreviewMeshTransforms(const struct FTransform& CallFunc_GetPreviewMeshWorldTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue);
	struct FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetPreviewMeshOffset_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue);
	struct FTransform GetPreviewMeshWorldTransform(float Temp_float_Variable, bool Temp_bool_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetItemPreviewOffset_ReturnValue, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, float K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue_1);
	void SetupStaticMeshVisuals(class UStaticMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void ResetVisuals(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void ScaleAnimLevel__FinishedFunc();
	void ScaleAnimLevel__UpdateFunc();
	void ScaleAnimEvolve__FinishedFunc();
	void ScaleAnimEvolve__UpdateFunc();
	void HoloMatColorPulse__FinishedFunc();
	void HoloMatColorPulse__UpdateFunc();
	void Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, const struct FGuid& RequestId);
	void ShowLoading();
	void HideLoading();
	void ShowItem(class UFortItem* ItemToView, struct FGuid& RequestId);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	void CelebrateWithFX();
	void PerformScaleMeshFX();
	void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, TArray<class UObject*>& LoadedAssets, struct FGuid& RequestId);
	void ReceiveTick(float DeltaSeconds);
	void Set_Character_Parts_Visibility(bool NewVisible);
	void CharacterCustomizationFinished(class AFortPlayerPawn* Pawn);
	void ReceiveBeginPlay();
	void OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn);
	void ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int32 PartyIndex);
	void SetupPrefabVisuals();
	void ExecuteUbergraph_PartyDisplayManagerBP(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UFortItem* K2Node_Event_ItemWhoseAssetsWereLoaded, TArray<class UObject*>& K2Node_Event_LoadedAssets, const struct FGuid& K2Node_Event_RequestId, TArray<class UFortItem*>& K2Node_MakeArray_Array, TArray<class UFortItem*>& K2Node_MakeArray_Array_1, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition_1, TSoftObjectPtr<class UStaticMesh> CallFunc_GetPreviewStaticMeshAsset_Asset, bool CallFunc_GetPreviewStaticMeshAsset_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_GetPreviewSkeletalMeshAsset_Asset, bool CallFunc_GetPreviewSkeletalMeshAsset_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_2, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition_2, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<TSoftObjectPtr<class UObject>>& CallFunc_GetPreviewAssets_ReturnValue, bool K2Node_CustomEvent_NewVisible, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FTransform& CallFunc_GetWeaponPlacementTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, class AFortPlayerPawn* K2Node_Event_Pawn_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_Event_Pawn_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetPartyMemberIndexByPlayerPawn_OutPlayerIndex, bool CallFunc_GetPartyMemberIndexByPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3, const struct FUniqueNetIdRepl& CallFunc_GetPlayerIdFromPartyMemberIndex_ReturnValue, class AFortPlayerPawn* K2Node_Event_Pawn, int32 K2Node_Event_PartyIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsInCharacterCustomization_ReturnValue, class UFortItem* K2Node_Event_ItemToView, const struct FGuid& K2Node_Event_RequestId_1, TArray<class UFortItem*>& K2Node_MakeArray_Array_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionToShow_ItemDefinition_3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_2, bool K2Node_DynamicCast_bSuccess_5, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UFrontendAnimInstance* K2Node_DynamicCast_AsFrontend_Anim_Instance, bool K2Node_DynamicCast_bSuccess_6, class UFortAsyncAction_PartyDisplayManager_SetupPrefabVisuals* CallFunc_SetupPrefabVisuals_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_7, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnForCurrentDisplayedItem_ReturnValue_2, class UFortItem* Temp_object_Variable, TArray<class UFortItem*>& K2Node_MakeArray_Array_3, const struct FGuid& Temp_struct_Variable, class UFortItem* K2Node_CustomEvent_Item, const struct FGuid& K2Node_CustomEvent_RequestId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyMemberLocation CallFunc_GetPartyMemberLocation_LocationOut, bool CallFunc_GetPartyMemberLocation_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, int32 CallFunc_GetCurrentLockerSubslotIndex_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetPreviewPrefabAssetAtSubSlot_Asset, bool CallFunc_GetPreviewPrefabAssetAtSubSlot_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess);
};

}


