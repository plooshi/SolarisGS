#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChallengeTile_EmptyButton.ChallengeTile_EmptyButton_C
// (None)

class UClass* UChallengeTile_EmptyButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeTile_EmptyButton_C");

	return Clss;
}


// ChallengeTile_EmptyButton_C ChallengeTile_EmptyButton.Default__ChallengeTile_EmptyButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeTile_EmptyButton_C* UChallengeTile_EmptyButton_C::GetDefaultObj()
{
	static class UChallengeTile_EmptyButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeTile_EmptyButton_C*>(UChallengeTile_EmptyButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


