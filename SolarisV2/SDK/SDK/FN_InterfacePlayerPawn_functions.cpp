#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
// (None)

class UClass* IInterfacePlayerPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterfacePlayerPawn_C");

	return Clss;
}


// InterfacePlayerPawn_C InterfacePlayerPawn.Default__InterfacePlayerPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterfacePlayerPawn_C* IInterfacePlayerPawn_C::GetDefaultObj()
{
	static class IInterfacePlayerPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterfacePlayerPawn_C*>(IInterfacePlayerPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfacePlayerPawn_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingLeft_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfacePlayerPawn_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingRight_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfacePlayerPawn_C::FootStepRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterfacePlayerPawn_C::FootStepLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Melee_Color_Set                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterfacePlayerPawn_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "Melee_Effect_Color");

	Params::IInterfacePlayerPawn_C_Melee_Effect_Color_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = std::move(Parms.Melee_Color_Set);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First_Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfacePlayerPawn_C::MeleeSwingLeft(bool First_Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingLeft");

	Params::IInterfacePlayerPawn_C_MeleeSwingLeft_Params Parms{};

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               First_Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterfacePlayerPawn_C::MeleeSwingRight(bool First_Right)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingRight");

	Params::IInterfacePlayerPawn_C_MeleeSwingRight_Params Parms{};

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);

}

}


