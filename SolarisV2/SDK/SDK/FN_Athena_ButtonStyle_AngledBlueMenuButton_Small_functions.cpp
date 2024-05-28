#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_ButtonStyle_AngledBlueMenuButton_Small.Athena_ButtonStyle_AngledBlueMenuButton_Small_C
// (None)

class UClass* UAthena_ButtonStyle_AngledBlueMenuButton_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ButtonStyle_AngledBlueMenuButton_Small_C");

	return Clss;
}


// Athena_ButtonStyle_AngledBlueMenuButton_Small_C Athena_ButtonStyle_AngledBlueMenuButton_Small.Default__Athena_ButtonStyle_AngledBlueMenuButton_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ButtonStyle_AngledBlueMenuButton_Small_C* UAthena_ButtonStyle_AngledBlueMenuButton_Small_C::GetDefaultObj()
{
	static class UAthena_ButtonStyle_AngledBlueMenuButton_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ButtonStyle_AngledBlueMenuButton_Small_C*>(UAthena_ButtonStyle_AngledBlueMenuButton_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


