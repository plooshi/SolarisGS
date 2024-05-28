#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-TextOnlyBase_S-B.ButtonStyle-TextOnlyBase_S-B_C
// (None)

class UClass* UButtonStyleMinusTextOnlyBase_SMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-TextOnlyBase_S-B_C");

	return Clss;
}


// ButtonStyle-TextOnlyBase_S-B_C ButtonStyle-TextOnlyBase_S-B.Default__ButtonStyle-TextOnlyBase_S-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusTextOnlyBase_SMinusB_C* UButtonStyleMinusTextOnlyBase_SMinusB_C::GetDefaultObj()
{
	static class UButtonStyleMinusTextOnlyBase_SMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusTextOnlyBase_SMinusB_C*>(UButtonStyleMinusTextOnlyBase_SMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


