#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_BurbankSmall_M_CyanTint.TextStyle_BurbankSmall_M_CyanTint_C
// (None)

class UClass* UTextStyle_BurbankSmall_M_CyanTint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_BurbankSmall_M_CyanTint_C");

	return Clss;
}


// TextStyle_BurbankSmall_M_CyanTint_C TextStyle_BurbankSmall_M_CyanTint.Default__TextStyle_BurbankSmall_M_CyanTint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_BurbankSmall_M_CyanTint_C* UTextStyle_BurbankSmall_M_CyanTint_C::GetDefaultObj()
{
	static class UTextStyle_BurbankSmall_M_CyanTint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_BurbankSmall_M_CyanTint_C*>(UTextStyle_BurbankSmall_M_CyanTint_C::StaticClass()->DefaultObject);

	return Default;
}

}


