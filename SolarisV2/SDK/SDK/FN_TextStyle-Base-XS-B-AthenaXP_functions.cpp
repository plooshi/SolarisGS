#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-B-AthenaXP.TextStyle-Base-XS-B-AthenaXP_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-B-AthenaXP_C");

	return Clss;
}


// TextStyle-Base-XS-B-AthenaXP_C TextStyle-Base-XS-B-AthenaXP.Default__TextStyle-Base-XS-B-AthenaXP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C* UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C*>(UTextStyleMinusBaseMinusXSMinusBMinusAthenaXP_C::StaticClass()->DefaultObject);

	return Default;
}

}


