#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-RotatorBorder.ButtonStyle-RotatorBorder_C
// (None)

class UClass* UButtonStyleMinusRotatorBorder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-RotatorBorder_C");

	return Clss;
}


// ButtonStyle-RotatorBorder_C ButtonStyle-RotatorBorder.Default__ButtonStyle-RotatorBorder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusRotatorBorder_C* UButtonStyleMinusRotatorBorder_C::GetDefaultObj()
{
	static class UButtonStyleMinusRotatorBorder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusRotatorBorder_C*>(UButtonStyleMinusRotatorBorder_C::StaticClass()->DefaultObject);

	return Default;
}

}


