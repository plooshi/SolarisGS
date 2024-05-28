#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main-Recolor-Red.ButtonStyle-Tab-Main-Recolor-Red_C
// (None)

class UClass* UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main-Recolor-Red_C");

	return Clss;
}


// ButtonStyle-Tab-Main-Recolor-Red_C ButtonStyle-Tab-Main-Recolor-Red.Default__ButtonStyle-Tab-Main-Recolor-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C* UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C*>(UButtonStyleMinusTabMinusMainMinusRecolorMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


