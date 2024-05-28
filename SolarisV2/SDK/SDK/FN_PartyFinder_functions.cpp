#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PartyFinder.PartyFinder_C
// (None)

class UClass* UPartyFinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyFinder_C");

	return Clss;
}


// PartyFinder_C PartyFinder.Default__PartyFinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPartyFinder_C* UPartyFinder_C::GetDefaultObj()
{
	static class UPartyFinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyFinder_C*>(UPartyFinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


