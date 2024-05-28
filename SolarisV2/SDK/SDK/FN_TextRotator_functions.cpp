#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TextRotator.TextRotator_C
// (None)

class UClass* UTextRotator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextRotator_C");

	return Clss;
}


// TextRotator_C TextRotator.Default__TextRotator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextRotator_C* UTextRotator_C::GetDefaultObj()
{
	static class UTextRotator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextRotator_C*>(UTextRotator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TextRotator.TextRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTextRotator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextRotator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TextRotator.TextRotator_C.ExecuteUbergraph_TextRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextRotator_C::ExecuteUbergraph_TextRotator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextRotator_C", "ExecuteUbergraph_TextRotator");

	Params::UTextRotator_C_ExecuteUbergraph_TextRotator_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


