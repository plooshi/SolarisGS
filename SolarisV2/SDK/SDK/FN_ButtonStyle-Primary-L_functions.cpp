#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Primary-L.ButtonStyle-Primary-L_C
// (None)

class UClass* UButtonStyleMinusPrimaryMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Primary-L_C");

	return Clss;
}


// ButtonStyle-Primary-L_C ButtonStyle-Primary-L.Default__ButtonStyle-Primary-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusPrimaryMinusL_C* UButtonStyleMinusPrimaryMinusL_C::GetDefaultObj()
{
	static class UButtonStyleMinusPrimaryMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusPrimaryMinusL_C*>(UButtonStyleMinusPrimaryMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


