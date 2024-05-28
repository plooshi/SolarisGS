#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-MediumButton-Disabled.TextStyle-MediumButton-Disabled_C
// (None)

class UClass* UTextStyleMinusMediumButtonMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-MediumButton-Disabled_C");

	return Clss;
}


// TextStyle-MediumButton-Disabled_C TextStyle-MediumButton-Disabled.Default__TextStyle-MediumButton-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusMediumButtonMinusDisabled_C* UTextStyleMinusMediumButtonMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusMediumButtonMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusMediumButtonMinusDisabled_C*>(UTextStyleMinusMediumButtonMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


