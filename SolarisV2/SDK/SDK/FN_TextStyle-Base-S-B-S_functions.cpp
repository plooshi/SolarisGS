#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-S.TextStyle-Base-S-B-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-S_C");

	return Clss;
}


// TextStyle-Base-S-B-S_C TextStyle-Base-S-B-S.Default__TextStyle-Base-S-B-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusS_C* UTextStyleMinusBaseMinusSMinusBMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusS_C*>(UTextStyleMinusBaseMinusSMinusBMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


