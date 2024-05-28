#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Outline-Red.ButtonStyle-Outline-Red_C
// (None)

class UClass* UButtonStyleMinusOutlineMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Outline-Red_C");

	return Clss;
}


// ButtonStyle-Outline-Red_C ButtonStyle-Outline-Red.Default__ButtonStyle-Outline-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusOutlineMinusRed_C* UButtonStyleMinusOutlineMinusRed_C::GetDefaultObj()
{
	static class UButtonStyleMinusOutlineMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusOutlineMinusRed_C*>(UButtonStyleMinusOutlineMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


