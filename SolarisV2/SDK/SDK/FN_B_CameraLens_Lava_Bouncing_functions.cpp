#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C
// (Actor)

class UClass* AB_CameraLens_Lava_Bouncing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Lava_Bouncing_C");

	return Clss;
}


// B_CameraLens_Lava_Bouncing_C B_CameraLens_Lava_Bouncing.Default__B_CameraLens_Lava_Bouncing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Lava_Bouncing_C* AB_CameraLens_Lava_Bouncing_C::GetDefaultObj()
{
	static class AB_CameraLens_Lava_Bouncing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Lava_Bouncing_C*>(AB_CameraLens_Lava_Bouncing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Lava_Bouncing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Lava_Bouncing_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Lava_Bouncing.B_CameraLens_Lava_Bouncing_C.ExecuteUbergraph_B_CameraLens_Lava_Bouncing
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Lava_Bouncing_C::ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Lava_Bouncing_C", "ExecuteUbergraph_B_CameraLens_Lava_Bouncing");

	Params::AB_CameraLens_Lava_Bouncing_C_ExecuteUbergraph_B_CameraLens_Lava_Bouncing_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


