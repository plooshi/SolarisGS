#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
// (None)

class UClass* UGA_DefaultPlayer_InteractUse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DefaultPlayer_InteractUse_C");

	return Clss;
}


// GA_DefaultPlayer_InteractUse_C GA_DefaultPlayer_InteractUse.Default__GA_DefaultPlayer_InteractUse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DefaultPlayer_InteractUse_C* UGA_DefaultPlayer_InteractUse_C::GetDefaultObj()
{
	static class UGA_DefaultPlayer_InteractUse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DefaultPlayer_InteractUse_C*>(UGA_DefaultPlayer_InteractUse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCancelled_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnCancelled_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCancelled_A513E1E044E129CC612DF5A23589BC9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnInterrupted_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnInterrupted_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnInterrupted_A513E1E044E129CC612DF5A23589BC9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnBlendOut_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnBlendOut_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnBlendOut_A513E1E044E129CC612DF5A23589BC9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCompleted_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnCompleted_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCompleted_A513E1E044E129CC612DF5A23589BC9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.ExecuteUbergraph_GA_DefaultPlayer_InteractUse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_InteractUse_C::ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "ExecuteUbergraph_GA_DefaultPlayer_InteractUse");

	Params::UGA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


