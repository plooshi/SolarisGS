#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
// (None)

class UClass* UCinematicCamera_MatineeTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CinematicCamera_MatineeTransition_C");

	return Clss;
}


// CinematicCamera_MatineeTransition_C CinematicCamera_MatineeTransition.Default__CinematicCamera_MatineeTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCinematicCamera_MatineeTransition_C* UCinematicCamera_MatineeTransition_C::GetDefaultObj()
{
	static class UCinematicCamera_MatineeTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCinematicCamera_MatineeTransition_C*>(UCinematicCamera_MatineeTransition_C::StaticClass()->DefaultObject);

	return Default;
}

}


