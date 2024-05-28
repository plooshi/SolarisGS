#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C
// (Actor)

class UClass* ABGA_Ostrich_ShieldBubble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_Ostrich_ShieldBubble_C");

	return Clss;
}


// BGA_Ostrich_ShieldBubble_C BGA_Ostrich_ShieldBubble.Default__BGA_Ostrich_ShieldBubble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_Ostrich_ShieldBubble_C* ABGA_Ostrich_ShieldBubble_C::GetDefaultObj()
{
	static class ABGA_Ostrich_ShieldBubble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_Ostrich_ShieldBubble_C*>(ABGA_Ostrich_ShieldBubble_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.SetOverchargeAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Ostrich_ShieldBubble_C::SetOverchargeAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "SetOverchargeAudioEnabled");

	Params::ABGA_Ostrich_ShieldBubble_C_SetOverchargeAudioEnabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.IsShieldActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Ostrich_ShieldBubble_C::IsShieldActive(bool* Return, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "IsShieldActive");

	Params::ABGA_Ostrich_ShieldBubble_C_IsShieldActive_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ForceCancelOvercharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetMechMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Ostrich_ShieldBubble_C::OnRep_ForceCancelOvercharge(class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_ForceCancelOvercharge");

	Params::ABGA_Ostrich_ShieldBubble_C_OnRep_ForceCancelOvercharge_Params Parms{};

	Parms.CallFunc_GetMechMesh_ReturnValue = CallFunc_GetMechMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_IsOvercharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetMechMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMechMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Ostrich_ShieldBubble_C::OnRep_IsOvercharged(class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_IsOvercharged");

	Params::ABGA_Ostrich_ShieldBubble_C_OnRep_IsOvercharged_Params Parms{};

	Parms.CallFunc_GetMechMesh_ReturnValue = CallFunc_GetMechMesh_ReturnValue;
	Parms.CallFunc_GetMechMesh_ReturnValue_1 = CallFunc_GetMechMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_RegenShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OnRep_RegenShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_RegenShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ShieldActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OnRep_ShieldActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_ShieldActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_ShieldDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OnRep_ShieldDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_ShieldDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnRep_CurrentShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetMechMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Ostrich_ShieldBubble_C::OnRep_CurrentShield(bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnRep_CurrentShield");

	Params::ABGA_Ostrich_ShieldBubble_C_OnRep_CurrentShield_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMechMesh_ReturnValue = CallFunc_GetMechMesh_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Ostrich_ShieldBubble_C::UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "UserConstructionScript");

	Params::ABGA_Ostrich_ShieldBubble_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_6 = CallFunc_GetValueAtLevel_ReturnValue_6;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_7 = CallFunc_GetValueAtLevel_ReturnValue_7;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_8 = CallFunc_GetValueAtLevel_ReturnValue_8;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_9 = CallFunc_GetValueAtLevel_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ScaleUpShield__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ScaleUpShield__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ScaleUpShield__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ScaleUpShield__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ScaleUpShield__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ScaleUpShield__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.HitShieldVisuals__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::HitShieldVisuals__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "HitShieldVisuals__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.HitShieldVisuals__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::HitShieldVisuals__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "HitShieldVisuals__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OverchargeShieldPulse__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OverchargeShieldPulse__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OverchargeShieldPulse__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OverchargeShieldPulse__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OverchargeShieldPulse__PulseEvent__EventFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OverchargeShieldPulse__PulseEvent__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OverchargeShieldPulse__PulseEvent__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ReactivateShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ReactivateShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ReactivateShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Ostrich_ShieldBubble_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OnDamageServer");

	Params::ABGA_Ostrich_ShieldBubble_C_OnDamageServer_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BubbleFlash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Sound                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Ostrich_ShieldBubble_C::BubbleFlash(bool Play_Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "BubbleFlash");

	Params::ABGA_Ostrich_ShieldBubble_C_BubbleFlash_Params Parms{};

	Parms.Play_Sound = Play_Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ShieldDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ShieldDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetShieldBool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ResetShieldBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ResetShieldBool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldBootUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ShieldBootUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ShieldBootUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ShieldPowerDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ShieldPowerDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ShieldPowerDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.Regen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::Regen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "Regen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BeginOverchargeShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::BeginOverchargeShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "BeginOverchargeShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.EndOverchargeShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::EndOverchargeShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "EndOverchargeShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetIsOvercharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ResetIsOvercharged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ResetIsOvercharged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.BeginRegen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::BeginRegen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "BeginRegen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ResetOverCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::ResetOverCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ResetOverCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.OvershieldBeginExpirePulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Ostrich_ShieldBubble_C::OvershieldBeginExpirePulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "OvershieldBeginExpirePulse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_Ostrich_ShieldBubble.BGA_Ostrich_ShieldBubble_C.ExecuteUbergraph_BGA_Ostrich_ShieldBubble
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Play_Sound                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetMechMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasGunner_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Ostrich_ShieldBubble_C::ExecuteUbergraph_BGA_Ostrich_ShieldBubble(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Lerp_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Play_Sound, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_MapRangeUnclamped_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, bool CallFunc_GetHasGunner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_Ostrich_ShieldBubble_C", "ExecuteUbergraph_BGA_Ostrich_ShieldBubble");

	Params::ABGA_Ostrich_ShieldBubble_C_ExecuteUbergraph_BGA_Ostrich_ShieldBubble_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Play_Sound = K2Node_CustomEvent_Play_Sound;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMechMesh_ReturnValue = CallFunc_GetMechMesh_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_3 = CallFunc_SpawnSoundAttached_ReturnValue_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_4 = CallFunc_SpawnSoundAttached_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_5 = CallFunc_SpawnSoundAttached_ReturnValue_5;
	Parms.CallFunc_GetHasGunner_ReturnValue = CallFunc_GetHasGunner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


