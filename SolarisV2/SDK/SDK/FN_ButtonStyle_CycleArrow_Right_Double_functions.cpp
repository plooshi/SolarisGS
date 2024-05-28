#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_CycleArrow_Right_Double.ButtonStyle_CycleArrow_Right_Double_C
// (None)

class UClass* UButtonStyle_CycleArrow_Right_Double_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_CycleArrow_Right_Double_C");

	return Clss;
}


// ButtonStyle_CycleArrow_Right_Double_C ButtonStyle_CycleArrow_Right_Double.Default__ButtonStyle_CycleArrow_Right_Double_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_CycleArrow_Right_Double_C* UButtonStyle_CycleArrow_Right_Double_C::GetDefaultObj()
{
	static class UButtonStyle_CycleArrow_Right_Double_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_CycleArrow_Right_Double_C*>(UButtonStyle_CycleArrow_Right_Double_C::StaticClass()->DefaultObject);

	return Default;
}

}


