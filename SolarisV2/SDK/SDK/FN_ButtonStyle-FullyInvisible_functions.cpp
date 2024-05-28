#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-FullyInvisible.ButtonStyle-FullyInvisible_C
// (None)

class UClass* UButtonStyleMinusFullyInvisible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-FullyInvisible_C");

	return Clss;
}


// ButtonStyle-FullyInvisible_C ButtonStyle-FullyInvisible.Default__ButtonStyle-FullyInvisible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusFullyInvisible_C* UButtonStyleMinusFullyInvisible_C::GetDefaultObj()
{
	static class UButtonStyleMinusFullyInvisible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusFullyInvisible_C*>(UButtonStyleMinusFullyInvisible_C::StaticClass()->DefaultObject);

	return Default;
}

}


