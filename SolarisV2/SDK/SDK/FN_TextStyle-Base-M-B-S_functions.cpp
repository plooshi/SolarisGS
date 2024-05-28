#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B-S.TextStyle-Base-M-B-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusBMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B-S_C");

	return Clss;
}


// TextStyle-Base-M-B-S_C TextStyle-Base-M-B-S.Default__TextStyle-Base-M-B-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusBMinusS_C* UTextStyleMinusBaseMinusMMinusBMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusBMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusBMinusS_C*>(UTextStyleMinusBaseMinusMMinusBMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


