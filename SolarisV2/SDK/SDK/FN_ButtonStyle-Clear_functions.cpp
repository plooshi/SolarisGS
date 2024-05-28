#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Clear.ButtonStyle-Clear_C
// (None)

class UClass* UButtonStyleMinusClear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Clear_C");

	return Clss;
}


// ButtonStyle-Clear_C ButtonStyle-Clear.Default__ButtonStyle-Clear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusClear_C* UButtonStyleMinusClear_C::GetDefaultObj()
{
	static class UButtonStyleMinusClear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusClear_C*>(UButtonStyleMinusClear_C::StaticClass()->DefaultObject);

	return Default;
}

}


