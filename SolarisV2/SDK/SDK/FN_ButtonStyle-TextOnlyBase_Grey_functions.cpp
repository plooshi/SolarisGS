#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_Grey.ButtonStyle-TextOnlyBase_Grey_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_Grey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_Grey_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_Grey_C ButtonStyle-TextOnlyBase_Grey.Default__ButtonStyle-TextOnlyBase_Grey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_Grey_C* UButtonStyleMinusTextOnlyBase_Grey_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_Grey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_Grey_C*>(UButtonStyleMinusTextOnlyBase_Grey_C::StaticClass()->DefaultObject);

	return Default;
}

}


