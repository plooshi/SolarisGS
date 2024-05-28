#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-70pc-Strike.TextStyle-Base-XS-70pc-Strike_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-70pc-Strike_C");

	return Clss;
}


// TextStyle-Base-XS-70pc-Strike_C TextStyle-Base-XS-70pc-Strike.Default__TextStyle-Base-XS-70pc-Strike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C* UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C*>(UTextStyleMinusBaseMinusXSMinus70pcMinusStrike_C::StaticClass()->DefaultObject);

	return Default;
}

}


