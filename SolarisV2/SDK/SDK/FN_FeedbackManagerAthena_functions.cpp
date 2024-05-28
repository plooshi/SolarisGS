#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FeedbackManagerAthena.FeedbackManagerAthena_C
// (Actor)

class UClass* AFeedbackManagerAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeedbackManagerAthena_C");

	return Clss;
}


// FeedbackManagerAthena_C FeedbackManagerAthena.Default__FeedbackManagerAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFeedbackManagerAthena_C* AFeedbackManagerAthena_C::GetDefaultObj()
{
	static class AFeedbackManagerAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFeedbackManagerAthena_C*>(AFeedbackManagerAthena_C::StaticClass()->DefaultObject);

	return Default;
}

}


