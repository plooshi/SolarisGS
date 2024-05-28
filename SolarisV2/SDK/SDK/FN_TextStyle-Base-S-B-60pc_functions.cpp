#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-60pc.TextStyle-Base-S-B-60pc_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinus60pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-60pc_C");

	return Clss;
}


// TextStyle-Base-S-B-60pc_C TextStyle-Base-S-B-60pc.Default__TextStyle-Base-S-B-60pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinus60pc_C* UTextStyleMinusBaseMinusSMinusBMinus60pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinus60pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinus60pc_C*>(UTextStyleMinusBaseMinusSMinusBMinus60pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


