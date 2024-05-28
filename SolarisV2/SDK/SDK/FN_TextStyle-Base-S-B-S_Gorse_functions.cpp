#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-S-B-S_Gorse.TextStyle-Base-S-B-S_Gorse_C
// (None)

class UClass* UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-S-B-S_Gorse_C");

	return Clss;
}


// TextStyle-Base-S-B-S_Gorse_C TextStyle-Base-S-B-S_Gorse.Default__TextStyle-Base-S-B-S_Gorse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C* UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C*>(UTextStyleMinusBaseMinusSMinusBMinusS_Gorse_C::StaticClass()->DefaultObject);

	return Default;
}

}


