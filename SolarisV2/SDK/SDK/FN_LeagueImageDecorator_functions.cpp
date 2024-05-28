#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeagueImageDecorator.LeagueImageDecorator_C
// (None)

class UClass* ULeagueImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeagueImageDecorator_C");

	return Clss;
}


// LeagueImageDecorator_C LeagueImageDecorator.Default__LeagueImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeagueImageDecorator_C* ULeagueImageDecorator_C::GetDefaultObj()
{
	static class ULeagueImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeagueImageDecorator_C*>(ULeagueImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


