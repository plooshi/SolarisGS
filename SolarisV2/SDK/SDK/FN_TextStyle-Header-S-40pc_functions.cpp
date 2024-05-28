#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-S-40pc.TextStyle-Header-S-40pc_C
// (None)

class UClass* UTextStyleMinusHeaderMinusSMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-S-40pc_C");

	return Clss;
}


// TextStyle-Header-S-40pc_C TextStyle-Header-S-40pc.Default__TextStyle-Header-S-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusSMinus40pc_C* UTextStyleMinusHeaderMinusSMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusSMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusSMinus40pc_C*>(UTextStyleMinusHeaderMinusSMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


