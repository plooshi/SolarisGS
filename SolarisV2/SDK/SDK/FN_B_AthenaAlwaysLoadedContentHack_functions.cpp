#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
// (Actor)

class UClass* AB_AthenaAlwaysLoadedContentHack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_AthenaAlwaysLoadedContentHack_C");

	return Clss;
}


// B_AthenaAlwaysLoadedContentHack_C B_AthenaAlwaysLoadedContentHack.Default__B_AthenaAlwaysLoadedContentHack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_AthenaAlwaysLoadedContentHack_C* AB_AthenaAlwaysLoadedContentHack_C::GetDefaultObj()
{
	static class AB_AthenaAlwaysLoadedContentHack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_AthenaAlwaysLoadedContentHack_C*>(AB_AthenaAlwaysLoadedContentHack_C::StaticClass()->DefaultObject);

	return Default;
}

}


