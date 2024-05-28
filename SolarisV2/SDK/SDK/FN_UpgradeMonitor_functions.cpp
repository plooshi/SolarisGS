#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeMonitor.UpgradeMonitor_C
// (Actor)

class UClass* AUpgradeMonitor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeMonitor_C");

	return Clss;
}


// UpgradeMonitor_C UpgradeMonitor.Default__UpgradeMonitor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradeMonitor_C* AUpgradeMonitor_C::GetDefaultObj()
{
	static class AUpgradeMonitor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradeMonitor_C*>(AUpgradeMonitor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeMonitor.UpgradeMonitor_C.SetMonitorDistort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::SetMonitorDistort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "SetMonitorDistort");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.SetUtilities-Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ActiveMinusIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::SetUtilitiesMinusIcon(class UTexture2D* ActiveMinusIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "SetUtilities-Icon");

	Params::AUpgradeMonitor_C_SetUtilitiesMinusIcon_Params Parms{};

	Parms.ActiveMinusIcon = ActiveMinusIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "UserConstructionScript");

	Params::AUpgradeMonitor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::IconTransition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "IconTransition__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::IconTransition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "IconTransition__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Utilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::ActivateMinusUtilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "Activate-Utilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Gadgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::ActivateMinusGadgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "Activate-Gadgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activation-Distortion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::ActivationMinusDistortion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "Activation-Distortion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeMonitor.UpgradeMonitor_C.ExecuteUbergraph_UpgradeMonitor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::ExecuteUbergraph_UpgradeMonitor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeMonitor_C", "ExecuteUbergraph_UpgradeMonitor");

	Params::AUpgradeMonitor_C_ExecuteUbergraph_UpgradeMonitor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


