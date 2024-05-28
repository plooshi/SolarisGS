#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_EmptyBlack.ButtonStyle-TextOnlyBase_EmptyBlack_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_EmptyBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_EmptyBlack_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_EmptyBlack_C ButtonStyle-TextOnlyBase_EmptyBlack.Default__ButtonStyle-TextOnlyBase_EmptyBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_EmptyBlack_C* UButtonStyleMinusTextOnlyBase_EmptyBlack_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_EmptyBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_EmptyBlack_C*>(UButtonStyleMinusTextOnlyBase_EmptyBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


