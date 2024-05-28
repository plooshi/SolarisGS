#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Com-Tip.TextStyle-Com-Tip_C
// (None)

class UClass* UTextStyleMinusComMinusTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Com-Tip_C");

	return Clss;
}


// TextStyle-Com-Tip_C TextStyle-Com-Tip.Default__TextStyle-Com-Tip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComMinusTip_C* UTextStyleMinusComMinusTip_C::GetDefaultObj()
{
	static class UTextStyleMinusComMinusTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComMinusTip_C*>(UTextStyleMinusComMinusTip_C::StaticClass()->DefaultObject);

	return Default;
}

}


