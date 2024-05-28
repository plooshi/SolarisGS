#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-Skew_SocialInteraction.ButtonStyle-Skew_SocialInteraction_C
// (None)

class UClass* UButtonStyleMinusSkew_SocialInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-Skew_SocialInteraction_C");

	return Clss;
}


// ButtonStyle-Skew_SocialInteraction_C ButtonStyle-Skew_SocialInteraction.Default__ButtonStyle-Skew_SocialInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusSkew_SocialInteraction_C* UButtonStyleMinusSkew_SocialInteraction_C::GetDefaultObj()
{
	static class UButtonStyleMinusSkew_SocialInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusSkew_SocialInteraction_C*>(UButtonStyleMinusSkew_SocialInteraction_C::StaticClass()->DefaultObject);

	return Default;
}

}


