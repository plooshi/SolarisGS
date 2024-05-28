#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Left.ButtonStyle-Left_C
// (None)

class UClass* UButtonStyleMinusLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Left_C");

	return Clss;
}


// ButtonStyle-Left_C ButtonStyle-Left.Default__ButtonStyle-Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusLeft_C* UButtonStyleMinusLeft_C::GetDefaultObj()
{
	static class UButtonStyleMinusLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusLeft_C*>(UButtonStyleMinusLeft_C::StaticClass()->DefaultObject);

	return Default;
}

}


