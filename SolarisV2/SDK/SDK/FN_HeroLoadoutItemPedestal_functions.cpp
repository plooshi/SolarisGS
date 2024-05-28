#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C
// (Actor)

class UClass* AHeroLoadoutItemPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroLoadoutItemPedestal_C");

	return Clss;
}


// HeroLoadoutItemPedestal_C HeroLoadoutItemPedestal.Default__HeroLoadoutItemPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeroLoadoutItemPedestal_C* AHeroLoadoutItemPedestal_C::GetDefaultObj()
{
	static class AHeroLoadoutItemPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeroLoadoutItemPedestal_C*>(AHeroLoadoutItemPedestal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.HandleSlotFocusInUIChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHeroLoadoutItemPedestal_C::HandleSlotFocusInUIChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "HandleSlotFocusInUIChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHeroLoadoutItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "OnHeroPawnSetupCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.ExecuteUbergraph_HeroLoadoutItemPedestal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// TScriptInterface<class ICustomCharacterPartOwnerInterface>K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeroLoadoutItemPedestal_C::ExecuteUbergraph_HeroLoadoutItemPedestal(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, TScriptInterface<class ICustomCharacterPartOwnerInterface> K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "ExecuteUbergraph_HeroLoadoutItemPedestal");

	Params::AHeroLoadoutItemPedestal_C_ExecuteUbergraph_HeroLoadoutItemPedestal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface = K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForPartType_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue_2 = CallFunc_GetSkeletalMeshForPartType_ReturnValue_2;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue_3 = CallFunc_GetSkeletalMeshForPartType_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


