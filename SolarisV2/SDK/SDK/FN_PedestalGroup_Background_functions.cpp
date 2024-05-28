#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PedestalGroup_Background.PedestalGroup_Background_C
// (Actor)

class UClass* APedestalGroup_Background_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PedestalGroup_Background_C");

	return Clss;
}


// PedestalGroup_Background_C PedestalGroup_Background.Default__PedestalGroup_Background_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APedestalGroup_Background_C* APedestalGroup_Background_C::GetDefaultObj()
{
	static class APedestalGroup_Background_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APedestalGroup_Background_C*>(APedestalGroup_Background_C::StaticClass()->DefaultObject);

	return Default;
}

}


