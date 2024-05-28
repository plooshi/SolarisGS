#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-I-40pc.TextStyle-Base-S-I-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusIMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-I-40pc_C");

	return Clss;
}


// TextStyle-Base-S-I-40pc_C TextStyle-Base-S-I-40pc.Default__TextStyle-Base-S-I-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusIMinus40pc_C* UTextStyleMinusBaseMinusSMinusIMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusIMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusIMinus40pc_C*>(UTextStyleMinusBaseMinusSMinusIMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


