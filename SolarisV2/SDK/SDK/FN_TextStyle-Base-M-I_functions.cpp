#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-I.TextStyle-Base-M-I_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-I_C");

	return Clss;
}


// TextStyle-Base-M-I_C TextStyle-Base-M-I.Default__TextStyle-Base-M-I_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusI_C* UTextStyleMinusBaseMinusMMinusI_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusI_C*>(UTextStyleMinusBaseMinusMMinusI_C::StaticClass()->DefaultObject);

	return Default;
}

}


