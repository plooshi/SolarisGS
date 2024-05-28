#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x360 - 0x250)
// BlueprintGeneratedClass BP_CaptureItem.BP_CaptureItem_C
class ABP_CaptureItem_C : public AFortItemCaptureActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight_Fill_Right;                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_RimTopLeft;                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Rim_Topright;                           // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Key;                                     // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Rim_Bottom;                             // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Wrapping_Papper_Aligned_Temp;                      // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_SCAR_Temp;                                      // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ArrowScar_Rotate;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_PanCamera_Lerp_BC75346B47960E00A7D11BAE8EDAE242; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_PanCamera__Direction_BC75346B47960E00A7D11BAE8EDAE242; // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DF1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_PanCamera;                                // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Current_Item;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        AxeMesh;                                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DF2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LargeTile_Wrap_Transform;                          // 0x2D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            LargeTile_Wrap_Transform_B;                        // 0x300(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            SmallTile_Wrap_Transform;                          // 0x330(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_CaptureItem_C* GetDefaultObj();

	void OnWrapAsyncLoaded(bool CallFunc_IsValid_ReturnValue);
	void CreateWrapPreview(class AActor** WrapActor, class AFortWrapSkeletalMeshActor* WrapPreviewActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortWrapSkeletalMeshActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWrapSkeletalMeshActor* K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class UAthenaItemWrapDefinition* K2Node_DynamicCast_AsAthena_Item_Wrap_Definition, bool K2Node_DynamicCast_bSuccess_1);
	void SetIsLarge(bool Is_Large_Tile, bool Temp_bool_Variable, const struct FTransform& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void SetWrapIsGun(bool WrapIsGun, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class USkeletalMesh* K2Node_Select_Default, class UAthenaItemWrapDefinition* K2Node_DynamicCast_AsAthena_Item_Wrap_Definition, bool K2Node_DynamicCast_bSuccess, class AFortWrapSkeletalMeshActor* K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* K2Node_Select_Default_1);
	void UserConstructionScript();
	void Timeline_PanCamera__FinishedFunc();
	void Timeline_PanCamera__UpdateFunc();
	void OnSetupCapture(class UFortItemThumbnailRenderer* InRenderer, class UFortItemDefinition* InItemDefinition);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_CaptureItem(int32 EntryPoint, const struct FVector& CallFunc_VLerp_ReturnValue, class UFortItemThumbnailRenderer* K2Node_Event_InRenderer, class UFortItemDefinition* K2Node_Event_InItemDefinition, enum class EFortItemType CallFunc_GetItemType_ReturnValue, class AActor* CallFunc_CreateWrapPreview_WrapActor, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue);
};

}


