#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main-Recolor.ButtonStyle-Tab-Main-Recolor_C
// (None)

class UClass* UButtonStyleMinusTabMinusMainMinusRecolor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main-Recolor_C");

	return Clss;
}


// ButtonStyle-Tab-Main-Recolor_C ButtonStyle-Tab-Main-Recolor.Default__ButtonStyle-Tab-Main-Recolor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMainMinusRecolor_C* UButtonStyleMinusTabMinusMainMinusRecolor_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMainMinusRecolor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMainMinusRecolor_C*>(UButtonStyleMinusTabMinusMainMinusRecolor_C::StaticClass()->DefaultObject);

	return Default;
}

}


