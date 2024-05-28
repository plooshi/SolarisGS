#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-L-Yellow.ButtonStyle-Primary-L-Yellow_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusLMinusYellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-L-Yellow_C");

	return Clss;
}


// ButtonStyle-Primary-L-Yellow_C ButtonStyle-Primary-L-Yellow.Default__ButtonStyle-Primary-L-Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusLMinusYellow_C* UButtonStyleMinusPrimaryMinusLMinusYellow_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusLMinusYellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusLMinusYellow_C*>(UButtonStyleMinusPrimaryMinusLMinusYellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


