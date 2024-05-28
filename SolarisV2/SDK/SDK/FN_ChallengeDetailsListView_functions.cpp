#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeDetailsListView.ChallengeDetailsListView_C
// (None)

class UClass* UChallengeDetailsListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeDetailsListView_C");

	return Clss;
}


// ChallengeDetailsListView_C ChallengeDetailsListView.Default__ChallengeDetailsListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeDetailsListView_C* UChallengeDetailsListView_C::GetDefaultObj()
{
	static class UChallengeDetailsListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeDetailsListView_C*>(UChallengeDetailsListView_C::StaticClass()->DefaultObject);

	return Default;
}

}


