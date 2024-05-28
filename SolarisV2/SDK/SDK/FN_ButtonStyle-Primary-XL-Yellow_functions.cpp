#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-XL-Yellow.ButtonStyle-Primary-XL-Yellow_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusXLMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-XL-Yellow_C");

	return Clss;
}


// ButtonStyle-Primary-XL-Yellow_C ButtonStyle-Primary-XL-Yellow.Default__ButtonStyle-Primary-XL-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusXLMinusYellow_C* UButtonStyleMinusPrimaryMinusXLMinusYellow_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusXLMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusXLMinusYellow_C*>(UButtonStyleMinusPrimaryMinusXLMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


