#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeCategoryTab.ChallengeCategoryTab_C
// (None)

class UClass* UChallengeCategoryTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeCategoryTab_C");

	return Clss;
}


// ChallengeCategoryTab_C ChallengeCategoryTab.Default__ChallengeCategoryTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeCategoryTab_C* UChallengeCategoryTab_C::GetDefaultObj()
{
	static class UChallengeCategoryTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeCategoryTab_C*>(UChallengeCategoryTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


