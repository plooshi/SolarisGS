#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// (None)

class UClass* UGA_Ranged_GenericDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_GenericDamage_C");

	return Clss;
}


// GA_Ranged_GenericDamage_C GA_Ranged_GenericDamage.Default__GA_Ranged_GenericDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_GenericDamage_C* UGA_Ranged_GenericDamage_C::GetDefaultObj()
{
	static class UGA_Ranged_GenericDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_GenericDamage_C*>(UGA_Ranged_GenericDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          GameplayEventData                                                (Parm, OutParm)
// struct FGameplayTagContainer       GT_TargetTags                                                    (Edit, BlueprintVisible)
// struct FGameplayTagContainer       GT_InstigatorTags                                                (Edit, BlueprintVisible)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetCurrentPawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// struct FGameplayTagContainer       CallFunc_GetWeaponDataGameplayTags_GameplayTags                  (None)
// bool                               CallFunc_WeaponDataIsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ranged_GenericDamage_C::GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData, const struct FGameplayTagContainer& GT_TargetTags, const struct FGameplayTagContainer& GT_InstigatorTags, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, bool CallFunc_WeaponDataIsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ranged_GenericDamage_C", "GetEventData");

	Params::UGA_Ranged_GenericDamage_C_GetEventData_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.GT_TargetTags = GT_TargetTags;
	Parms.GT_InstigatorTags = GT_InstigatorTags;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPawn_ReturnValue = CallFunc_GetCurrentPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetWeaponDataGameplayTags_GameplayTags = CallFunc_GetWeaponDataGameplayTags_GameplayTags;
	Parms.CallFunc_WeaponDataIsValid_ReturnValue = CallFunc_WeaponDataIsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayEventData != nullptr)
		*GameplayEventData = std::move(Parms.GameplayEventData);

}


// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          CallFunc_GetEventData_GameplayEventData                          (None)

void UGA_Ranged_GenericDamage_C::K2_CommitExecute(const struct FGameplayEventData& CallFunc_GetEventData_GameplayEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ranged_GenericDamage_C", "K2_CommitExecute");

	Params::UGA_Ranged_GenericDamage_C_K2_CommitExecute_Params Parms{};

	Parms.CallFunc_GetEventData_GameplayEventData = CallFunc_GetEventData_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


