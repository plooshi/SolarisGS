#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeDetailsRewardTrack.ChallengeDetailsRewardTrack_C
// (None)

class UClass* UChallengeDetailsRewardTrack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeDetailsRewardTrack_C");

	return Clss;
}


// ChallengeDetailsRewardTrack_C ChallengeDetailsRewardTrack.Default__ChallengeDetailsRewardTrack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeDetailsRewardTrack_C* UChallengeDetailsRewardTrack_C::GetDefaultObj()
{
	static class UChallengeDetailsRewardTrack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeDetailsRewardTrack_C*>(UChallengeDetailsRewardTrack_C::StaticClass()->DefaultObject);

	return Default;
}

}


