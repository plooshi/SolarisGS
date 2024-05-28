#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Green.ButtonStyle-Outline-Green_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Green_C");

	return Clss;
}


// ButtonStyle-Outline-Green_C ButtonStyle-Outline-Green.Default__ButtonStyle-Outline-Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusGreen_C* UButtonStyleMinusOutlineMinusGreen_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusGreen_C*>(UButtonStyleMinusOutlineMinusGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


