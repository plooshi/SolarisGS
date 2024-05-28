#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-M-B-40pc.TextStyle-Base-M-B-40pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusMMinusBMinus40pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-M-B-40pc_C");

	return Clss;
}


// TextStyle-Base-M-B-40pc_C TextStyle-Base-M-B-40pc.Default__TextStyle-Base-M-B-40pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusMMinusBMinus40pc_C* UTextStyleMinusBaseMinusMMinusBMinus40pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusMMinusBMinus40pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusMMinusBMinus40pc_C*>(UTextStyleMinusBaseMinusMMinusBMinus40pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


