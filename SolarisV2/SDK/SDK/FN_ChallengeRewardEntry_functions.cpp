#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeRewardEntry.ChallengeRewardEntry_C
// (None)

class UClass* UChallengeRewardEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeRewardEntry_C");

	return Clss;
}


// ChallengeRewardEntry_C ChallengeRewardEntry.Default__ChallengeRewardEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeRewardEntry_C* UChallengeRewardEntry_C::GetDefaultObj()
{
	static class UChallengeRewardEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeRewardEntry_C*>(UChallengeRewardEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


