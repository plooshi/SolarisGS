#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B.TextStyle-Base-S-B_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusB_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B_C");

	return Clss;
}


// TextStyle-Base-S-B_C TextStyle-Base-S-B.Default__TextStyle-Base-S-B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusB_C* UTextStyleMinusBaseMinusSMinusB_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusB_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusB_C*>(UTextStyleMinusBaseMinusSMinusB_C::StaticClass()->DefaultObject);

	return Default;
}

}


