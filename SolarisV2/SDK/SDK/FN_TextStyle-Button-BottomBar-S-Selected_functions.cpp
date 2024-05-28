#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-BottomBar-S-Selected.TextStyle-Button-BottomBar-S-Selected_C
// (None)

class UClass* UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-BottomBar-S-Selected_C");

	return Clss;
}


// TextStyle-Button-BottomBar-S-Selected_C TextStyle-Button-BottomBar-S-Selected.Default__TextStyle-Button-BottomBar-S-Selected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C* UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C*>(UTextStyleMinusButtonMinusBottomBarMinusSMinusSelected_C::StaticClass()->DefaultObject);

	return Default;
}

}


