#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FeedbackAnnouncer.FeedbackAnnouncer_C
// (Actor, Pawn)

class UClass* AFeedbackAnnouncer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeedbackAnnouncer_C");

	return Clss;
}


// FeedbackAnnouncer_C FeedbackAnnouncer.Default__FeedbackAnnouncer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFeedbackAnnouncer_C* AFeedbackAnnouncer_C::GetDefaultObj()
{
	static class AFeedbackAnnouncer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFeedbackAnnouncer_C*>(AFeedbackAnnouncer_C::StaticClass()->DefaultObject);

	return Default;
}

}


