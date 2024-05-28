#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-40pc.TextStyle-Base-S-B-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-40pc_C");

	return Clss;
}


// TextStyle-Base-S-B-40pc_C TextStyle-Base-S-B-40pc.Default__TextStyle-Base-S-B-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinus40pc_C* UTextStyleMinusBaseMinusSMinusBMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinus40pc_C*>(UTextStyleMinusBaseMinusSMinusBMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


