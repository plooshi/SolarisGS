#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C
// (Actor)

class UClass* AB_Decal_WaterBuffalo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Decal_WaterBuffalo_C");

	return Clss;
}


// B_Decal_WaterBuffalo_C B_Decal_WaterBuffalo.Default__B_Decal_WaterBuffalo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Decal_WaterBuffalo_C* AB_Decal_WaterBuffalo_C::GetDefaultObj()
{
	static class AB_Decal_WaterBuffalo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Decal_WaterBuffalo_C*>(AB_Decal_WaterBuffalo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_WaterBuffalo_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "UserConstructionScript");

	Params::AB_Decal_WaterBuffalo_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Decal_WaterBuffalo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Decal_WaterBuffalo.B_Decal_WaterBuffalo_C.ExecuteUbergraph_B_Decal_WaterBuffalo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_WaterBuffalo_C::ExecuteUbergraph_B_Decal_WaterBuffalo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Decal_WaterBuffalo_C", "ExecuteUbergraph_B_Decal_WaterBuffalo");

	Params::AB_Decal_WaterBuffalo_C_ExecuteUbergraph_B_Decal_WaterBuffalo_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


