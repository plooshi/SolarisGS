#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase.ButtonStyle-TextOnlyBase_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_C ButtonStyle-TextOnlyBase.Default__ButtonStyle-TextOnlyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_C* UButtonStyleMinusTextOnlyBase_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_C*>(UButtonStyleMinusTextOnlyBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


