#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaptureItem.BP_CaptureItem_C
// (Actor)

class UClass* ABP_CaptureItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaptureItem_C");

	return Clss;
}


// BP_CaptureItem_C BP_CaptureItem.Default__BP_CaptureItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CaptureItem_C* ABP_CaptureItem_C::GetDefaultObj()
{
	static class ABP_CaptureItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CaptureItem_C*>(ABP_CaptureItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CaptureItem.BP_CaptureItem_C.OnWrapAsyncLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureItem_C::OnWrapAsyncLoaded(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "OnWrapAsyncLoaded");

	Params::ABP_CaptureItem_C_OnWrapAsyncLoaded_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureItem.BP_CaptureItem_C.CreateWrapPreview
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WrapActor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWrapSkeletalMeshActor*  WrapPreviewActor                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWrapSkeletalMeshActor*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWrapSkeletalMeshActor*  K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaItemWrapDefinition*   K2Node_DynamicCast_AsAthena_Item_Wrap_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureItem_C::CreateWrapPreview(class AActor** WrapActor, class AFortWrapSkeletalMeshActor* WrapPreviewActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortWrapSkeletalMeshActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWrapSkeletalMeshActor* K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class UAthenaItemWrapDefinition* K2Node_DynamicCast_AsAthena_Item_Wrap_Definition, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "CreateWrapPreview");

	Params::ABP_CaptureItem_C_CreateWrapPreview_Params Parms{};

	Parms.WrapPreviewActor = WrapPreviewActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor = K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAthena_Item_Wrap_Definition = K2Node_DynamicCast_AsAthena_Item_Wrap_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WrapActor != nullptr)
		*WrapActor = Parms.WrapActor;

}


// Function BP_CaptureItem.BP_CaptureItem_C.SetIsLarge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Large_Tile                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CaptureItem_C::SetIsLarge(bool Is_Large_Tile, bool Temp_bool_Variable, const struct FTransform& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "SetIsLarge");

	Params::ABP_CaptureItem_C_SetIsLarge_Params Parms{};

	Parms.Is_Large_Tile = Is_Large_Tile;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureItem.BP_CaptureItem_C.SetWrapIsGun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WrapIsGun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaItemWrapDefinition*   K2Node_DynamicCast_AsAthena_Item_Wrap_Definition                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWrapSkeletalMeshActor*  K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureItem_C::SetWrapIsGun(bool WrapIsGun, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class USkeletalMesh* K2Node_Select_Default, class UAthenaItemWrapDefinition* K2Node_DynamicCast_AsAthena_Item_Wrap_Definition, bool K2Node_DynamicCast_bSuccess, class AFortWrapSkeletalMeshActor* K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "SetWrapIsGun");

	Params::ABP_CaptureItem_C_SetWrapIsGun_Params Parms{};

	Parms.WrapIsGun = WrapIsGun;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsAthena_Item_Wrap_Definition = K2Node_DynamicCast_AsAthena_Item_Wrap_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor = K2Node_DynamicCast_AsFort_Wrap_Skeletal_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureItem.BP_CaptureItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CaptureItem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaptureItem.BP_CaptureItem_C.Timeline_PanCamera__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CaptureItem_C::Timeline_PanCamera__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "Timeline_PanCamera__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaptureItem.BP_CaptureItem_C.Timeline_PanCamera__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CaptureItem_C::Timeline_PanCamera__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "Timeline_PanCamera__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaptureItem.BP_CaptureItem_C.OnSetupCapture
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemThumbnailRenderer*  InRenderer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         InItemDefinition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureItem_C::OnSetupCapture(class UFortItemThumbnailRenderer* InRenderer, class UFortItemDefinition* InItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "OnSetupCapture");

	Params::ABP_CaptureItem_C_OnSetupCapture_Params Parms{};

	Parms.InRenderer = InRenderer;
	Parms.InItemDefinition = InItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CaptureItem.BP_CaptureItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CaptureItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaptureItem.BP_CaptureItem_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CaptureItem_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CaptureItem.BP_CaptureItem_C.ExecuteUbergraph_BP_CaptureItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemThumbnailRenderer*  K2Node_Event_InRenderer                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_Event_InItemDefinition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_CreateWrapPreview_WrapActor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CaptureItem_C::ExecuteUbergraph_BP_CaptureItem(int32 EntryPoint, const struct FVector& CallFunc_VLerp_ReturnValue, class UFortItemThumbnailRenderer* K2Node_Event_InRenderer, class UFortItemDefinition* K2Node_Event_InItemDefinition, enum class EFortItemType CallFunc_GetItemType_ReturnValue, class AActor* CallFunc_CreateWrapPreview_WrapActor, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CaptureItem_C", "ExecuteUbergraph_BP_CaptureItem");

	Params::ABP_CaptureItem_C_ExecuteUbergraph_BP_CaptureItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.K2Node_Event_InRenderer = K2Node_Event_InRenderer;
	Parms.K2Node_Event_InItemDefinition = K2Node_Event_InItemDefinition;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_CreateWrapPreview_WrapActor = CallFunc_CreateWrapPreview_WrapActor;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


