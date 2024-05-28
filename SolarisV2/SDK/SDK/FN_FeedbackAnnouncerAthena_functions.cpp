#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FeedbackAnnouncerAthena.FeedbackAnnouncerAthena_C
// (Actor, Pawn)

class UClass* AFeedbackAnnouncerAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeedbackAnnouncerAthena_C");

	return Clss;
}


// FeedbackAnnouncerAthena_C FeedbackAnnouncerAthena.Default__FeedbackAnnouncerAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFeedbackAnnouncerAthena_C* AFeedbackAnnouncerAthena_C::GetDefaultObj()
{
	static class AFeedbackAnnouncerAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFeedbackAnnouncerAthena_C*>(AFeedbackAnnouncerAthena_C::StaticClass()->DefaultObject);

	return Default;
}

}


