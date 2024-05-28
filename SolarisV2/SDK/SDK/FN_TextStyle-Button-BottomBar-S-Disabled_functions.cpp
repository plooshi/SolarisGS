#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-BottomBar-S-Disabled.TextStyle-Button-BottomBar-S-Disabled_C
// (None)

class UClass* UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-BottomBar-S-Disabled_C");

	return Clss;
}


// TextStyle-Button-BottomBar-S-Disabled_C TextStyle-Button-BottomBar-S-Disabled.Default__TextStyle-Button-BottomBar-S-Disabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C* UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C*>(UTextStyleMinusButtonMinusBottomBarMinusSMinusDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


