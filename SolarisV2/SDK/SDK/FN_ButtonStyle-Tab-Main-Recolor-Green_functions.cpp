#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Tab-Main-Recolor-Green.ButtonStyle-Tab-Main-Recolor-Green_C
// (None)

class UClass* UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Tab-Main-Recolor-Green_C");

	return Clss;
}


// ButtonStyle-Tab-Main-Recolor-Green_C ButtonStyle-Tab-Main-Recolor-Green.Default__ButtonStyle-Tab-Main-Recolor-Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C* UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C::GetDefaultObj()
{
	static class UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C*>(UButtonStyleMinusTabMinusMainMinusRecolorMinusGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


