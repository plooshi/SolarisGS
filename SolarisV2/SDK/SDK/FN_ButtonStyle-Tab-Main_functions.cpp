#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main.ButtonStyle-Tab-Main_C
// (None)

class UClass* UButtonStyleMinusTabMinusMain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main_C");

	return Clss;
}


// ButtonStyle-Tab-Main_C ButtonStyle-Tab-Main.Default__ButtonStyle-Tab-Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMain_C* UButtonStyleMinusTabMinusMain_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMain_C*>(UButtonStyleMinusTabMinusMain_C::StaticClass()->DefaultObject);

	return Default;
}

}


