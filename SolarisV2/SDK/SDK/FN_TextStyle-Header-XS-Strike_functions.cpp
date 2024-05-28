#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XS-Strike.TextStyle-Header-XS-Strike_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXSMinusStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XS-Strike_C");

	return Clss;
}


// TextStyle-Header-XS-Strike_C TextStyle-Header-XS-Strike.Default__TextStyle-Header-XS-Strike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXSMinusStrike_C* UTextStyleMinusHeaderMinusXSMinusStrike_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXSMinusStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXSMinusStrike_C*>(UTextStyleMinusHeaderMinusXSMinusStrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


