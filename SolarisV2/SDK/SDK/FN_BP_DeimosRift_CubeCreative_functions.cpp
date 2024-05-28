#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C
// (Actor)

class UClass* ABP_DeimosRift_CubeCreative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeimosRift_CubeCreative_C");

	return Clss;
}


// BP_DeimosRift_CubeCreative_C BP_DeimosRift_CubeCreative.Default__BP_DeimosRift_CubeCreative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeimosRift_CubeCreative_C* ABP_DeimosRift_CubeCreative_C::GetDefaultObj()
{
	static class ABP_DeimosRift_CubeCreative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeimosRift_CubeCreative_C*>(ABP_DeimosRift_CubeCreative_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnRep_ServerSpawnTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::OnRep_ServerSpawnTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "OnRep_ServerSpawnTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_CubeCreative_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "OnDamageServer");

	Params::ABP_DeimosRift_CubeCreative_C_OnDamageServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.SetLifeTimeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::SetLifeTimeTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "SetLifeTimeTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.LifeTimeExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::LifeTimeExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "LifeTimeExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BP_Cosmetic_Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BP_Cosmetic_Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BP_Cosmetic_Idle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BP_Cosmetic_Idle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BP_Cosmetic_RampUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BP_Cosmetic_RampUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BP_Cosmetic_ShouldDie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BP_Cosmetic_ShouldDie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.HideSpawner
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::HideSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "HideSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BlueprintHideRift
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BlueprintHideRift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BlueprintHideRift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BlueprintHideVFX
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_CubeCreative_C::BlueprintHideVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "BlueprintHideVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 SpawnedAI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_CubeCreative_C::OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "OnStartedEncounterSpawn");

	Params::ABP_DeimosRift_CubeCreative_C_OnStartedEncounterSpawn_Params Parms{};

	Parms.SpawnedAI = SpawnedAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.ExecuteUbergraph_BP_DeimosRift_CubeCreative
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            K2Node_DynamicCast_AsSphere_Collision                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_Event_SpawnedAI                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DeimosRift_CubeCreative_C::ExecuteUbergraph_BP_DeimosRift_CubeCreative(int32 EntryPoint, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USphereComponent* K2Node_DynamicCast_AsSphere_Collision, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, class AFortAIPawn* K2Node_Event_SpawnedAI, bool CallFunc_Not_PreBool_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeimosRift_CubeCreative_C", "ExecuteUbergraph_BP_DeimosRift_CubeCreative");

	Params::ABP_DeimosRift_CubeCreative_C_ExecuteUbergraph_BP_DeimosRift_CubeCreative_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsSphere_Collision = K2Node_DynamicCast_AsSphere_Collision;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_Event_SpawnedAI = K2Node_Event_SpawnedAI;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


