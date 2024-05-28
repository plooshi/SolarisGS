#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_ButtonStyle_ChallengesTab.Athena_ButtonStyle_ChallengesTab_C
// (None)

class UClass* UAthena_ButtonStyle_ChallengesTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ButtonStyle_ChallengesTab_C");

	return Clss;
}


// Athena_ButtonStyle_ChallengesTab_C Athena_ButtonStyle_ChallengesTab.Default__Athena_ButtonStyle_ChallengesTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ButtonStyle_ChallengesTab_C* UAthena_ButtonStyle_ChallengesTab_C::GetDefaultObj()
{
	static class UAthena_ButtonStyle_ChallengesTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ButtonStyle_ChallengesTab_C*>(UAthena_ButtonStyle_ChallengesTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


