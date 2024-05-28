#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeReward.ChallengeReward_C
// (None)

class UClass* UChallengeReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeReward_C");

	return Clss;
}


// ChallengeReward_C ChallengeReward.Default__ChallengeReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeReward_C* UChallengeReward_C::GetDefaultObj()
{
	static class UChallengeReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeReward_C*>(UChallengeReward_C::StaticClass()->DefaultObject);

	return Default;
}

}


