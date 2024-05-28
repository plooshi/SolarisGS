#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-M-S.TextStyle-Header-M-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusMMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-M-S_C");

	return Clss;
}


// TextStyle-Header-M-S_C TextStyle-Header-M-S.Default__TextStyle-Header-M-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusMMinusS_C* UTextStyleMinusHeaderMinusMMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusMMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusMMinusS_C*>(UTextStyleMinusHeaderMinusMMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


