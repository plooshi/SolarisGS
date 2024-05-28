#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Invisible.ButtonStyle-Invisible_C
// (None)

class UClass* UButtonStyleMinusInvisible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Invisible_C");

	return Clss;
}


// ButtonStyle-Invisible_C ButtonStyle-Invisible.Default__ButtonStyle-Invisible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusInvisible_C* UButtonStyleMinusInvisible_C::GetDefaultObj()
{
	static class UButtonStyleMinusInvisible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusInvisible_C*>(UButtonStyleMinusInvisible_C::StaticClass()->DefaultObject);

	return Default;
}

}


