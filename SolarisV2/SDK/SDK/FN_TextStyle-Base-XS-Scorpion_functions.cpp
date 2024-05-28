#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-Scorpion.TextStyle-Base-XS-Scorpion_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusScorpion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-Scorpion_C");

	return Clss;
}


// TextStyle-Base-XS-Scorpion_C TextStyle-Base-XS-Scorpion.Default__TextStyle-Base-XS-Scorpion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusScorpion_C* UTextStyleMinusBaseMinusXSMinusScorpion_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusScorpion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusScorpion_C*>(UTextStyleMinusBaseMinusXSMinusScorpion_C::StaticClass()->DefaultObject);

	return Default;
}

}


