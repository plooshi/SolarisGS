#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C
// (SceneComponent)

class UClass* UCreativeTeamColors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeTeamColors_C");

	return Clss;
}


// CreativeTeamColors_C CreativeTeamColors.Default__CreativeTeamColors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativeTeamColors_C* UCreativeTeamColors_C::GetDefaultObj()
{
	static class UCreativeTeamColors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeTeamColors_C*>(UCreativeTeamColors_C::StaticClass()->DefaultObject);

	return Default;
}

}


