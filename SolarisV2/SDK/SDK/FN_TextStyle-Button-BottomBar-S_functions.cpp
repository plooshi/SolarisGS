#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Button-BottomBar-S.TextStyle-Button-BottomBar-S_C
// (None)

class UClass* UTextStyleMinusButtonMinusBottomBarMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Button-BottomBar-S_C");

	return Clss;
}


// TextStyle-Button-BottomBar-S_C TextStyle-Button-BottomBar-S.Default__TextStyle-Button-BottomBar-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusButtonMinusBottomBarMinusS_C* UTextStyleMinusButtonMinusBottomBarMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusButtonMinusBottomBarMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusButtonMinusBottomBarMinusS_C*>(UTextStyleMinusButtonMinusBottomBarMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


