#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Skew_Tab.ButtonStyle_Skew_Tab_C
// (None)

class UClass* UButtonStyle_Skew_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Skew_Tab_C");

	return Clss;
}


// ButtonStyle_Skew_Tab_C ButtonStyle_Skew_Tab.Default__ButtonStyle_Skew_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Skew_Tab_C* UButtonStyle_Skew_Tab_C::GetDefaultObj()
{
	static class UButtonStyle_Skew_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Skew_Tab_C*>(UButtonStyle_Skew_Tab_C::StaticClass()->DefaultObject);

	return Default;
}

}


