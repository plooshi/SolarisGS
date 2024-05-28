#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeProgressDisplay.ChallengeProgressDisplay_C
// (None)

class UClass* UChallengeProgressDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeProgressDisplay_C");

	return Clss;
}


// ChallengeProgressDisplay_C ChallengeProgressDisplay.Default__ChallengeProgressDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeProgressDisplay_C* UChallengeProgressDisplay_C::GetDefaultObj()
{
	static class UChallengeProgressDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeProgressDisplay_C*>(UChallengeProgressDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


