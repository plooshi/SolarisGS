#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FeedbackManager.FeedbackManager_C
// (Actor)

class UClass* AFeedbackManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeedbackManager_C");

	return Clss;
}


// FeedbackManager_C FeedbackManager.Default__FeedbackManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFeedbackManager_C* AFeedbackManager_C::GetDefaultObj()
{
	static class AFeedbackManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFeedbackManager_C*>(AFeedbackManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


