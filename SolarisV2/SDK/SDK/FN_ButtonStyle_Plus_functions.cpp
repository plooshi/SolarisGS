#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Plus.ButtonStyle_Plus_C
// (None)

class UClass* UButtonStyle_Plus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Plus_C");

	return Clss;
}


// ButtonStyle_Plus_C ButtonStyle_Plus.Default__ButtonStyle_Plus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Plus_C* UButtonStyle_Plus_C::GetDefaultObj()
{
	static class UButtonStyle_Plus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Plus_C*>(UButtonStyle_Plus_C::StaticClass()->DefaultObject);

	return Default;
}

}


